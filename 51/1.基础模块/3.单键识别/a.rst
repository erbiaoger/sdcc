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
                                     12 	.globl _move
                                     13 	.globl _key
                                     14 	.globl _delay10ms
                                     15 	.globl _TF2
                                     16 	.globl _EXF2
                                     17 	.globl _RCLK
                                     18 	.globl _TCLK
                                     19 	.globl _EXEN2
                                     20 	.globl _TR2
                                     21 	.globl _C_T2
                                     22 	.globl _CP_RL2
                                     23 	.globl _T2CON_7
                                     24 	.globl _T2CON_6
                                     25 	.globl _T2CON_5
                                     26 	.globl _T2CON_4
                                     27 	.globl _T2CON_3
                                     28 	.globl _T2CON_2
                                     29 	.globl _T2CON_1
                                     30 	.globl _T2CON_0
                                     31 	.globl _PT2
                                     32 	.globl _ET2
                                     33 	.globl _CY
                                     34 	.globl _AC
                                     35 	.globl _F0
                                     36 	.globl _RS1
                                     37 	.globl _RS0
                                     38 	.globl _OV
                                     39 	.globl _F1
                                     40 	.globl _P
                                     41 	.globl _PS
                                     42 	.globl _PT1
                                     43 	.globl _PX1
                                     44 	.globl _PT0
                                     45 	.globl _PX0
                                     46 	.globl _RD
                                     47 	.globl _WR
                                     48 	.globl _T1
                                     49 	.globl _T0
                                     50 	.globl _INT1
                                     51 	.globl _INT0
                                     52 	.globl _TXD
                                     53 	.globl _RXD
                                     54 	.globl _P3_7
                                     55 	.globl _P3_6
                                     56 	.globl _P3_5
                                     57 	.globl _P3_4
                                     58 	.globl _P3_3
                                     59 	.globl _P3_2
                                     60 	.globl _P3_1
                                     61 	.globl _P3_0
                                     62 	.globl _EA
                                     63 	.globl _ES
                                     64 	.globl _ET1
                                     65 	.globl _EX1
                                     66 	.globl _ET0
                                     67 	.globl _EX0
                                     68 	.globl _P2_7
                                     69 	.globl _P2_6
                                     70 	.globl _P2_5
                                     71 	.globl _P2_4
                                     72 	.globl _P2_3
                                     73 	.globl _P2_2
                                     74 	.globl _P2_1
                                     75 	.globl _P2_0
                                     76 	.globl _SM0
                                     77 	.globl _SM1
                                     78 	.globl _SM2
                                     79 	.globl _REN
                                     80 	.globl _TB8
                                     81 	.globl _RB8
                                     82 	.globl _TI
                                     83 	.globl _RI
                                     84 	.globl _P1_7
                                     85 	.globl _P1_6
                                     86 	.globl _P1_5
                                     87 	.globl _P1_4
                                     88 	.globl _P1_3
                                     89 	.globl _P1_2
                                     90 	.globl _P1_1
                                     91 	.globl _P1_0
                                     92 	.globl _TF1
                                     93 	.globl _TR1
                                     94 	.globl _TF0
                                     95 	.globl _TR0
                                     96 	.globl _IE1
                                     97 	.globl _IT1
                                     98 	.globl _IE0
                                     99 	.globl _IT0
                                    100 	.globl _P0_7
                                    101 	.globl _P0_6
                                    102 	.globl _P0_5
                                    103 	.globl _P0_4
                                    104 	.globl _P0_3
                                    105 	.globl _P0_2
                                    106 	.globl _P0_1
                                    107 	.globl _P0_0
                                    108 	.globl _TH2
                                    109 	.globl _TL2
                                    110 	.globl _RCAP2H
                                    111 	.globl _RCAP2L
                                    112 	.globl _T2CON
                                    113 	.globl _B
                                    114 	.globl _ACC
                                    115 	.globl _PSW
                                    116 	.globl _IP
                                    117 	.globl _P3
                                    118 	.globl _IE
                                    119 	.globl _P2
                                    120 	.globl _SBUF
                                    121 	.globl _SCON
                                    122 	.globl _P1
                                    123 	.globl _TH1
                                    124 	.globl _TH0
                                    125 	.globl _TL1
                                    126 	.globl _TL0
                                    127 	.globl _TMOD
                                    128 	.globl _TCON
                                    129 	.globl _PCON
                                    130 	.globl _DPH
                                    131 	.globl _DPL
                                    132 	.globl _SP
                                    133 	.globl _P0
                                    134 	.globl _b
                                    135 	.globl _a
                                    136 	.globl _temp
                                    137 	.globl _count
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
      000008                        276 _count::
      000008                        277 	.ds 1
      000009                        278 _temp::
      000009                        279 	.ds 1
      00000A                        280 _a::
      00000A                        281 	.ds 1
      00000B                        282 _b::
      00000B                        283 	.ds 1
                                    284 ;--------------------------------------------------------
                                    285 ; overlayable items in internal ram
                                    286 ;--------------------------------------------------------
                                    287 	.area	OSEG    (OVR,DATA)
                                    288 ;--------------------------------------------------------
                                    289 ; Stack segment in internal ram
                                    290 ;--------------------------------------------------------
                                    291 	.area	SSEG
      00000C                        292 __start__stack:
      00000C                        293 	.ds	1
                                    294 
                                    295 ;--------------------------------------------------------
                                    296 ; indirectly addressable internal ram data
                                    297 ;--------------------------------------------------------
                                    298 	.area ISEG    (DATA)
                                    299 ;--------------------------------------------------------
                                    300 ; absolute internal ram data
                                    301 ;--------------------------------------------------------
                                    302 	.area IABS    (ABS,DATA)
                                    303 	.area IABS    (ABS,DATA)
                                    304 ;--------------------------------------------------------
                                    305 ; bit data
                                    306 ;--------------------------------------------------------
                                    307 	.area BSEG    (BIT)
                                    308 ;--------------------------------------------------------
                                    309 ; paged external ram data
                                    310 ;--------------------------------------------------------
                                    311 	.area PSEG    (PAG,XDATA)
                                    312 ;--------------------------------------------------------
                                    313 ; external ram data
                                    314 ;--------------------------------------------------------
                                    315 	.area XSEG    (XDATA)
                                    316 ;--------------------------------------------------------
                                    317 ; absolute external ram data
                                    318 ;--------------------------------------------------------
                                    319 	.area XABS    (ABS,XDATA)
                                    320 ;--------------------------------------------------------
                                    321 ; external initialized ram data
                                    322 ;--------------------------------------------------------
                                    323 	.area XISEG   (XDATA)
                                    324 	.area HOME    (CODE)
                                    325 	.area GSINIT0 (CODE)
                                    326 	.area GSINIT1 (CODE)
                                    327 	.area GSINIT2 (CODE)
                                    328 	.area GSINIT3 (CODE)
                                    329 	.area GSINIT4 (CODE)
                                    330 	.area GSINIT5 (CODE)
                                    331 	.area GSINIT  (CODE)
                                    332 	.area GSFINAL (CODE)
                                    333 	.area CSEG    (CODE)
                                    334 ;--------------------------------------------------------
                                    335 ; interrupt vector
                                    336 ;--------------------------------------------------------
                                    337 	.area HOME    (CODE)
      000000                        338 __interrupt_vect:
      000000 02 00 06         [24]  339 	ljmp	__sdcc_gsinit_startup
                                    340 ;--------------------------------------------------------
                                    341 ; global & static initialisations
                                    342 ;--------------------------------------------------------
                                    343 	.area HOME    (CODE)
                                    344 	.area GSINIT  (CODE)
                                    345 	.area GSFINAL (CODE)
                                    346 	.area GSINIT  (CODE)
                                    347 	.globl __sdcc_gsinit_startup
                                    348 	.globl __sdcc_program_startup
                                    349 	.globl __start__stack
                                    350 	.globl __mcs51_genXINIT
                                    351 	.globl __mcs51_genXRAMCLEAR
                                    352 	.globl __mcs51_genRAMCLEAR
                                    353 	.area GSFINAL (CODE)
      00005F 02 00 03         [24]  354 	ljmp	__sdcc_program_startup
                                    355 ;--------------------------------------------------------
                                    356 ; Home
                                    357 ;--------------------------------------------------------
                                    358 	.area HOME    (CODE)
                                    359 	.area HOME    (CODE)
      000003                        360 __sdcc_program_startup:
      000003 02 00 AB         [24]  361 	ljmp	_main
                                    362 ;	return from main will return to caller
                                    363 ;--------------------------------------------------------
                                    364 ; code
                                    365 ;--------------------------------------------------------
                                    366 	.area CSEG    (CODE)
                                    367 ;------------------------------------------------------------
                                    368 ;Allocation info for local variables in function 'delay10ms'
                                    369 ;------------------------------------------------------------
                                    370 ;i                         Allocated to registers r7 
                                    371 ;j                         Allocated to registers r6 
                                    372 ;------------------------------------------------------------
                                    373 ;	a.c:8: void delay10ms(void) //延时程序
                                    374 ;	-----------------------------------------
                                    375 ;	 function delay10ms
                                    376 ;	-----------------------------------------
      000062                        377 _delay10ms:
                           000007   378 	ar7 = 0x07
                           000006   379 	ar6 = 0x06
                           000005   380 	ar5 = 0x05
                           000004   381 	ar4 = 0x04
                           000003   382 	ar3 = 0x03
                           000002   383 	ar2 = 0x02
                           000001   384 	ar1 = 0x01
                           000000   385 	ar0 = 0x00
                                    386 ;	a.c:11: for(i=20;i>0;i--)
      000062 7F 14            [12]  387 	mov	r7,#0x14
                                    388 ;	a.c:12: for(j=248;j>0;j--);
      000064                        389 00114$:
      000064 7E F8            [12]  390 	mov	r6,#0xf8
      000066                        391 00104$:
      000066 DE FE            [24]  392 	djnz	r6,00104$
                                    393 ;	a.c:11: for(i=20;i>0;i--)
      000068 DF FA            [24]  394 	djnz	r7,00114$
                                    395 ;	a.c:13: }
      00006A 22               [24]  396 	ret
                                    397 ;------------------------------------------------------------
                                    398 ;Allocation info for local variables in function 'key'
                                    399 ;------------------------------------------------------------
                                    400 ;	a.c:14: void key()           
                                    401 ;	-----------------------------------------
                                    402 ;	 function key
                                    403 ;	-----------------------------------------
      00006B                        404 _key:
                                    405 ;	a.c:16: if(BY1==0)  
      00006B 20 B5 13         [24]  406 	jb	_P3_5,00110$
                                    407 ;	a.c:18: delay10ms(); //延时,软件去干扰
      00006E 12 00 62         [24]  408 	lcall	_delay10ms
                                    409 ;	a.c:19: if(BY1==0)   //确认按键按下
      000071 20 B5 0A         [24]  410 	jb	_P3_5,00105$
                                    411 ;	a.c:21: count++;     //按键计数加1
      000074 05 08            [12]  412 	inc	_count
                                    413 ;	a.c:22: if(count==8) //计8次重新计数
      000076 74 08            [12]  414 	mov	a,#0x08
      000078 B5 08 03         [24]  415 	cjne	a,_count,00105$
                                    416 ;	a.c:24: count=0;    //将count清零
      00007B 75 08 00         [24]  417 	mov	_count,#0x00
                                    418 ;	a.c:27: while(BY1==0);//按键锁定,每按一次count只加1.
      00007E                        419 00105$:
      00007E 30 B5 FD         [24]  420 	jnb	_P3_5,00105$
      000081                        421 00110$:
                                    422 ;	a.c:29: }
      000081 22               [24]  423 	ret
                                    424 ;------------------------------------------------------------
                                    425 ;Allocation info for local variables in function 'move'
                                    426 ;------------------------------------------------------------
                                    427 ;	a.c:30: void move()         //广告灯向左移动移动函数
                                    428 ;	-----------------------------------------
                                    429 ;	 function move
                                    430 ;	-----------------------------------------
      000082                        431 _move:
                                    432 ;	a.c:32: a=temp<<count;
      000082 85 08 F0         [24]  433 	mov	b,_count
      000085 05 F0            [12]  434 	inc	b
      000087 E5 09            [12]  435 	mov	a,_temp
      000089 80 02            [24]  436 	sjmp	00105$
      00008B                        437 00103$:
      00008B 25 E0            [12]  438 	add	a,acc
      00008D                        439 00105$:
      00008D D5 F0 FB         [24]  440 	djnz	b,00103$
      000090 F5 0A            [12]  441 	mov	_a,a
                                    442 ;	a.c:33: b=temp>>(8-count);
      000092 74 08            [12]  443 	mov	a,#0x08
      000094 C3               [12]  444 	clr	c
      000095 95 08            [12]  445 	subb	a,_count
      000097 F5 F0            [12]  446 	mov	b,a
      000099 05 F0            [12]  447 	inc	b
      00009B E5 09            [12]  448 	mov	a,_temp
      00009D 80 02            [24]  449 	sjmp	00107$
      00009F                        450 00106$:
      00009F C3               [12]  451 	clr	c
      0000A0 13               [12]  452 	rrc	a
      0000A1                        453 00107$:
      0000A1 D5 F0 FB         [24]  454 	djnz	b,00106$
                                    455 ;	a.c:34: P1=a|b;
      0000A4 F5 0B            [12]  456 	mov	_b,a
      0000A6 45 0A            [12]  457 	orl	a,_a
      0000A8 F5 90            [12]  458 	mov	_P1,a
                                    459 ;	a.c:35: }
      0000AA 22               [24]  460 	ret
                                    461 ;------------------------------------------------------------
                                    462 ;Allocation info for local variables in function 'main'
                                    463 ;------------------------------------------------------------
                                    464 ;	a.c:37: main()
                                    465 ;	-----------------------------------------
                                    466 ;	 function main
                                    467 ;	-----------------------------------------
      0000AB                        468 _main:
                                    469 ;	a.c:39: count=0;  //初始华参数设置
      0000AB 75 08 00         [24]  470 	mov	_count,#0x00
                                    471 ;	a.c:40: temp=0xfe;
      0000AE 75 09 FE         [24]  472 	mov	_temp,#0xfe
                                    473 ;	a.c:41: P1=0xff;
      0000B1 75 90 FF         [24]  474 	mov	_P1,#0xff
                                    475 ;	a.c:42: P1=temp;
      0000B4 75 90 FE         [24]  476 	mov	_P1,#0xfe
                                    477 ;	a.c:43: while(1)  //永远循环,扫描判断按键是否按下
      0000B7                        478 00102$:
                                    479 ;	a.c:45: key();    //调用按键识别函数
      0000B7 12 00 6B         [24]  480 	lcall	_key
                                    481 ;	a.c:46: move();   //调用广告灯移动函数
      0000BA 12 00 82         [24]  482 	lcall	_move
                                    483 ;	a.c:48: }
      0000BD 80 F8            [24]  484 	sjmp	00102$
                                    485 	.area CSEG    (CODE)
                                    486 	.area CONST   (CODE)
                                    487 	.area XINIT   (CODE)
                                    488 	.area CABS    (ABS,CODE)
