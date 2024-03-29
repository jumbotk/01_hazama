[Project.ID]
Ver=200
Target=SMK0SH32
[Configuration]
Chip=uPD78F9222
Internal Rom=4KB
Internal Ram=256B
Clock=Internal Fixed
SimCfgUseFile=OFF
SimCfgFile=\NECTOOLS32\bin\smplus.cfg
MainClock=8
SubClock=----
[Mapping]
Count=0
[Main]
Geometry=102, 10, 935, 713
Window=Normal
MDI_MAX=OFF
Button=ON
Mode=Auto
Trace=Uncond ON
Trace2=Non Stop
Coverage=OFF
Timer=OFF
Tracer=OFF
[Load File]
Dir=.
SaveFilter=0
Start=0
End=0
LoadFilter=5
Offset=0
Object=ON
Symbol=ON
Symbol Reset=ON
CPU Reset=ON
File1=a.lmf
LoadFilter1=5
Offset1=0
Object1=ON
Symbol1=ON
CPU Reset1=ON
Symbol Reset1=ON
[View File]
Dir=.
Filter=Source
[Debugger Option]
Source Path="."
Symbol Size=Byte
Symbol Format=Hex
Register Name=Func
Offset Label=OFF
Offset Mnemonic=ON
Tab Count=4
Tab Size1=*.*, 8
Tab Size2=*.c, 8
Tab Size3=*.s, 8
Tab Size4=*.asm, 8
Default Source=*.c;*.s;*.asm
Default Module=*.lnk;*.lmf
Startup Start=_@cstart
Startup End=_@cend
Main Symbol=_main
Symbol Type=OFF
Language=C
Kanji=SJIS
[Source]
Geometry=202, 24, 736, 400
Window=Normal
DispStart=63
CaretPos=73,0
Mode=Normal
DispFile=
Address1=main
Address2=TM00_Start
Address3=
Address4=
Address5=
Address6=
Address7=
Address8=
Address9=
Address10=
Address11=
Address12=
Address13=
Address14=
Address15=
Address16=
Data1=main.c
Data2=main
Data3=
Data4=
Data5=
Data6=
Data7=
Data8=
Data9=
Data10=
Data11=
Data12=
Data13=
Data14=
Data15=
Data16=
Option=1
Case=OFF
Direction=Up
File1=
File2=
File3=
File4=
File5=
File6=
File7=
File8=
File9=
File10=
File11=
File12=
File13=
File14=
File15=
File16=
SaveRange=Screen
SaveStart=
SaveEnd=
[Assemble]
Geometry=0, 0, 0, 0
Window=Hide
DispStart=0
CaretPos=0,0
Address1=
Address2=
Address3=
Address4=
Address5=
Address6=
Address7=
Address8=
Address9=
Address10=
Address11=
Address12=
Address13=
Address14=
Address15=
Address16=
Data1=
Data2=
Data3=
Data4=
Data5=
Data6=
Data7=
Data8=
Data9=
Data10=
Data11=
Data12=
Data13=
Data14=
Data15=
Data16=
Case=ON
Scan=OFF
Direction=Down
FindStart=0
FindEnd=0
SaveRange=Screen
SaveStart=
SaveEnd=
[Memory]
Geometry=0, 0, 0, 0
Window=Hide
Boundary=0
Format=Hex
Mode=Byte
Endian=
Ascii=OFF
Address=
DispStart=FFFFFFFF
CaretPosData=0, 0
CaretPosAscii=0, 0
Address1=
Address2=
Address3=
Address4=
Address5=
Address6=
Address7=
Address8=
Address9=
Address10=
Address11=
Address12=
Address13=
Address14=
Address15=
Address16=
Data1=
Data2=
Data3=
Data4=
Data5=
Data6=
Data7=
Data8=
Data9=
Data10=
Data11=
Data12=
Data13=
Data14=
Data15=
Data16=
Binary=ON
Scan=OFF
Direction=DOWN
FindStart=
FindEnd=
Unit=Byte
SaveRange=Screen
SaveStart=
SaveEnd=
[Memory fill]
Scope=0, 0
Code=0
[Memory copy]
Scope=0, 0
To=0
[Memory compare]
Source=0, 0
Destination=0
[I/O Port]
Line=0
[Stack]
Geometry=0, 0, 0, 0
Window=Hide
Boundary=0
Mode=Proper
[Sfr]
Geometry=0, 0, 0, 0
Window=Hide
Address1=
Address2=
Address3=
Address4=
Address5=
Address6=
Address7=
Address8=
Address9=
Address10=
Address11=
Address12=
Address13=
Address14=
Address15=
Address16=
Boundary=0, 0
Mode=Hex
Attribute=Show
Sort=Unsort
Pickup=OFF
SelectSort=Address
Last Name=
Line=111
L1=P2
L2=P3
L3=P4
L4=P12
L5=P13
L6=CMP01
L7=CMP11
L8=TM00
L9=CR000
L10=CR010
L11=ADCR
L12=ADCRH
L13=PM2
L14=PM3
L15=PM4
L16=PM12
L17=PU2
L18=PU3
L19=PU4
L20=PU12
L21=WDTM
L22=WDTE
L23=LVIM
L24=LVIF
L25=LVIMD
L26=LVION
L27=LVIS
L28=RESF
L29=LSRCM
L30=LSRSTOP
L31=TMC00
L32=OVF00
L33=PRM00
L34=CRC00
L35=TOC00
L36=TOE00
L37=LVR00
L38=LVS00
L39=OSPE00
L40=OSPT00
L41=TMHMD1
L42=TOEN1
L43=TOLEV1
L44=TMHE1
L45=ADM
L46=ADCE
L47=ADCS
L48=ADS
L49=PMC2
L50=ISC
L51=ASIM6
L52=RXE6
L53=TXE6
L54=POWER6
L55=RXB6
L56=ASIS6
L57=TXB6
L58=ASIF6
L59=CKSR6
L60=BRGC6
L61=ASICL6
L62=SBRT6
L63=SBRF6
L64=PFCMD
L65=PFS
L66=FLPMC
L67=FLCMD
L68=FLAPL
L69=FLAPH
L70=FLAPHC
L71=FLAPLC
L72=FLW
L73=TMC80
L74=TCE80
L75=CR80
L76=TM80
L77=IF0
L78=LVIIF
L79=PIF0
L80=PIF1
L81=TMIFH1
L82=TMIF000
L83=TMIF010
L84=ADIF
L85=IF1
L86=PIF2
L87=PIF3
L88=TMIF80
L89=SREIF6
L90=SRIF6
L91=STIF6
L92=MK0
L93=LVIMK
L94=PMK0
L95=PMK1
L96=TMMKH1
L97=TMMK000
L98=TMMK010
L99=ADMK
L100=MK1
L101=PMK2
L102=PMK3
L103=TMMK80
L104=SREMK6
L105=SRMK6
L106=STMK6
L107=INTM0
L108=INTM1
L109=PPCC
L110=OSTS
L111=PCC
[Local Variable]
Geometry=0, 0, 0, 0
Window=Hide
Boundary=0
Mode=Proper
[Trace View]
Geometry=0, 0, 0, 0
Window=Hide
Mode=Normal
Frame=Show
Timetag=Clock
Address=Show
Data=Hex
Status=Show
Address2=Show
Data2=Hex
Status2=Show
JumAdr=Show
Disasm=Show
Pick Up=Off
Synchronize=0 0 0 0
Frameno=
Frameno1=
Frameno2=
Frameno3=
Frameno4=
Frameno5=
Frameno6=
Frameno7=
Frameno8=
Frameno9=
Frameno10=
Frameno11=
Frameno12=
Frameno13=
Frameno14=
Frameno15=
Frameno16=
ScanStatus=ALL
Access Size=B
ScanAddress=<>-<>
Mask Address=
ScanData=
Mask Data=
ScanExternal=
Mask External=
Scan=OFF
Direction=Down
FindStart=
FindEnd=
SaveRange=Screen
SaveStart=
SaveEnd=
[Register]
Geometry=0, 0, 0, 0
Window=Hide
Mode=Hex
Boundary=0
Pickup=OFF
Name=Functional
RP0=3
RP1=3
RP2=3
RP3=3
PC=3
SP=3
PSW=3
[Event Manager]
Geometry=0, 0, 0, 0
Window=Hide
Sort by=Unsort
Detail=OFF
[Event Set]
Geometry=0, 0, 0, 0
Window=Hide
Manager=ON
Sort by=Unsort
Detail=OFF
Last Name=
Count=0
[Event Link]
Geometry=0, 0, 0, 0
Window=Hide
Manager=ON
Sort by=Unsort
Detail=OFF
Last Name=
Count=0
[Break]
Geometry=0, 0, 0, 0
Window=Hide
Manager=ON
Sort by=Unsort
Detail=OFF
Last Name=
Count=0
[Trace]
Geometry=0, 0, 0, 0
Window=Hide
Manager=ON
Sort by=Unsort
Detail=OFF
Last Name=
Delay Count0=0
Count=0
[Snap]
Geometry=0, 0, 0, 0
Window=Hide
Manager=ON
Sort by=Unsort
Detail=OFF
Last Name=
Count=0
[Stub]
Geometry=0, 0, 0, 0
Window=Hide
Manager=ON
Sort by=Unsort
Detail=OFF
Last Name=
Count=0
[Timer]
Geometry=0, 0, 0, 0
Window=Hide
Manager=ON
Sort by=Unsort
Detail=OFF
Last Name=
Count=0
[Timer Monitor]
Count=0
[Variable]
Geometry=0, 0, 0, 0
Window=Hide
Boundary=0
Line=0
[Quick Watch]
0=
1=
2=
3=
4=
5=
6=
7=
8=
9=
10=
11=
12=
13=
14=
15=
[Coverage]
Geometry=0, 0, 0, 0
Window=Hide
View=1
Address=
DispStart=00000000
CaretPos=0, 0
Select=0
AddressHist1=
AddressHist2=
AddressHist3=
AddressHist4=
AddressHist5=
AddressHist6=
AddressHist7=
AddressHist8=
AddressHist9=
AddressHist10=
AddressHist11=
AddressHist12=
AddressHist13=
AddressHist14=
AddressHist15=
AddressHist16=
Count=1
Data1=
Data2=
Data3=
Data4=
Data5=
Data6=
Data7=
Data8=
Data9=
Data10=
Data11=
Data12=
Data13=
Data14=
Data15=
Data16=
Condition=ON
Scan=OFF
No Use=ON
Read=OFF
Write=OFF
Read x Write=OFF
Execute=OFF
Execute x Read=ON
Execute x Write=ON
Execute x Read x Write=ON
Direction=DOWN
FindStart=
FindEnd=
SaveRange=Screen
SaveStart=
SaveEnd=
[Reset]
Debugger=ON
Symbol=OFF
Target CPU=OFF
[Coverage clear]
Range=0x0, 0xFFFF
[Extended Option]
After=OFF
TracerFrames=4K
Redraw=500
Verify=ON
Break Sound=ON
AddUpTimetag=OFF
[About]
Version=Program
[Console]
Geometry=0, 0, 0, 0
Window=Hide
