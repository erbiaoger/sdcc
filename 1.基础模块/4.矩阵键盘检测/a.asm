;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 4.2.0 #13081 (Mac OS X ppc)
;--------------------------------------------------------
	.module a
	.optsdcc -mmcs51 --model-small
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _main
	.globl _display
	.globl _delay
	.globl _TF2
	.globl _EXF2
	.globl _RCLK
	.globl _TCLK
	.globl _EXEN2
	.globl _TR2
	.globl _C_T2
	.globl _CP_RL2
	.globl _T2CON_7
	.globl _T2CON_6
	.globl _T2CON_5
	.globl _T2CON_4
	.globl _T2CON_3
	.globl _T2CON_2
	.globl _T2CON_1
	.globl _T2CON_0
	.globl _PT2
	.globl _ET2
	.globl _CY
	.globl _AC
	.globl _F0
	.globl _RS1
	.globl _RS0
	.globl _OV
	.globl _F1
	.globl _P
	.globl _PS
	.globl _PT1
	.globl _PX1
	.globl _PT0
	.globl _PX0
	.globl _RD
	.globl _WR
	.globl _T1
	.globl _T0
	.globl _INT1
	.globl _INT0
	.globl _TXD
	.globl _RXD
	.globl _P3_7
	.globl _P3_6
	.globl _P3_5
	.globl _P3_4
	.globl _P3_3
	.globl _P3_2
	.globl _P3_1
	.globl _P3_0
	.globl _EA
	.globl _ES
	.globl _ET1
	.globl _EX1
	.globl _ET0
	.globl _EX0
	.globl _P2_7
	.globl _P2_6
	.globl _P2_5
	.globl _P2_4
	.globl _P2_3
	.globl _P2_2
	.globl _P2_1
	.globl _P2_0
	.globl _SM0
	.globl _SM1
	.globl _SM2
	.globl _REN
	.globl _TB8
	.globl _RB8
	.globl _TI
	.globl _RI
	.globl _P1_7
	.globl _P1_6
	.globl _P1_5
	.globl _P1_4
	.globl _P1_3
	.globl _P1_2
	.globl _P1_1
	.globl _P1_0
	.globl _TF1
	.globl _TR1
	.globl _TF0
	.globl _TR0
	.globl _IE1
	.globl _IT1
	.globl _IE0
	.globl _IT0
	.globl _P0_7
	.globl _P0_6
	.globl _P0_5
	.globl _P0_4
	.globl _P0_3
	.globl _P0_2
	.globl _P0_1
	.globl _P0_0
	.globl _TH2
	.globl _TL2
	.globl _RCAP2H
	.globl _RCAP2L
	.globl _T2CON
	.globl _B
	.globl _ACC
	.globl _PSW
	.globl _IP
	.globl _P3
	.globl _IE
	.globl _P2
	.globl _SBUF
	.globl _SCON
	.globl _P1
	.globl _TH1
	.globl _TH0
	.globl _TL1
	.globl _TL0
	.globl _TMOD
	.globl _TCON
	.globl _PCON
	.globl _DPH
	.globl _DPL
	.globl _SP
	.globl _P0
	.globl _table
	.globl _key
	.globl _temp
	.globl _k
	.globl _j
	.globl _i
;--------------------------------------------------------
; special function registers
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
_P0	=	0x0080
_SP	=	0x0081
_DPL	=	0x0082
_DPH	=	0x0083
_PCON	=	0x0087
_TCON	=	0x0088
_TMOD	=	0x0089
_TL0	=	0x008a
_TL1	=	0x008b
_TH0	=	0x008c
_TH1	=	0x008d
_P1	=	0x0090
_SCON	=	0x0098
_SBUF	=	0x0099
_P2	=	0x00a0
_IE	=	0x00a8
_P3	=	0x00b0
_IP	=	0x00b8
_PSW	=	0x00d0
_ACC	=	0x00e0
_B	=	0x00f0
_T2CON	=	0x00c8
_RCAP2L	=	0x00ca
_RCAP2H	=	0x00cb
_TL2	=	0x00cc
_TH2	=	0x00cd
;--------------------------------------------------------
; special function bits
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
_P0_0	=	0x0080
_P0_1	=	0x0081
_P0_2	=	0x0082
_P0_3	=	0x0083
_P0_4	=	0x0084
_P0_5	=	0x0085
_P0_6	=	0x0086
_P0_7	=	0x0087
_IT0	=	0x0088
_IE0	=	0x0089
_IT1	=	0x008a
_IE1	=	0x008b
_TR0	=	0x008c
_TF0	=	0x008d
_TR1	=	0x008e
_TF1	=	0x008f
_P1_0	=	0x0090
_P1_1	=	0x0091
_P1_2	=	0x0092
_P1_3	=	0x0093
_P1_4	=	0x0094
_P1_5	=	0x0095
_P1_6	=	0x0096
_P1_7	=	0x0097
_RI	=	0x0098
_TI	=	0x0099
_RB8	=	0x009a
_TB8	=	0x009b
_REN	=	0x009c
_SM2	=	0x009d
_SM1	=	0x009e
_SM0	=	0x009f
_P2_0	=	0x00a0
_P2_1	=	0x00a1
_P2_2	=	0x00a2
_P2_3	=	0x00a3
_P2_4	=	0x00a4
_P2_5	=	0x00a5
_P2_6	=	0x00a6
_P2_7	=	0x00a7
_EX0	=	0x00a8
_ET0	=	0x00a9
_EX1	=	0x00aa
_ET1	=	0x00ab
_ES	=	0x00ac
_EA	=	0x00af
_P3_0	=	0x00b0
_P3_1	=	0x00b1
_P3_2	=	0x00b2
_P3_3	=	0x00b3
_P3_4	=	0x00b4
_P3_5	=	0x00b5
_P3_6	=	0x00b6
_P3_7	=	0x00b7
_RXD	=	0x00b0
_TXD	=	0x00b1
_INT0	=	0x00b2
_INT1	=	0x00b3
_T0	=	0x00b4
_T1	=	0x00b5
_WR	=	0x00b6
_RD	=	0x00b7
_PX0	=	0x00b8
_PT0	=	0x00b9
_PX1	=	0x00ba
_PT1	=	0x00bb
_PS	=	0x00bc
_P	=	0x00d0
_F1	=	0x00d1
_OV	=	0x00d2
_RS0	=	0x00d3
_RS1	=	0x00d4
_F0	=	0x00d5
_AC	=	0x00d6
_CY	=	0x00d7
_ET2	=	0x00ad
_PT2	=	0x00bd
_T2CON_0	=	0x00c8
_T2CON_1	=	0x00c9
_T2CON_2	=	0x00ca
_T2CON_3	=	0x00cb
_T2CON_4	=	0x00cc
_T2CON_5	=	0x00cd
_T2CON_6	=	0x00ce
_T2CON_7	=	0x00cf
_CP_RL2	=	0x00c8
_C_T2	=	0x00c9
_TR2	=	0x00ca
_EXEN2	=	0x00cb
_TCLK	=	0x00cc
_RCLK	=	0x00cd
_EXF2	=	0x00ce
_TF2	=	0x00cf
;--------------------------------------------------------
; overlayable register banks
;--------------------------------------------------------
	.area REG_BANK_0	(REL,OVR,DATA)
	.ds 8
;--------------------------------------------------------
; internal ram data
;--------------------------------------------------------
	.area DSEG    (DATA)
_i::
	.ds 1
_j::
	.ds 1
_k::
	.ds 1
_temp::
	.ds 1
_key::
	.ds 1
_table::
	.ds 16
;--------------------------------------------------------
; overlayable items in internal ram
;--------------------------------------------------------
	.area	OSEG    (OVR,DATA)
	.area	OSEG    (OVR,DATA)
;--------------------------------------------------------
; Stack segment in internal ram
;--------------------------------------------------------
	.area	SSEG
__start__stack:
	.ds	1

;--------------------------------------------------------
; indirectly addressable internal ram data
;--------------------------------------------------------
	.area ISEG    (DATA)
;--------------------------------------------------------
; absolute internal ram data
;--------------------------------------------------------
	.area IABS    (ABS,DATA)
	.area IABS    (ABS,DATA)
;--------------------------------------------------------
; bit data
;--------------------------------------------------------
	.area BSEG    (BIT)
;--------------------------------------------------------
; paged external ram data
;--------------------------------------------------------
	.area PSEG    (PAG,XDATA)
;--------------------------------------------------------
; external ram data
;--------------------------------------------------------
	.area XSEG    (XDATA)
;--------------------------------------------------------
; absolute external ram data
;--------------------------------------------------------
	.area XABS    (ABS,XDATA)
;--------------------------------------------------------
; external initialized ram data
;--------------------------------------------------------
	.area XISEG   (XDATA)
	.area HOME    (CODE)
	.area GSINIT0 (CODE)
	.area GSINIT1 (CODE)
	.area GSINIT2 (CODE)
	.area GSINIT3 (CODE)
	.area GSINIT4 (CODE)
	.area GSINIT5 (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area CSEG    (CODE)
;--------------------------------------------------------
; interrupt vector
;--------------------------------------------------------
	.area HOME    (CODE)
__interrupt_vect:
	ljmp	__sdcc_gsinit_startup
;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
	.area HOME    (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area GSINIT  (CODE)
	.globl __sdcc_gsinit_startup
	.globl __sdcc_program_startup
	.globl __start__stack
	.globl __mcs51_genXINIT
	.globl __mcs51_genXRAMCLEAR
	.globl __mcs51_genRAMCLEAR
;	a.c:6: unsigned char i=100;
	mov	_i,#0x64
;	a.c:13: unsigned char table[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,
	mov	_table,#0x3f
	mov	(_table + 0x0001),#0x06
	mov	(_table + 0x0002),#0x5b
	mov	(_table + 0x0003),#0x4f
	mov	(_table + 0x0004),#0x66
	mov	(_table + 0x0005),#0x6d
	mov	(_table + 0x0006),#0x7d
	mov	(_table + 0x0007),#0x07
	mov	(_table + 0x0008),#0x7f
	mov	(_table + 0x0009),#0x6f
	mov	(_table + 0x000a),#0x77
	mov	(_table + 0x000b),#0x7c
	mov	(_table + 0x000c),#0x39
	mov	(_table + 0x000d),#0x5e
	mov	(_table + 0x000e),#0x79
	mov	(_table + 0x000f),#0x71
	.area GSFINAL (CODE)
	ljmp	__sdcc_program_startup
;--------------------------------------------------------
; Home
;--------------------------------------------------------
	.area HOME    (CODE)
	.area HOME    (CODE)
__sdcc_program_startup:
	ljmp	_main
;	return from main will return to caller
;--------------------------------------------------------
; code
;--------------------------------------------------------
	.area CSEG    (CODE)
;------------------------------------------------------------
;Allocation info for local variables in function 'delay'
;------------------------------------------------------------
;i                         Allocated to registers 
;------------------------------------------------------------
;	a.c:8: void delay(unsigned char i)
;	-----------------------------------------
;	 function delay
;	-----------------------------------------
_delay:
	ar7 = 0x07
	ar6 = 0x06
	ar5 = 0x05
	ar4 = 0x04
	ar3 = 0x03
	ar2 = 0x02
	ar1 = 0x01
	ar0 = 0x00
	mov	_j,dpl
;	a.c:10: for(j=i;j>0;j--)
00106$:
	mov	a,_j
	jz	00108$
;	a.c:11: for(k=125;k>0;k--);
	mov	_k,#0x7d
00104$:
	djnz	_k,00104$
;	a.c:10: for(j=i;j>0;j--)
	dec	_j
	sjmp	00106$
00108$:
;	a.c:12: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'display'
;------------------------------------------------------------
;num                       Allocated to registers r7 
;------------------------------------------------------------
;	a.c:17: display(unsigned char num)
;	-----------------------------------------
;	 function display
;	-----------------------------------------
_display:
;	a.c:19: P0=table[num];
	mov	a,dpl
	add	a,#_table
	mov	r1,a
	mov	_P0,@r1
;	a.c:21: dula=1;
;	assignBit
	setb	_P2_6
;	a.c:22: dula=0;
;	assignBit
	clr	_P2_6
;	a.c:23: P0=0xc0;
	mov	_P0,#0xc0
;	a.c:24: wela=1;
;	assignBit
	setb	_P2_7
;	a.c:25: wela=0;
;	assignBit
	clr	_P2_7
;	a.c:26: }
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'main'
;------------------------------------------------------------
;	a.c:27: void main()
;	-----------------------------------------
;	 function main
;	-----------------------------------------
_main:
;	a.c:29: dula=0;
;	assignBit
	clr	_P2_6
;	a.c:30: wela=0;
;	assignBit
	clr	_P2_7
;	a.c:31: while(1)
00150$:
;	a.c:33: P3=0xfe;
	mov	_P3,#0xfe
;	a.c:34: temp=P3;
	mov	_temp,_P3
;	a.c:35: temp=temp&0xf0;
	anl	_temp,#0xf0
;	a.c:36: if(temp!=0xf0)
	mov	a,#0xf0
	cjne	a,_temp,00286$
	sjmp	00112$
00286$:
;	a.c:38: delay(10);
	mov	dpl,#0x0a
	lcall	_delay
;	a.c:39: if(temp!=0xf0)
	mov	a,#0xf0
	cjne	a,_temp,00287$
	sjmp	00112$
00287$:
;	a.c:41: temp=P3;
	mov	_temp,_P3
;	a.c:42: switch(temp)
	mov	a,#0x7e
	cjne	a,_temp,00288$
	sjmp	00104$
00288$:
	mov	a,#0xbe
	cjne	a,_temp,00289$
	sjmp	00103$
00289$:
	mov	a,#0xde
	cjne	a,_temp,00290$
	sjmp	00102$
00290$:
	mov	a,#0xee
	cjne	a,_temp,00106$
;	a.c:45: key=0;
	mov	_key,#0x00
;	a.c:46: break;
;	a.c:48: case 0xde:
	sjmp	00106$
00102$:
;	a.c:49: key=1;
	mov	_key,#0x01
;	a.c:50: break;
;	a.c:52: case 0xbe:
	sjmp	00106$
00103$:
;	a.c:53: key=2;
	mov	_key,#0x02
;	a.c:54: break;
;	a.c:56: case 0x7e:
	sjmp	00106$
00104$:
;	a.c:57: key=3;
	mov	_key,#0x03
;	a.c:60: while(temp!=0xf0)
00106$:
	mov	a,#0xf0
	cjne	a,_temp,00293$
	sjmp	00108$
00293$:
;	a.c:62: temp=P3;
	mov	_temp,_P3
;	a.c:63: temp=temp&0xf0;
	anl	_temp,#0xf0
	sjmp	00106$
00108$:
;	a.c:67: display(key);
	mov	dpl,_key
	lcall	_display
;	a.c:85: P1=0xfe;
	mov	_P1,#0xfe
00112$:
;	a.c:88: P3=0xfd;
	mov	_P3,#0xfd
;	a.c:89: temp=P3;
	mov	_temp,_P3
;	a.c:90: temp=temp&0xf0;
	anl	_temp,#0xf0
;	a.c:91: if(temp!=0xf0)
	mov	a,#0xf0
	cjne	a,_temp,00294$
	sjmp	00124$
00294$:
;	a.c:93: delay(10);
	mov	dpl,#0x0a
	lcall	_delay
;	a.c:94: if(temp!=0xf0)
	mov	a,#0xf0
	cjne	a,_temp,00295$
	sjmp	00124$
00295$:
;	a.c:96: temp=P3;
	mov	_temp,_P3
;	a.c:97: switch(temp)
	mov	a,#0x7d
	cjne	a,_temp,00296$
	sjmp	00116$
00296$:
	mov	a,#0xbd
	cjne	a,_temp,00297$
	sjmp	00115$
00297$:
	mov	a,#0xdd
	cjne	a,_temp,00298$
	sjmp	00114$
00298$:
	mov	a,#0xed
	cjne	a,_temp,00118$
;	a.c:100: key=4;
	mov	_key,#0x04
;	a.c:101: break;
;	a.c:103: case 0xdd:
	sjmp	00118$
00114$:
;	a.c:104: key=5;
	mov	_key,#0x05
;	a.c:105: break;
;	a.c:107: case 0xbd:
	sjmp	00118$
00115$:
;	a.c:108: key=6;
	mov	_key,#0x06
;	a.c:109: break;
;	a.c:111: case 0x7d:
	sjmp	00118$
00116$:
;	a.c:112: key=7;
	mov	_key,#0x07
;	a.c:115: while(temp!=0xf0)
00118$:
	mov	a,#0xf0
	cjne	a,_temp,00301$
	sjmp	00120$
00301$:
;	a.c:117: temp=P3;
	mov	_temp,_P3
;	a.c:118: temp=temp&0xf0;
	anl	_temp,#0xf0
	sjmp	00118$
00120$:
;	a.c:122: display(key);
	mov	dpl,_key
	lcall	_display
;	a.c:130: */       P1=0xfc;
	mov	_P1,#0xfc
00124$:
;	a.c:133: P3=0xfb;
	mov	_P3,#0xfb
;	a.c:134: temp=P3;
	mov	_temp,_P3
;	a.c:135: temp=temp&0xf0;
	anl	_temp,#0xf0
;	a.c:136: if(temp!=0xf0)
	mov	a,#0xf0
	cjne	a,_temp,00302$
	sjmp	00136$
00302$:
;	a.c:138: delay(10);
	mov	dpl,#0x0a
	lcall	_delay
;	a.c:139: if(temp!=0xf0)
	mov	a,#0xf0
	cjne	a,_temp,00303$
	sjmp	00136$
00303$:
;	a.c:141: temp=P3;
	mov	_temp,_P3
;	a.c:142: switch(temp)
	mov	a,#0x7b
	cjne	a,_temp,00304$
	sjmp	00128$
00304$:
	mov	a,#0xbb
	cjne	a,_temp,00305$
	sjmp	00127$
00305$:
	mov	a,#0xdb
	cjne	a,_temp,00306$
	sjmp	00126$
00306$:
	mov	a,#0xeb
	cjne	a,_temp,00130$
;	a.c:145: key=8;
	mov	_key,#0x08
;	a.c:146: break;
;	a.c:148: case 0xdb:
	sjmp	00130$
00126$:
;	a.c:149: key=9;
	mov	_key,#0x09
;	a.c:150: break;
;	a.c:152: case 0xbb:
	sjmp	00130$
00127$:
;	a.c:153: key=10;
	mov	_key,#0x0a
;	a.c:154: break;
;	a.c:156: case 0x7b:
	sjmp	00130$
00128$:
;	a.c:157: key=11;
	mov	_key,#0x0b
;	a.c:160: while(temp!=0xf0)
00130$:
	mov	a,#0xf0
	cjne	a,_temp,00309$
	sjmp	00132$
00309$:
;	a.c:162: temp=P3;
	mov	_temp,_P3
;	a.c:163: temp=temp&0xf0;
	anl	_temp,#0xf0
	sjmp	00130$
00132$:
;	a.c:167: display(key);
	mov	dpl,_key
	lcall	_display
;	a.c:175: */     P1=0xf8;
	mov	_P1,#0xf8
00136$:
;	a.c:178: P3=0xf7;
	mov	_P3,#0xf7
;	a.c:179: temp=P3;
	mov	_temp,_P3
;	a.c:180: temp=temp&0xf0;
	anl	_temp,#0xf0
;	a.c:181: if(temp!=0xf0)
	mov	a,#0xf0
	cjne	a,_temp,00310$
	ljmp	00150$
00310$:
;	a.c:183: delay(10);
	mov	dpl,#0x0a
	lcall	_delay
;	a.c:184: if(temp!=0xf0)
	mov	a,#0xf0
	cjne	a,_temp,00311$
	ljmp	00150$
00311$:
;	a.c:186: temp=P3;
	mov	_temp,_P3
;	a.c:187: switch(temp)
	mov	a,#0x77
	cjne	a,_temp,00312$
	sjmp	00140$
00312$:
	mov	a,#0xb7
	cjne	a,_temp,00313$
	sjmp	00139$
00313$:
	mov	a,#0xd7
	cjne	a,_temp,00314$
	sjmp	00138$
00314$:
	mov	a,#0xe7
	cjne	a,_temp,00142$
;	a.c:190: key=12;
	mov	_key,#0x0c
;	a.c:191: break;
;	a.c:193: case 0xd7:
	sjmp	00142$
00138$:
;	a.c:194: key=13;
	mov	_key,#0x0d
;	a.c:195: break;
;	a.c:197: case 0xb7:
	sjmp	00142$
00139$:
;	a.c:198: key=14;
	mov	_key,#0x0e
;	a.c:199: break;
;	a.c:201: case 0x77:
	sjmp	00142$
00140$:
;	a.c:202: key=15;
	mov	_key,#0x0f
;	a.c:205: while(temp!=0xf0)
00142$:
	mov	a,#0xf0
	cjne	a,_temp,00317$
	sjmp	00144$
00317$:
;	a.c:207: temp=P3;
	mov	_temp,_P3
;	a.c:208: temp=temp&0xf0;
	anl	_temp,#0xf0
	sjmp	00142$
00144$:
;	a.c:212: display(key);
	mov	dpl,_key
	lcall	_display
;	a.c:220: */     P1=0xf0;
	mov	_P1,#0xf0
;	a.c:224: }
	ljmp	00150$
	.area CSEG    (CODE)
	.area CONST   (CODE)
	.area XINIT   (CODE)
	.area CABS    (ABS,CODE)
