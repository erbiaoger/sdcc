#include<reg52.h>
#define uchar unsigned char
uchar a,flag;
void main()
{
	TMOD=0x20;
	TH1=0xfd;
	TL1=0xfd;
	TR1=1;
	SM0=0;
	SM1=1;
	REN=1;
	EA=1;
	ES=1;
	PCON=0x80;
	while(1)
	{
		if(flag==1)
		{
			ES=0;
			flag=0;
			SBUF=a;
			while(!TI);
			TI=0;
			ES=1;
		}
	}
}

void serial() interrupt 4
{
	P1=SBUF;
	a=SBUF;
	flag=1;
	RI=0;
}
