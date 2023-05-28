#include <8052.h>
typedef unsigned char uchar;
typedef unsigned int uint;
#define rs P3_5
#define lcden P3_4
#define dula P2_6
#define wela P2_7
//uchar table1[]="TX-1C MCU";
//uchar table2[]="WWW.TXMCU.COM";
uchar table1[]="Made By ";
uchar table2[]="Erbiaoger";

void delay(uint x)
{
	uint a,b;
	for(a=x;a>0;a--)
		for(b=200;b>0;b--); 
}

void delay1(uint x)
{
	uint a,b;
	for(a=x;a>0;a--)
		for(b=100;b>0;b--); 
}

void write_com(uchar com)
{
	P0=com;
	rs=0;
	lcden=0;
	delay(10);
	lcden=1;
	delay(10);
	lcden=0;
	
}

void write_date(uchar date)
{
	P0=date;
	rs=1;
	lcden=0;
	delay(10);
	lcden=1;
	delay(10);
	lcden=0;
	
}

void init()
{
	dula=0;
	wela=0;
	write_com(0x38);
	delay(20);
	write_com(0x0f);
	delay(20);
	write_com(0x06);
	delay(20);
	write_com(0x01);
	delay(20);	
}

void main()
{
	uchar a;
	init();

	write_com(0x90);
	delay(20);
	for(a=0;a<9;a++)
	{
	write_date(table1[a]);
	delay(20);		
	}

	write_com(0xd2);
	delay(50);
	for(a=0;a<13;a++)
	{
	write_date(table2[a]);
	delay(40);		
	}

	for(a=0;a<16;a++)
	{
		write_com(0x18);
		delay1(200);
	}
	while(1);
}
