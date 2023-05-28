//S2������Сʱ��S3����������
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
	TMOD = 0x11;		// ��ʱ��0, 1����ģʽ1, 16λ��ʱ��ʽ
	TH1 = 0xdc;
	TL1 = 0;

	TH0 = 0xFC;
	TL0 = 0x17;
	
	hour = 12;
	min = 00;
	sec = 00;

	sec100 = 0;
	
	dis_buf[0] = hour / 10;		// ʱʮλ
	dis_buf[1] = hour % 10;		// ʱ��λ
	dis_buf[3] = min / 10;		// ��ʮλ
	dis_buf[4] = min % 10;		// �ָ�λ
	dis_buf[6] = sec / 10;		// ��ʮλ
	dis_buf[7] = sec % 10;		// ���λ
//	dis_buf[2] = 0xbf;						// ��ʾ"-"
//	dis_buf[5] = 0xbf;						// ��ʾ"-"
			
	dis_digit = 0xfe;
	dis_index = 0;
	
	TCON = 0x01;
	IE = 0x8a;				// ʹ��timer0,1 �ж�
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
		dis_buf[3] = min / 10;		// ��ʮλ
		dis_buf[4] = min % 10;		// �ָ�λ
	}

	EA = 1;
}
/*
void timer0() interrupt 1
// ��ʱ��0�жϷ������, ��������ܵĶ�̬ɨ��
// dis_index --- ��ʾ����, ���ڱ�ʶ��ǰ��ʾ������ܺͻ�������ƫ����
// dis_digit --- λѡֵͨ, ���͵�P2������ѡͨ��ǰ����ܵ���ֵ, �����0xfeʱ,
//				ѡͨP2.0�������
// dis_buf   --- ���ڻ���������ַ	
{
	TH0 = 0xFC;
	TL0 = 0x17;
	
	P2 = 0xff;							// �ȹر����������
	P0 = dis_buf[dis_index];			// ��ʾ���봫�͵�P0��
	P2 = dis_digit;						// 

	dis_digit = _crol_(dis_digit,1);	// λѡֵͨ����, �´��ж�ʱѡͨ��һλ�����
	dis_index++;						// 
					
	dis_index &= 0x07;			// 8�������ȫ��ɨ����һ��֮���ٻص���һ����ʼ��һ��ɨ��
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
	dis_buf[6] = sec / 10;		// ��ʮλ
	dis_buf[7] = sec % 10;		// ���λ	
}

void inc_min()
{
	min++;
	if(min > 59)
	{
		min = 0;
		inc_hour();
	}
	dis_buf[3] = min / 10;		// ��ʮλ
	dis_buf[4] = min % 10;		// �ָ�λ
}

void inc_hour()
{
	hour++;
	if(hour > 23)
	{
		hour = 0;
	}
	if(hour > 9)
		dis_buf[0] = hour / 10;		// ʱʮλ
	else
		dis_buf[0] = 0x00;					// ��Сʱ��ʮλΪ0ʱ����ʾ
	dis_buf[1] = hour % 10;		// ʱ��λ

}


void delay(unsigned char ms)	
// ��ʱ�ӳ���
{						
	unsigned char i;
	while(ms--)
	{
		for(i = 0; i < 120; i++);
	}
}

void display1(unsigned char a1,unsigned char a2,unsigned char a3,unsigned char a4,unsigned char a5,unsigned char a6)			//��ʾ����
{
   dula=0;
   P0=table[a1];		//��ʾ��λ
   dula=1;
   dula=0;

   wela=0;
   P0=0x7e;
   wela=1;
   wela=0;
   delay(1);

   dula=0;
   P0=table[a2];		//��ʾʮλ
   dula=1;
   dula=0;

   wela=0;
   P0=0x7d;
   wela=1;
   wela=0;
   delay(1);

   P0=table[a3];		//��ʾ��λ
   dula=1;
   dula=0;

   P0=0x7b;
   wela=1;
   wela=0;
   delay(1);

   P0=table[a4];		//��ʾ��λ
   dula=1;
   dula=0;

   P0=0x77;
   wela=1;
   wela=0;
   delay(1);

   P0=table[a5];		//��ʾ��λ
   dula=1;
   dula=0;

   P0=0xef;
   wela=1;
   wela=0;
   delay(1);

   P0=table[a6];		//��ʾ��λ
   dula=1;
   dula=0;

   P0=0xdf;
   wela=1;
   wela=0;
   delay(1);
}
