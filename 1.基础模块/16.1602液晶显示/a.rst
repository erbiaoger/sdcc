                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 4.2.0 #13081 (Mac OS X ppc)
                                      4 ;--------------------------------------------------------
                                      5 	.module a
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _init
                                     13 	.globl _write_date
                                     14 	.globl _write_com
                                     15 	.globl _delay1
                                     16 	.globl _delay
                                     17 	.globl _TF2
                                     18 	.globl _EXF2
                                     19 	.globl _RCLK
                                     20 	.globl _TCLK
                                     21 	.globl _EXEN2
                                     22 	.globl _TR2
                                     23 	.globl _C_T2
                                     24 	.globl _CP_RL2
                                     25 	.globl _T2CON_7
                                     26 	.globl _T2CON_6
                                     27 	.globl _T2CON_5
                                     28 	.globl _T2CON_4
                                     29 	.globl _T2CON_3
                                     30 	.globl _T2CON_2
                                     31 	.globl _T2CON_1
                                     32 	.globl _T2CON_0
                                     33 	.globl _PT2
                                     34 	.globl _ET2
                                     35 	.globl _CY
                                     36 	.globl _AC
                                     37 	.globl _F0
                                     38 	.globl _RS1
                                     39 	.globl _RS0
                                     40 	.globl _OV
                                     41 	.globl _F1
                                     42 	.globl _P
                                     43 	.globl _PS
                                     44 	.globl _PT1
                                     45 	.globl _PX1
                                     46 	.globl _PT0
                                     47 	.globl _PX0
                                     48 	.globl _RD
                                     49 	.globl _WR
                                     50 	.globl _T1
                                     51 	.globl _T0
                                     52 	.globl _INT1
                                     53 	.globl _INT0
                                     54 	.globl _TXD
                                     55 	.globl _RXD
                                     56 	.globl _P3_7
                                     57 	.globl _P3_6
                                     58 	.globl _P3_5
                                     59 	.globl _P3_4
                                     60 	.globl _P3_3
                                     61 	.globl _P3_2
                                     62 	.globl _P3_1
                                     63 	.globl _P3_0
                                     64 	.globl _EA
                                     65 	.globl _ES
                                     66 	.globl _ET1
                                     67 	.globl _EX1
                                     68 	.globl _ET0
                                     69 	.globl _EX0
                                     70 	.globl _P2_7
                                     71 	.globl _P2_6
                                     72 	.globl _P2_5
                                     73 	.globl _P2_4
                                     74 	.globl _P2_3
                                     75 	.globl _P2_2
                                     76 	.globl _P2_1
                                     77 	.globl _P2_0
                                     78 	.globl _SM0
                                     79 	.globl _SM1
                                     80 	.globl _SM2
                                     81 	.globl _REN
                                     82 	.globl _TB8
                                     83 	.globl _RB8
                                     84 	.globl _TI
                                     85 	.globl _RI
                                     86 	.globl _P1_7
                                     87 	.globl _P1_6
                                     88 	.globl _P1_5
                                     89 	.globl _P1_4
                                     90 	.globl _P1_3
                                     91 	.globl _P1_2
                                     92 	.globl _P1_1
                                     93 	.globl _P1_0
                                     94 	.globl _TF1
                                     95 	.globl _TR1
                                     96 	.globl _TF0
                                     97 	.globl _TR0
                                     98 	.globl _IE1
                                     99 	.globl _IT1
                                    100 	.globl _IE0
                                    101 	.globl _IT0
                                    102 	.globl _P0_7
                                    103 	.globl _P0_6
                                    104 	.globl _P0_5
                                    105 	.globl _P0_4
                                    106 	.globl _P0_3
                                    107 	.globl _P0_2
                                    108 	.globl _P0_1
                                    109 	.globl _P0_0
                                    110 	.globl _TH2
                                    111 	.globl _TL2
                                    112 	.globl _RCAP2H
                                    113 	.globl _RCAP2L
                                    114 	.globl _T2CON
                                    115 	.globl _B
                                    116 	.globl _ACC
                                    117 	.globl _PSW
                                    118 	.globl _IP
                                    119 	.globl _P3
                                    120 	.globl _IE
                                    121 	.globl _P2
                                    122 	.globl _SBUF
                                    123 	.globl _SCON
                                    124 	.globl _P1
                                    125 	.globl _TH1
                                    126 	.globl _TH0
                                    127 	.globl _TL1
                                    128 	.globl _TL0
                                    129 	.globl _TMOD
                                    130 	.globl _TCON
                                    131 	.globl _PCON
                                    132 	.globl _DPH
                                    133 	.globl _DPL
                                    134 	.globl _SP
                                    135 	.globl _P0
                                    136 	.globl _table2
                                    137 	.globl _table1
                                    138 ;--------------------------------------------------------
                                    139 ; special function registers
                                    140 ;--------------------------------------------------------
                                    141 	.area RSEG    (ABS,DATA)
      000000                        142 	.org 0x0000
                           000080   143 _P0	=	0x0080
                           000081   144 _SP	=	0x0081
                           000082   145 _DPL	=	0x0082
                           000083   146 _DPH	=	0x0083
                           000087   147 _PCON	=	0x0087
                           000088   148 _TCON	=	0x0088
                           000089   149 _TMOD	=	0x0089
                           00008A   150 _TL0	=	0x008a
                           00008B   151 _TL1	=	0x008b
                           00008C   152 _TH0	=	0x008c
                           00008D   153 _TH1	=	0x008d
                           000090   154 _P1	=	0x0090
                           000098   155 _SCON	=	0x0098
                           000099   156 _SBUF	=	0x0099
                           0000A0   157 _P2	=	0x00a0
                           0000A8   158 _IE	=	0x00a8
                           0000B0   159 _P3	=	0x00b0
                           0000B8   160 _IP	=	0x00b8
                           0000D0   161 _PSW	=	0x00d0
                           0000E0   162 _ACC	=	0x00e0
                           0000F0   163 _B	=	0x00f0
                           0000C8   164 _T2CON	=	0x00c8
                           0000CA   165 _RCAP2L	=	0x00ca
                           0000CB   166 _RCAP2H	=	0x00cb
                           0000CC   167 _TL2	=	0x00cc
                           0000CD   168 _TH2	=	0x00cd
                                    169 ;--------------------------------------------------------
                                    170 ; special function bits
                                    171 ;--------------------------------------------------------
                                    172 	.area RSEG    (ABS,DATA)
      000000                        173 	.org 0x0000
                           000080   174 _P0_0	=	0x0080
                           000081   175 _P0_1	=	0x0081
                           000082   176 _P0_2	=	0x0082
                           000083   177 _P0_3	=	0x0083
                           000084   178 _P0_4	=	0x0084
                           000085   179 _P0_5	=	0x0085
                           000086   180 _P0_6	=	0x0086
                           000087   181 _P0_7	=	0x0087
                           000088   182 _IT0	=	0x0088
                           000089   183 _IE0	=	0x0089
                           00008A   184 _IT1	=	0x008a
                           00008B   185 _IE1	=	0x008b
                           00008C   186 _TR0	=	0x008c
                           00008D   187 _TF0	=	0x008d
                           00008E   188 _TR1	=	0x008e
                           00008F   189 _TF1	=	0x008f
                           000090   190 _P1_0	=	0x0090
                           000091   191 _P1_1	=	0x0091
                           000092   192 _P1_2	=	0x0092
                           000093   193 _P1_3	=	0x0093
                           000094   194 _P1_4	=	0x0094
                           000095   195 _P1_5	=	0x0095
                           000096   196 _P1_6	=	0x0096
                           000097   197 _P1_7	=	0x0097
                           000098   198 _RI	=	0x0098
                           000099   199 _TI	=	0x0099
                           00009A   200 _RB8	=	0x009a
                           00009B   201 _TB8	=	0x009b
                           00009C   202 _REN	=	0x009c
                           00009D   203 _SM2	=	0x009d
                           00009E   204 _SM1	=	0x009e
                           00009F   205 _SM0	=	0x009f
                           0000A0   206 _P2_0	=	0x00a0
                           0000A1   207 _P2_1	=	0x00a1
                           0000A2   208 _P2_2	=	0x00a2
                           0000A3   209 _P2_3	=	0x00a3
                           0000A4   210 _P2_4	=	0x00a4
                           0000A5   211 _P2_5	=	0x00a5
                           0000A6   212 _P2_6	=	0x00a6
                           0000A7   213 _P2_7	=	0x00a7
                           0000A8   214 _EX0	=	0x00a8
                           0000A9   215 _ET0	=	0x00a9
                           0000AA   216 _EX1	=	0x00aa
                           0000AB   217 _ET1	=	0x00ab
                           0000AC   218 _ES	=	0x00ac
                           0000AF   219 _EA	=	0x00af
                           0000B0   220 _P3_0	=	0x00b0
                           0000B1   221 _P3_1	=	0x00b1
                           0000B2   222 _P3_2	=	0x00b2
                           0000B3   223 _P3_3	=	0x00b3
                           0000B4   224 _P3_4	=	0x00b4
                           0000B5   225 _P3_5	=	0x00b5
                           0000B6   226 _P3_6	=	0x00b6
                           0000B7   227 _P3_7	=	0x00b7
                           0000B0   228 _RXD	=	0x00b0
                           0000B1   229 _TXD	=	0x00b1
                           0000B2   230 _INT0	=	0x00b2
                           0000B3   231 _INT1	=	0x00b3
                           0000B4   232 _T0	=	0x00b4
                           0000B5   233 _T1	=	0x00b5
                           0000B6   234 _WR	=	0x00b6
                           0000B7   235 _RD	=	0x00b7
                           0000B8   236 _PX0	=	0x00b8
                           0000B9   237 _PT0	=	0x00b9
                           0000BA   238 _PX1	=	0x00ba
                           0000BB   239 _PT1	=	0x00bb
                           0000BC   240 _PS	=	0x00bc
                           0000D0   241 _P	=	0x00d0
                           0000D1   242 _F1	=	0x00d1
                           0000D2   243 _OV	=	0x00d2
                           0000D3   244 _RS0	=	0x00d3
                           0000D4   245 _RS1	=	0x00d4
                           0000D5   246 _F0	=	0x00d5
                           0000D6   247 _AC	=	0x00d6
                           0000D7   248 _CY	=	0x00d7
                           0000AD   249 _ET2	=	0x00ad
                           0000BD   250 _PT2	=	0x00bd
                           0000C8   251 _T2CON_0	=	0x00c8
                           0000C9   252 _T2CON_1	=	0x00c9
                           0000CA   253 _T2CON_2	=	0x00ca
                           0000CB   254 _T2CON_3	=	0x00cb
                           0000CC   255 _T2CON_4	=	0x00cc
                           0000CD   256 _T2CON_5	=	0x00cd
                           0000CE   257 _T2CON_6	=	0x00ce
                           0000CF   258 _T2CON_7	=	0x00cf
                           0000C8   259 _CP_RL2	=	0x00c8
                           0000C9   260 _C_T2	=	0x00c9
                           0000CA   261 _TR2	=	0x00ca
                           0000CB   262 _EXEN2	=	0x00cb
                           0000CC   263 _TCLK	=	0x00cc
                           0000CD   264 _RCLK	=	0x00cd
                           0000CE   265 _EXF2	=	0x00ce
                           0000CF   266 _TF2	=	0x00cf
                                    267 ;--------------------------------------------------------
                                    268 ; overlayable register banks
                                    269 ;--------------------------------------------------------
                                    270 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        271 	.ds 8
                                    272 ;--------------------------------------------------------
                                    273 ; internal ram data
                                    274 ;--------------------------------------------------------
                                    275 	.area DSEG    (DATA)
      000008                        276 _table1::
      000008                        277 	.ds 9
      000011                        278 _table2::
      000011                        279 	.ds 10
                                    280 ;--------------------------------------------------------
                                    281 ; overlayable items in internal ram
                                    282 ;--------------------------------------------------------
                                    283 	.area	OSEG    (OVR,DATA)
                                    284 	.area	OSEG    (OVR,DATA)
                                    285 ;--------------------------------------------------------
                                    286 ; Stack segment in internal ram
                                    287 ;--------------------------------------------------------
                                    288 	.area	SSEG
      00001B                        289 __start__stack:
      00001B                        290 	.ds	1
                                    291 
                                    292 ;--------------------------------------------------------
                                    293 ; indirectly addressable internal ram data
                                    294 ;--------------------------------------------------------
                                    295 	.area ISEG    (DATA)
                                    296 ;--------------------------------------------------------
                                    297 ; absolute internal ram data
                                    298 ;--------------------------------------------------------
                                    299 	.area IABS    (ABS,DATA)
                                    300 	.area IABS    (ABS,DATA)
                                    301 ;--------------------------------------------------------
                                    302 ; bit data
                                    303 ;--------------------------------------------------------
                                    304 	.area BSEG    (BIT)
                                    305 ;--------------------------------------------------------
                                    306 ; paged external ram data
                                    307 ;--------------------------------------------------------
                                    308 	.area PSEG    (PAG,XDATA)
                                    309 ;--------------------------------------------------------
                                    310 ; external ram data
                                    311 ;--------------------------------------------------------
                                    312 	.area XSEG    (XDATA)
                                    313 ;--------------------------------------------------------
                                    314 ; absolute external ram data
                                    315 ;--------------------------------------------------------
                                    316 	.area XABS    (ABS,XDATA)
                                    317 ;--------------------------------------------------------
                                    318 ; external initialized ram data
                                    319 ;--------------------------------------------------------
                                    320 	.area XISEG   (XDATA)
                                    321 	.area HOME    (CODE)
                                    322 	.area GSINIT0 (CODE)
                                    323 	.area GSINIT1 (CODE)
                                    324 	.area GSINIT2 (CODE)
                                    325 	.area GSINIT3 (CODE)
                                    326 	.area GSINIT4 (CODE)
                                    327 	.area GSINIT5 (CODE)
                                    328 	.area GSINIT  (CODE)
                                    329 	.area GSFINAL (CODE)
                                    330 	.area CSEG    (CODE)
                                    331 ;--------------------------------------------------------
                                    332 ; interrupt vector
                                    333 ;--------------------------------------------------------
                                    334 	.area HOME    (CODE)
      000000                        335 __interrupt_vect:
      000000 02 00 06         [24]  336 	ljmp	__sdcc_gsinit_startup
                                    337 ;--------------------------------------------------------
                                    338 ; global & static initialisations
                                    339 ;--------------------------------------------------------
                                    340 	.area HOME    (CODE)
                                    341 	.area GSINIT  (CODE)
                                    342 	.area GSFINAL (CODE)
                                    343 	.area GSINIT  (CODE)
                                    344 	.globl __sdcc_gsinit_startup
                                    345 	.globl __sdcc_program_startup
                                    346 	.globl __start__stack
                                    347 	.globl __mcs51_genXINIT
                                    348 	.globl __mcs51_genXRAMCLEAR
                                    349 	.globl __mcs51_genRAMCLEAR
                                    350 ;	a.c:10: uchar table1[]="Made By ";
      00005F 75 08 4D         [24]  351 	mov	_table1,#0x4d
      000062 75 09 61         [24]  352 	mov	(_table1 + 0x0001),#0x61
      000065 75 0A 64         [24]  353 	mov	(_table1 + 0x0002),#0x64
      000068 75 0B 65         [24]  354 	mov	(_table1 + 0x0003),#0x65
      00006B 75 0C 20         [24]  355 	mov	(_table1 + 0x0004),#0x20
      00006E 75 0D 42         [24]  356 	mov	(_table1 + 0x0005),#0x42
      000071 75 0E 79         [24]  357 	mov	(_table1 + 0x0006),#0x79
      000074 75 0F 20         [24]  358 	mov	(_table1 + 0x0007),#0x20
      000077 75 10 00         [24]  359 	mov	(_table1 + 0x0008),#0x00
                                    360 ;	a.c:11: uchar table2[]="Erbiaoger";
      00007A 75 11 45         [24]  361 	mov	_table2,#0x45
      00007D 75 12 72         [24]  362 	mov	(_table2 + 0x0001),#0x72
      000080 75 13 62         [24]  363 	mov	(_table2 + 0x0002),#0x62
      000083 75 14 69         [24]  364 	mov	(_table2 + 0x0003),#0x69
      000086 75 15 61         [24]  365 	mov	(_table2 + 0x0004),#0x61
      000089 75 16 6F         [24]  366 	mov	(_table2 + 0x0005),#0x6f
      00008C 75 17 67         [24]  367 	mov	(_table2 + 0x0006),#0x67
      00008F 75 18 65         [24]  368 	mov	(_table2 + 0x0007),#0x65
      000092 75 19 72         [24]  369 	mov	(_table2 + 0x0008),#0x72
      000095 75 1A 00         [24]  370 	mov	(_table2 + 0x0009),#0x00
                                    371 	.area GSFINAL (CODE)
      000098 02 00 03         [24]  372 	ljmp	__sdcc_program_startup
                                    373 ;--------------------------------------------------------
                                    374 ; Home
                                    375 ;--------------------------------------------------------
                                    376 	.area HOME    (CODE)
                                    377 	.area HOME    (CODE)
      000003                        378 __sdcc_program_startup:
      000003 02 01 39         [24]  379 	ljmp	_main
                                    380 ;	return from main will return to caller
                                    381 ;--------------------------------------------------------
                                    382 ; code
                                    383 ;--------------------------------------------------------
                                    384 	.area CSEG    (CODE)
                                    385 ;------------------------------------------------------------
                                    386 ;Allocation info for local variables in function 'delay'
                                    387 ;------------------------------------------------------------
                                    388 ;x                         Allocated to registers 
                                    389 ;a                         Allocated to registers r6 r7 
                                    390 ;b                         Allocated to registers r4 r5 
                                    391 ;------------------------------------------------------------
                                    392 ;	a.c:13: void delay(uint x)
                                    393 ;	-----------------------------------------
                                    394 ;	 function delay
                                    395 ;	-----------------------------------------
      00009B                        396 _delay:
                           000007   397 	ar7 = 0x07
                           000006   398 	ar6 = 0x06
                           000005   399 	ar5 = 0x05
                           000004   400 	ar4 = 0x04
                           000003   401 	ar3 = 0x03
                           000002   402 	ar2 = 0x02
                           000001   403 	ar1 = 0x01
                           000000   404 	ar0 = 0x00
      00009B AE 82            [24]  405 	mov	r6,dpl
      00009D AF 83            [24]  406 	mov	r7,dph
                                    407 ;	a.c:16: for(a=x;a>0;a--)
      00009F                        408 00106$:
      00009F EE               [12]  409 	mov	a,r6
      0000A0 4F               [12]  410 	orl	a,r7
      0000A1 60 14            [24]  411 	jz	00108$
                                    412 ;	a.c:17: for(b=200;b>0;b--); 
      0000A3 7C C8            [12]  413 	mov	r4,#0xc8
      0000A5 7D 00            [12]  414 	mov	r5,#0x00
      0000A7                        415 00104$:
      0000A7 1C               [12]  416 	dec	r4
      0000A8 BC FF 01         [24]  417 	cjne	r4,#0xff,00133$
      0000AB 1D               [12]  418 	dec	r5
      0000AC                        419 00133$:
      0000AC EC               [12]  420 	mov	a,r4
      0000AD 4D               [12]  421 	orl	a,r5
      0000AE 70 F7            [24]  422 	jnz	00104$
                                    423 ;	a.c:16: for(a=x;a>0;a--)
      0000B0 1E               [12]  424 	dec	r6
      0000B1 BE FF 01         [24]  425 	cjne	r6,#0xff,00135$
      0000B4 1F               [12]  426 	dec	r7
      0000B5                        427 00135$:
      0000B5 80 E8            [24]  428 	sjmp	00106$
      0000B7                        429 00108$:
                                    430 ;	a.c:18: }
      0000B7 22               [24]  431 	ret
                                    432 ;------------------------------------------------------------
                                    433 ;Allocation info for local variables in function 'delay1'
                                    434 ;------------------------------------------------------------
                                    435 ;x                         Allocated to registers 
                                    436 ;a                         Allocated to registers r6 r7 
                                    437 ;b                         Allocated to registers r4 r5 
                                    438 ;------------------------------------------------------------
                                    439 ;	a.c:20: void delay1(uint x)
                                    440 ;	-----------------------------------------
                                    441 ;	 function delay1
                                    442 ;	-----------------------------------------
      0000B8                        443 _delay1:
      0000B8 AE 82            [24]  444 	mov	r6,dpl
      0000BA AF 83            [24]  445 	mov	r7,dph
                                    446 ;	a.c:23: for(a=x;a>0;a--)
      0000BC                        447 00106$:
      0000BC EE               [12]  448 	mov	a,r6
      0000BD 4F               [12]  449 	orl	a,r7
      0000BE 60 14            [24]  450 	jz	00108$
                                    451 ;	a.c:24: for(b=100;b>0;b--); 
      0000C0 7C 64            [12]  452 	mov	r4,#0x64
      0000C2 7D 00            [12]  453 	mov	r5,#0x00
      0000C4                        454 00104$:
      0000C4 1C               [12]  455 	dec	r4
      0000C5 BC FF 01         [24]  456 	cjne	r4,#0xff,00133$
      0000C8 1D               [12]  457 	dec	r5
      0000C9                        458 00133$:
      0000C9 EC               [12]  459 	mov	a,r4
      0000CA 4D               [12]  460 	orl	a,r5
      0000CB 70 F7            [24]  461 	jnz	00104$
                                    462 ;	a.c:23: for(a=x;a>0;a--)
      0000CD 1E               [12]  463 	dec	r6
      0000CE BE FF 01         [24]  464 	cjne	r6,#0xff,00135$
      0000D1 1F               [12]  465 	dec	r7
      0000D2                        466 00135$:
      0000D2 80 E8            [24]  467 	sjmp	00106$
      0000D4                        468 00108$:
                                    469 ;	a.c:25: }
      0000D4 22               [24]  470 	ret
                                    471 ;------------------------------------------------------------
                                    472 ;Allocation info for local variables in function 'write_com'
                                    473 ;------------------------------------------------------------
                                    474 ;com                       Allocated to registers 
                                    475 ;------------------------------------------------------------
                                    476 ;	a.c:27: void write_com(uchar com)
                                    477 ;	-----------------------------------------
                                    478 ;	 function write_com
                                    479 ;	-----------------------------------------
      0000D5                        480 _write_com:
      0000D5 85 82 80         [24]  481 	mov	_P0,dpl
                                    482 ;	a.c:30: rs=0;
                                    483 ;	assignBit
      0000D8 C2 B5            [12]  484 	clr	_P3_5
                                    485 ;	a.c:31: lcden=0;
                                    486 ;	assignBit
      0000DA C2 B4            [12]  487 	clr	_P3_4
                                    488 ;	a.c:32: delay(10);
      0000DC 90 00 0A         [24]  489 	mov	dptr,#0x000a
      0000DF 12 00 9B         [24]  490 	lcall	_delay
                                    491 ;	a.c:33: lcden=1;
                                    492 ;	assignBit
      0000E2 D2 B4            [12]  493 	setb	_P3_4
                                    494 ;	a.c:34: delay(10);
      0000E4 90 00 0A         [24]  495 	mov	dptr,#0x000a
      0000E7 12 00 9B         [24]  496 	lcall	_delay
                                    497 ;	a.c:35: lcden=0;
                                    498 ;	assignBit
      0000EA C2 B4            [12]  499 	clr	_P3_4
                                    500 ;	a.c:37: }
      0000EC 22               [24]  501 	ret
                                    502 ;------------------------------------------------------------
                                    503 ;Allocation info for local variables in function 'write_date'
                                    504 ;------------------------------------------------------------
                                    505 ;date                      Allocated to registers 
                                    506 ;------------------------------------------------------------
                                    507 ;	a.c:39: void write_date(uchar date)
                                    508 ;	-----------------------------------------
                                    509 ;	 function write_date
                                    510 ;	-----------------------------------------
      0000ED                        511 _write_date:
      0000ED 85 82 80         [24]  512 	mov	_P0,dpl
                                    513 ;	a.c:42: rs=1;
                                    514 ;	assignBit
      0000F0 D2 B5            [12]  515 	setb	_P3_5
                                    516 ;	a.c:43: lcden=0;
                                    517 ;	assignBit
      0000F2 C2 B4            [12]  518 	clr	_P3_4
                                    519 ;	a.c:44: delay(10);
      0000F4 90 00 0A         [24]  520 	mov	dptr,#0x000a
      0000F7 12 00 9B         [24]  521 	lcall	_delay
                                    522 ;	a.c:45: lcden=1;
                                    523 ;	assignBit
      0000FA D2 B4            [12]  524 	setb	_P3_4
                                    525 ;	a.c:46: delay(10);
      0000FC 90 00 0A         [24]  526 	mov	dptr,#0x000a
      0000FF 12 00 9B         [24]  527 	lcall	_delay
                                    528 ;	a.c:47: lcden=0;
                                    529 ;	assignBit
      000102 C2 B4            [12]  530 	clr	_P3_4
                                    531 ;	a.c:49: }
      000104 22               [24]  532 	ret
                                    533 ;------------------------------------------------------------
                                    534 ;Allocation info for local variables in function 'init'
                                    535 ;------------------------------------------------------------
                                    536 ;	a.c:51: void init()
                                    537 ;	-----------------------------------------
                                    538 ;	 function init
                                    539 ;	-----------------------------------------
      000105                        540 _init:
                                    541 ;	a.c:53: dula=0;
                                    542 ;	assignBit
      000105 C2 A6            [12]  543 	clr	_P2_6
                                    544 ;	a.c:54: wela=0;
                                    545 ;	assignBit
      000107 C2 A7            [12]  546 	clr	_P2_7
                                    547 ;	a.c:55: write_com(0x38);
      000109 75 82 38         [24]  548 	mov	dpl,#0x38
      00010C 12 00 D5         [24]  549 	lcall	_write_com
                                    550 ;	a.c:56: delay(20);
      00010F 90 00 14         [24]  551 	mov	dptr,#0x0014
      000112 12 00 9B         [24]  552 	lcall	_delay
                                    553 ;	a.c:57: write_com(0x0f);
      000115 75 82 0F         [24]  554 	mov	dpl,#0x0f
      000118 12 00 D5         [24]  555 	lcall	_write_com
                                    556 ;	a.c:58: delay(20);
      00011B 90 00 14         [24]  557 	mov	dptr,#0x0014
      00011E 12 00 9B         [24]  558 	lcall	_delay
                                    559 ;	a.c:59: write_com(0x06);
      000121 75 82 06         [24]  560 	mov	dpl,#0x06
      000124 12 00 D5         [24]  561 	lcall	_write_com
                                    562 ;	a.c:60: delay(20);
      000127 90 00 14         [24]  563 	mov	dptr,#0x0014
      00012A 12 00 9B         [24]  564 	lcall	_delay
                                    565 ;	a.c:61: write_com(0x01);
      00012D 75 82 01         [24]  566 	mov	dpl,#0x01
      000130 12 00 D5         [24]  567 	lcall	_write_com
                                    568 ;	a.c:62: delay(20);	
      000133 90 00 14         [24]  569 	mov	dptr,#0x0014
                                    570 ;	a.c:63: }
      000136 02 00 9B         [24]  571 	ljmp	_delay
                                    572 ;------------------------------------------------------------
                                    573 ;Allocation info for local variables in function 'main'
                                    574 ;------------------------------------------------------------
                                    575 ;a                         Allocated to registers r7 
                                    576 ;------------------------------------------------------------
                                    577 ;	a.c:65: void main()
                                    578 ;	-----------------------------------------
                                    579 ;	 function main
                                    580 ;	-----------------------------------------
      000139                        581 _main:
                                    582 ;	a.c:68: init();
      000139 12 01 05         [24]  583 	lcall	_init
                                    584 ;	a.c:70: write_com(0x90);
      00013C 75 82 90         [24]  585 	mov	dpl,#0x90
      00013F 12 00 D5         [24]  586 	lcall	_write_com
                                    587 ;	a.c:71: delay(20);
      000142 90 00 14         [24]  588 	mov	dptr,#0x0014
      000145 12 00 9B         [24]  589 	lcall	_delay
                                    590 ;	a.c:72: for(a=0;a<9;a++)
      000148 7F 00            [12]  591 	mov	r7,#0x00
      00014A                        592 00107$:
                                    593 ;	a.c:74: write_date(table1[a]);
      00014A EF               [12]  594 	mov	a,r7
      00014B 24 08            [12]  595 	add	a,#_table1
      00014D F9               [12]  596 	mov	r1,a
      00014E 87 82            [24]  597 	mov	dpl,@r1
      000150 C0 07            [24]  598 	push	ar7
      000152 12 00 ED         [24]  599 	lcall	_write_date
                                    600 ;	a.c:75: delay(20);		
      000155 90 00 14         [24]  601 	mov	dptr,#0x0014
      000158 12 00 9B         [24]  602 	lcall	_delay
      00015B D0 07            [24]  603 	pop	ar7
                                    604 ;	a.c:72: for(a=0;a<9;a++)
      00015D 0F               [12]  605 	inc	r7
      00015E BF 09 00         [24]  606 	cjne	r7,#0x09,00142$
      000161                        607 00142$:
      000161 40 E7            [24]  608 	jc	00107$
                                    609 ;	a.c:78: write_com(0xd2);
      000163 75 82 D2         [24]  610 	mov	dpl,#0xd2
      000166 12 00 D5         [24]  611 	lcall	_write_com
                                    612 ;	a.c:79: delay(50);
      000169 90 00 32         [24]  613 	mov	dptr,#0x0032
      00016C 12 00 9B         [24]  614 	lcall	_delay
                                    615 ;	a.c:80: for(a=0;a<13;a++)
      00016F 7F 00            [12]  616 	mov	r7,#0x00
      000171                        617 00109$:
                                    618 ;	a.c:82: write_date(table2[a]);
      000171 EF               [12]  619 	mov	a,r7
      000172 24 11            [12]  620 	add	a,#_table2
      000174 F9               [12]  621 	mov	r1,a
      000175 87 82            [24]  622 	mov	dpl,@r1
      000177 C0 07            [24]  623 	push	ar7
      000179 12 00 ED         [24]  624 	lcall	_write_date
                                    625 ;	a.c:83: delay(40);		
      00017C 90 00 28         [24]  626 	mov	dptr,#0x0028
      00017F 12 00 9B         [24]  627 	lcall	_delay
      000182 D0 07            [24]  628 	pop	ar7
                                    629 ;	a.c:80: for(a=0;a<13;a++)
      000184 0F               [12]  630 	inc	r7
      000185 BF 0D 00         [24]  631 	cjne	r7,#0x0d,00144$
      000188                        632 00144$:
      000188 40 E7            [24]  633 	jc	00109$
                                    634 ;	a.c:86: for(a=0;a<16;a++)
      00018A 7F 00            [12]  635 	mov	r7,#0x00
      00018C                        636 00111$:
                                    637 ;	a.c:88: write_com(0x18);
      00018C 75 82 18         [24]  638 	mov	dpl,#0x18
      00018F C0 07            [24]  639 	push	ar7
      000191 12 00 D5         [24]  640 	lcall	_write_com
                                    641 ;	a.c:89: delay1(200);
      000194 90 00 C8         [24]  642 	mov	dptr,#0x00c8
      000197 12 00 B8         [24]  643 	lcall	_delay1
      00019A D0 07            [24]  644 	pop	ar7
                                    645 ;	a.c:86: for(a=0;a<16;a++)
      00019C 0F               [12]  646 	inc	r7
      00019D BF 10 00         [24]  647 	cjne	r7,#0x10,00146$
      0001A0                        648 00146$:
      0001A0 40 EA            [24]  649 	jc	00111$
                                    650 ;	a.c:91: while(1);
      0001A2                        651 00105$:
                                    652 ;	a.c:92: }
      0001A2 80 FE            [24]  653 	sjmp	00105$
                                    654 	.area CSEG    (CODE)
                                    655 	.area CONST   (CODE)
                                    656 	.area XINIT   (CODE)
                                    657 	.area CABS    (ABS,CODE)
