#define T1MS_1200bps   0xD8;     /* (e8,-24,SMOD=0) @4800bps  pcon&=0x7f @11.0592MHz*/
#define T1MS_2400bps   0xEC;     /* (f4,-12,SMOD=0) @4800bps  pcon&=0x7f */
#define T1MS_4800bps   0xfa;     /* (fa, -6,SMOD=0) @4800bps  pcon&=0x7f */
#define T1MS_9600bps   0xFB;     /* (fd, -3,SMOD=0) @9600bps  pcon&=0x7f */
#define T1MS_19k2bps   0xfd;     /* (fd, -3,SMOD=1) @19.2kbps pcon|=0x80 */

unsigned char z;

/*********************************
函数名：sel_bps(select bps)
功能:设置串口波特率
sel为选择通讯速率：
  0=1200,1=2400,2=4800,3=9600,4=19.2k
作者：于振南
日期：06.02.25
*********************************/
void sel_bps(unsigned char sel)
{
     switch(sel)
     {
        case 0:PCON&=0x7f;
               TH1=T1MS_1200bps;   /* T1 use sio */
               TL1=T1MS_1200bps;
               break;
        case 1:PCON&=0x7f;
               TH1=T1MS_2400bps;   /* T1 use sio */
               TL1=T1MS_2400bps;
               break;
        case 2:PCON&=0x7f;
               TH1=T1MS_4800bps;   /* T1 use sio */
               TL1=T1MS_4800bps;
               break;
        case 3:PCON&=0x7f;
               TH1=T1MS_9600bps;   /* T1 use sio */
               TL1=T1MS_9600bps;
               break;
        case 4:PCON|=0x80;
               TH1=0xfd;   /* T1 use sio */
               TL1=0xfd;
               break;
     }

}

/*********************************
函数名：tran_init()(tranmit initialize)
功能:串口初始化
     通讯有关参数初始化
作者：于振南
日期：06.02.25
包含子函数:sel_bps
*********************************/
void tran_init()        /* 通讯有关参数初始化 */
{
    sel_bps(3); /* 选择通讯速率：0=1200,1=2400,2=4800,3=9600,4=19.2k */
    /* T1 use sio */
    TMOD=0x21;  /* T1=MODE2,sio; T0=MODE1,16bit,use time */
    PS=1;       /* SIO int high  优先级 */
    EA=1;
    ET1=0;

           SM0=0;
           SM1=1;      /* SM0=0 SM1=1,mode1,10bit          */
           SM2=0;      /* data int,无校验(TB8=bit_duble偶) */

    TR1=1;
    REN=1;
    RI=0;
    TI=0;
    ES=1;

}

/*********************************
函数名：sio_int(sio interrupt)
功能:中断方式接收串口数据   把收到的一个字节放在z中
通讯有关参数初始化
作者：于振南
日期：06.02.25
*********************************/
void  sio_int() interrupt 4 using 2
{
      ES=0;
      if(RI)        /* RI==1 */
      {  z=SBUF;
	 RI=0;
      }
      ES=1;
}

void trans(unsigned char dat)
{
 SBUF=dat;
 while(!TI);
 TI=0;
}
