/*
*******************************************************************************
**
**  This device driver was created by Applilet2 for 78K0S/Kx1+
**  8-Bit Single-Chip Microcontrollers
**
**  Copyright(C) NEC Electronics Corporation 2002 - 2008
**  All rights reserved by NEC Electronics Corporation.
**
**  This program should be used on your own responsibility.
**  NEC Electronics Corporation assumes no responsibility for any losses
**  incurred by customers or third parties arising from the use of this file.
**
**  Filename :	pwm.c
**  Abstract :	This file implements device driver for PWM module.
**  APIlib :	Applilet2 for 78K0S/Kx1+ V2.41 [9 Sep. 2008]
**
**  Device :	uPD78F9222
**
**  Compiler :	CC78K0S
**
**  Creation date:	2008/01/05
**  
*******************************************************************************
*/
/* [+ memo +] */ /* 割り込み種類と割り込み時にコールしたい関数を設定 */
#pragma interrupt INTP3 PWM_CHANGE

/*
*******************************************************************************
**  Include files
*******************************************************************************
*/
#include "macrodriver.h"
#include "pwm.h"
/* Start user code for include definition. Do not edit comment generated here */
/* End user code for include definition. Do not edit comment generated here */
#include "user_define.h"

/*
*******************************************************************************
**  Global define
*******************************************************************************
*/
/* Start user code for global definition. Do not edit comment generated here */
/* End user code for global definition. Do not edit comment generated here */

UINT gulSw2_PushCnt;

/*
**-----------------------------------------------------------------------------
**
**	Abstract:
**		This function initializes the PWM I/O.
**
**	Parameters:
**		None
**
**	Returns:
**		None
**
**-----------------------------------------------------------------------------
*/
UINT ulGetDuty( UINT DutyLevel )
{
	return (((TMHMD1_CMP01_BASEVALUE+1)*DutyLevel)/10) + 1;
}

/*
**-----------------------------------------------------------------------------
**
**	Abstract:
**		This function initializes the PWM I/O.
**
**	Parameters:
**		None
**
**	Returns:
**		None
**
**-----------------------------------------------------------------------------
*/
void PWM_Init(void)
{
	/* 外部割り込みモード・レジスタ設定 */
	/* 割り込み出力禁止 */
	PMK3 = 1;
	/* [+memo+] */ /* 立下りエッジで割り込みを検出 */
	INTM1 = 0x0;
	/* 割り込み要求フラグをリセット */
	PIF3 = 1;

	/* 動作タイマカウントを停止 */
	TMHE1 = TMHMD1_TMHE1_DISABLE;
	/* タイマHモードのレジスタ設定 */
	TMHMD1 = 0x49;
	/* コンペア値（周期）を設定 */
	CMP01 = TMHMD1_CMP01_BASEVALUE;
	/* コンペア値（デューティ）の設定 */
	gulSw2_PushCnt = 4;

	/* PM41 を入力 */
	PM4 |= 0x2;
	/* PM42 を出力 */
	PM4 &= 0xFB;
	
	/* 割り込み出力許可 */
	PMK3 = 0;
}

__interrupt void PWM_CHANGE(void)
{
	gulSw2_PushCnt++;

	if( gulSw2_PushCnt > 10 ){
		gulSw2_PushCnt = 0;
	}

	if ( gulSw2_PushCnt > 0 ){
		CMP11 = ulGetDuty(gulSw2_PushCnt);
		/* タイマカウント開始 */
		TMHE1 = 0x1;
	}else{
		/* タイマカウント停止 */
		TMHE1 = 0x0;
	}
}

/* Start adding user code. Do not edit comment generated here */
/* End user code adding. Do not edit comment generated here */

