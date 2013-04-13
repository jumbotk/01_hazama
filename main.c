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
	BOOL	ledflash = 0;			/* LED �_�ŏ�Ԃ�ێ� */
	UCHAR	port4;

	/* ���荞�݋֎~ */
	DI();

	/* PWM �����ݒ� */
	PWM_Init();
	/* A/D�ݒ� */
	AD_Init();

	/* ���荞�݋��� */
	EI();

	/* Start user code. Do not edit comment generated here */
	while (1) {
		port4 = P4.0;				/* Port4 �X�C�b�`��Ԃ��擾 */

		/* �X�C�b�`����������Ă��邩���� */
		if ( port4 == 0 ){			/* �X�C�b�`����������Ă���ꍇ */
			if( ledflash == 0 ){
				/* LED��_�� */
				P13.0 = 0;
				/* �^�C�}���N�� */
				TM00_Start();
				/* LED�_�Œ��ɐݒ� */
				ledflash = 1;
			}
		}else if( port4 == 1 ){		/* �X�C�b�`����������Ă��Ȃ��ꍇ */
			if ( ledflash == 1 ){
				/* �^�C�}��~ */
				TM00_Stop();
				/* LED������ */
				P13.0 = 1;
				/* LED�������ɐݒ� */
				ledflash = 0;
			}
		}
	}
	/* End user code. Do not edit comment generated here */
}

/* Start adding user code. Do not edit comment generated here */
/* End user code adding. Do not edit comment generated here */


