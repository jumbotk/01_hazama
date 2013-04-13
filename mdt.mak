#
# Project manager generated MAKEFILE
#
TITLE = E-learning
DEVFILE = c:\program files\nec electronics tools\dev\DF9222.78K
PROJDIR = C:\usr\work\eLearning
TOOLDIR = C:\Program Files\NEC Electronics Tools\PM+\V6.30\BIN
WORKDIR = C:\usr\work\eLearning
DEBUG = 

CC = "C:\Program Files\NEC Electronics Tools\CC78K0S\W2.01\bin\cc78k0s.exe"
ST = "C:\Program Files\NEC Electronics Tools\RA78K0S\W2.00\bin\st78k0s.exe"
RA = "C:\Program Files\NEC Electronics Tools\RA78K0S\W2.00\bin\ra78k0s.exe"
LK = "C:\Program Files\NEC Electronics Tools\RA78K0S\W2.00\bin\lk78k0s.exe"
OC = "C:\Program Files\NEC Electronics Tools\RA78K0S\W2.00\bin\oc78k0s.exe"
LCNV = "C:\Program Files\NEC Electronics Tools\RA78K0S\W2.00\bin\lc78k0s.exe"

OBJS = main.rel  \
	systeminit.rel  \
	option.rel  \
	system.rel  \
	system_user.rel  \
	port.rel  \
	timer.rel  \
	timer_user.rel  \
	pwm.rel  \
	AD.rel 

DEP_main_c = C:\usr\work\eLearning\macrodriver.h \
	C:\usr\work\eLearning\system.h \
	C:\usr\work\eLearning\port.h \
	C:\usr\work\eLearning\timer.h \
	C:\usr\work\eLearning\pwm.h \
	C:\usr\work\eLearning\user_define.h

DEP_systeminit_c = C:\usr\work\eLearning\macrodriver.h \
	C:\usr\work\eLearning\system.h \
	C:\usr\work\eLearning\port.h \
	C:\usr\work\eLearning\timer.h \
	C:\usr\work\eLearning\user_define.h

DEP_option_asm = C:\usr\work\eLearning\option.inc

DEP_system_c = C:\usr\work\eLearning\macrodriver.h \
	C:\usr\work\eLearning\system.h \
	C:\usr\work\eLearning\user_define.h

DEP_system_user_c = C:\usr\work\eLearning\macrodriver.h \
	C:\usr\work\eLearning\system.h \
	C:\usr\work\eLearning\user_define.h

DEP_port_c = C:\usr\work\eLearning\macrodriver.h \
	C:\usr\work\eLearning\port.h \
	C:\usr\work\eLearning\user_define.h

DEP_timer_c = C:\usr\work\eLearning\macrodriver.h \
	C:\usr\work\eLearning\timer.h \
	C:\usr\work\eLearning\user_define.h

DEP_timer_user_c = C:\usr\work\eLearning\macrodriver.h \
	C:\usr\work\eLearning\timer.h \
	C:\usr\work\eLearning\user_define.h

DEP_pwm_c = C:\usr\work\eLearning\macrodriver.h \
	C:\usr\work\eLearning\pwm.h \
	C:\usr\work\eLearning\user_define.h

DEP_AD_c = C:\usr\work\eLearning\macrodriver.h

GOAL : C:\usr\work\eLearning\a.hex

main.rel : main.c $(DEP_main_c)
	$(CC) -cF9222 -y"c:\program files\nec electronics tools\dev" -_msgoff main.c

systeminit.rel : systeminit.c $(DEP_systeminit_c)
	$(CC) -cF9222 -y"c:\program files\nec electronics tools\dev" -_msgoff systeminit.c

option.rel : option.asm $(DEP_option_asm)
	$(RA) -cF9222 -y"c:\program files\nec electronics tools\dev" -_msgoff  option.asm

system.rel : system.c $(DEP_system_c)
	$(CC) -cF9222 -y"c:\program files\nec electronics tools\dev" -_msgoff system.c

system_user.rel : system_user.c $(DEP_system_user_c)
	$(CC) -cF9222 -y"c:\program files\nec electronics tools\dev" -_msgoff system_user.c

port.rel : port.c $(DEP_port_c)
	$(CC) -cF9222 -y"c:\program files\nec electronics tools\dev" -_msgoff port.c

timer.rel : timer.c $(DEP_timer_c)
	$(CC) -cF9222 -y"c:\program files\nec electronics tools\dev" -_msgoff timer.c

timer_user.rel : timer_user.c $(DEP_timer_user_c)
	$(CC) -cF9222 -y"c:\program files\nec electronics tools\dev" -_msgoff timer_user.c

pwm.rel : pwm.c $(DEP_pwm_c)
	$(CC) -cF9222 -y"c:\program files\nec electronics tools\dev" -_msgoff pwm.c

AD.rel : AD.c $(DEP_AD_c)
	$(CC) -cF9222 -y"c:\program files\nec electronics tools\dev" -_msgoff AD.c

a.lmf : $(OBJS)
	$(LK) -y"c:\program files\nec electronics tools\dev" -_msgoff -oa.lmf "..\..\..\Program Files\NEC Electronics Tools\CC78K0S\W2.01\lib78k0s\s0sl.rel"  -pa.map -bcl0s.lib -bcl0sf.lib -i"C:\Program Files\NEC Electronics Tools\CC78K0S\W2.01\lib78k0s" -dlk.dr -s  main.rel systeminit.rel option.rel system.rel system_user.rel port.rel timer.rel timer_user.rel pwm.rel AD.rel 

a.hex : a.lmf
	$(OC) -y"c:\program files\nec electronics tools\dev" -_msgoff  a.lmf





















