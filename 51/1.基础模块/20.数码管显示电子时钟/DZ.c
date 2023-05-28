//S2键调整小时，S3键调整分钟
#include <reg51.h>
#include <intrins.h>

unsigned char data dis_digit;
unsigned char key_s, key_v;

unsigned char code table[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,
                        0x07,0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};
unsigned char data dis_buf[8];
unsigned char data dis_index;
unsigned char hour,min,sec;
unsigned char sec100; 

sbit	K1 = P3^4;
sbit	K2 = P3^5;
sbit    dula=P2^6;
sbit    wela=P2^7;
bit scan_key();
void proc_key();
void inc_sec();
void inc_min();
void inc_hour();
//void display();
void delay(unsigned char ms);
void display1(unsigned char a1,unsigned char a2,unsigned char a3,unsigned char a4,unsigned char a5,unsigned char a6);
void main(void)
{
	P0 = 0xff;
	P2 = 0xff;
	TMOD = 0x11;		// 定时器0, 1工作模式1, 16位定时方式
	TH1 = 0xdc;
	TL1 = 0;

	TH0 = 0xFC;
	TL0 = 0x17;
	
	hour = 12;
	min = 00;
	sec = 00;

	sec100 = 0;
	
	dis_buf[0] = hour / 10;		// 时十位
	dis_buf[1] = hour % 10;		// 时个位
	dis_buf[3] = min / 10;		// 分十位
	dis_buf[4] = min % 10;		// 分个位
	dis_buf[6] = sec / 10;		// 秒十位
	dis_buf[7] = sec % 10;		// 秒个位
//	dis_buf[2] = 0xbf;						// 显示"-"
//	dis_buf[5] = 0xbf;						// 显示"-"
			
	dis_digit = 0xfe;
	dis_index = 0;
	
	TCON = 0x01;
	IE = 0x8a;				// 使能timer0,1 中断
	TR1 = 1;

	key_v = 0x03;

	while(1)
	{
		if(scan_key())
		{
			delay(10);
			if(scan_key())
			{
				key_v = key_s;
				proc_key();
			}
		}
		display1(dis_buf[0],dis_buf[1],dis_buf[3],dis_buf[4],dis_buf[6],dis_buf[7]);	
	}
}

bit scan_key()
{
	key_s = 0x00;
	key_s |= K2;
	key_s <<= 1;
	key_s |= K1;
	return(key_s ^ key_v);	
}

void proc_key()
{
	EA = 0;
	if((key_v & 0x01) == 0)		// K1
	{
		inc_hour();
	}
	else if((key_v & 0x02) == 0)	// K2
	{
		min++;
		if(min > 59)
		{
			min = 0;
		}
		dis_buf[3] = min / 10;		// 分十位
		dis_buf[4] = min % 10;		// 分个位
	}

	EA = 1;
}
/*
void timer0() interrupt 1
// 定时器0中断服务程序, 用于数码管的动态扫描
// dis_index --- 显示索引, 用于标识当前显示的数码管和缓冲区的偏移量
// dis_digit --- 位选通值, 传送到P2口用于选通当前数码管的数值, 如等于0xfe时,
//				选通P2.0口数码管
// dis_buf   --- 显于缓冲区基地址	
{
	TH0 = 0xFC;
	TL0 = 0x17;
	
	P2 = 0xff;							// 先关闭所有数码管
	P0 = dis_buf[dis_index];			// 显示代码传送到P0口
	P2 = dis_digit;						// 

	dis_digit = _crol_(dis_digit,1);	// 位选通值左移, 下次中断时选通下一位数码管
	dis_index++;						// 
					
	dis_index &= 0x07;			// 8个数码管全部扫描完一遍之后，再回到第一个开始下一次扫描
} 
*/
void timer1() interrupt 3
{
	TH1 = 0xdc;
	
	sec100++;
	
	if(sec100 >= 100)
	{
		sec100 = 0;
		inc_sec();
	}
}

void inc_sec()
{
	sec++;
	if(sec > 59)
	{
		sec = 0;
		inc_min();
	}
	dis_buf[6] = sec / 10;		// 秒十位
	dis_buf[7] = sec % 10;		// 秒个位	
}

void inc_min()
{
	min++;
	if(min > 59)
	{
		min = 0;
		inc_hour();
	}
	dis_buf[3] = min / 10;		// 分十位
	dis_buf[4] = min % 10;		// 分个位
}

void inc_hour()
{
	hour++;
	if(hour > 23)
	{
		hour = 0;
	}
	if(hour > 9)
		dis_buf[0] = hour / 10;		// 时十位
	else
		dis_buf[0] = 0x00;					// 当小时的十位为0时不显示
	dis_buf[1] = hour % 10;		// 时个位

}


void delay(unsigned char ms)	
// 延时子程序
{						
	unsigned char i;
	while(ms--)
	{
		for(i = 0; i < 120; i++);
	}
}

void display1(unsigned char a1,unsigned char a2,unsigned char a3,unsigned char a4,unsigned char a5,unsigned char a6)			//显示程序
{
   dula=0;
   P0=table[a1];		//显示百位
   dula=1;
   dula=0;

   wela=0;
   P0=0x7e;
   wela=1;
   wela=0;
   delay(1);

   dula=0;
   P0=table[a2];		//显示十位
   dula=1;
   dula=0;

   wela=0;
   P0=0x7d;
   wela=1;
   wela=0;
   delay(1);

   P0=table[a3];		//显示个位
   dula=1;
   dula=0;

   P0=0x7b;
   wela=1;
   wela=0;
   delay(1);

   P0=table[a4];		//显示个位
   dula=1;
   dula=0;

   P0=0x77;
   wela=1;
   wela=0;
   delay(1);

   P0=table[a5];		//显示个位
   dula=1;
   dula=0;

   P0=0xef;
   wela=1;
   wela=0;
   delay(1);

   P0=table[a6];		//显示个位
   dula=1;
   dula=0;

   P0=0xdf;
   wela=1;
   wela=0;
   delay(1);
}
