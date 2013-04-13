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
**  Filename :	 main.c
**  Abstract :	This file implements main function.
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

/*
*******************************************************************************
**  Include files
*******************************************************************************
*/
#include "macrodriver.h"
#include "system.h"
#include "port.h"
#include "timer.h"
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


/*
**-----------------------------------------------------------------------------
**
**	Abstract:
**		This function  implements main function.
**
**	Parameters:
**		None
**
**	Returns:
**		None
**
**-----------------------------------------------------------------------------
*/
void  main( void )
{
	BOOL	ledflash = 0;			/* LED 点滅状態を保持 */
	UCHAR	port4;

	/* 割り込み禁止 */
	DI();

	/* PWM 初期設定 */
	PWM_Init();
	/* A/D設定 */
	AD_Init();

	/* 割り込み許可 */
	EI();

	/* Start user code. Do not edit comment generated here */
	while (1) {
		port4 = P4.0;				/* Port4 スイッチ状態を取得 */

		/* スイッチが押下されているか判定 */
		if ( port4 == 0 ){			/* スイッチが押下されている場合 */
			if( ledflash == 0 ){
				/* LEDを点灯 */
				P13.0 = 0;
				/* タイマを起動 */
				TM00_Start();
				/* LED点滅中に設定 */
				ledflash = 1;
			}
		}else if( port4 == 1 ){		/* スイッチが押下されていない場合 */
			if ( ledflash == 1 ){
				/* タイマ停止 */
				TM00_Stop();
				/* LEDを消灯 */
				P13.0 = 1;
				/* LED消灯中に設定 */
				ledflash = 0;
			}
		}
	}
	/* End user code. Do not edit comment generated here */
}

/* Start adding user code. Do not edit comment generated here */
/* End user code adding. Do not edit comment generated here */


