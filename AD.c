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
**  Filename :	AD.c
**  Abstract :	This file implements device driver for AD module.
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

#pragma interrupt INTAD PWM_ADCHANG

/*
*******************************************************************************
**  Include files
*******************************************************************************
*/
#include "macrodriver.h"

/*
*******************************************************************************
**  Global define
*******************************************************************************
*/
/* Start user code for global definition. Do not edit comment generated here */
/* End user code for global definition. Do not edit comment generated here */


/*
**-----------------------------------------------------------------------------
**
**	Abstract:
**		This function initializes the A/D.
**
**	Parameters:
**		None
**
**	Returns:
**		None
**
**-----------------------------------------------------------------------------
*/
void AD_Init(void)
{
	/* A/D変換待機モード設定 */
	ADCS = 0x0;
	ADCE = 0x1;

	/* アナログ入力チャネルにANI0 を設定 */
	ADS = 0x0;

	/* A/Dコンバータモード設定 */
	PMC2 |= 0x1;
	/* PM20に入力モードを設定 */
	PM2 |= 0x1;

	/* 基準値設定 */
	ADM |= 0x38;

	/* 2サイクル待機 */
	NOP();
	NOP();

	/* 割り込み禁止 */
	ADMK = 1;

	/* 割り込み要求フラグをクリア */
	ADIF = 0;

	/* 割り込み要求を許可 */
	ADMK = 0;

	/* A/D動作開始 */
	ADCS = 1;
}


__interrupt void PWM_ADCHANG( void )
{
	UINT uADChange;

	/* A/D出力結果を取得 */
	uADChange = ADCR;
	
	/* [+ todo +] */ /* CMP11 の設定値を決める */
	/* Duty値を設定 */
	CMP11 = uADChange >> 2;
	/* タイマカウント開始 */
	TMHE1 = 0x1;

	/* A/D動作開始 */
	ADCS = 1;
}

