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
**  Filename :	timer.h
**  Abstract :	This file implements device driver for Pwm module.
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
#ifndef _PWM_
#define _PWM_
/*
*******************************************************************************
**	Register bit define
*******************************************************************************
*/
/*
	PWM Mode Control Register(TMHMD1)
*/
#define TMHMD1_INITIALVALUE		0x00
/* TMHMD1 ���W�X�^�ݒ� */
#define TMHMD1_TMHE1_ENABLE			(1<<7)  /* �^�C�}�E�J�E���g���싖�� */
#define TMHMD1_TMHE1_DISABLE		(0<<7)  /* �^�C�}�E�J�E���g�����~ */
#define TMHMD1_CKS_CLOCK_1			(0<<4)	/* fxp (10MHz) */
#define TMHMD1_CKS_CLOCK_2			(1<<4)	/* fxp/2^2 (2.5MHz) */ 
#define TMHMD1_CKS_CLOCK_3			(2<<4)	/* fxp/2^4 (0.625MHz) */ 
#define TMHMD1_CKS_CLOCK_4			(3<<4)	/* fxp/2^6 (0.15625MHz) */ 
#define TMHMD1_CKS_CLOCK_5			(4<<4)	/* fxp/2^12 (0.002445MHz) */ 
#define TMHMD1_CKS_CLOCK_6			(5<<4)	/* frl/2^7 (000.188MHz) */ 
#define TMHMD1_TMMD_INTERVAL_MODE	(0<<2)	/* �C���^�[�o���E�^�C�}�E���[�h */ 
#define TMHMD1_TMMD_PWM_MODE		(2<<2)	/* PWM�o�̓��[�h */ 
#define TMHMD1_TOLEV1_TIMER_LOW		(0<<1)	/* �^�C�}�o�̓��x������(���E����x��) */ 
#define TMHMD1_TOLEV1_TIMER_HIGH	(1<<1)	/* �^�C�}�o�̓��x������(�n�C����x��) */ 
#define TMHMD1_TOEN1_TIMER_DISABLE	(0<<1)	/* �o�͋֎~ */ 
#define TMHMD1_TOEN1_TIMER_ENABLE	(1<<1)	/* �o�͋��� */ 

/*
*******************************************************************************
**  Macro define
*******************************************************************************
*/
/* 8-bit timer compare register (CMP01) */
/* #define TMHMD1_CMP01_BASEVALUE		(0xCC) */	/* 100mS */
#define TMHMD1_CMP01_BASEVALUE		(0x13)	/* 10mS */
/* �f���[�e�B Base�l */
#define TMHMD1_CMP11_BASEVALUE		(0x13)	/* 10mS */
/*
*******************************************************************************
**  Function define
*******************************************************************************
*/
extern void PWM_Init(void);

/* [+ todo +] */ /* ���u�� */
extern void AD_Init(void);
/* Start user code for definition. Do not edit comment generated here */
/* End user code for definition. Do not edit comment generated here */
#endif
