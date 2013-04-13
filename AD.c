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
	/* A/D�ϊ��ҋ@���[�h�ݒ� */
	ADCS = 0x0;
	ADCE = 0x1;

	/* �A�i���O���̓`���l����ANI0 ��ݒ� */
	ADS = 0x0;

	/* A/D�R���o�[�^���[�h�ݒ� */
	PMC2 |= 0x1;
	/* PM20�ɓ��̓��[�h��ݒ� */
	PM2 |= 0x1;

	/* ��l�ݒ� */
	ADM |= 0x38;

	/* 2�T�C�N���ҋ@ */
	NOP();
	NOP();

	/* ���荞�݋֎~ */
	ADMK = 1;

	/* ���荞�ݗv���t���O���N���A */
	ADIF = 0;

	/* ���荞�ݗv�������� */
	ADMK = 0;

	/* A/D����J�n */
	ADCS = 1;
}


__interrupt void PWM_ADCHANG( void )
{
	UINT uADChange;

	/* A/D�o�͌��ʂ��擾 */
	uADChange = ADCR;
	
	/* [+ todo +] */ /* CMP11 �̐ݒ�l�����߂� */
	/* Duty�l��ݒ� */
	CMP11 = uADChange >> 2;
	/* �^�C�}�J�E���g�J�n */
	TMHE1 = 0x1;

	/* A/D����J�n */
	ADCS = 1;
}

