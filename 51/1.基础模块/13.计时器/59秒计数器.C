//59秒自动计数器
#include<reg51.h>
#define uchar unsigned char 
uchar j,k,i,a,A1,A2,second;
sbit dula=P2^6;
sbit wela=P2^7;
uchar code table[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,
                        0x07,0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};
void delay(uchar i)
{
  for(j=i;j>0;j--)
    for(k=125;k>0;k--);
}
void display(uchar sh_c,uchar g_c)
{
   dula=0;
   P0=table[sh_c];
   dula=1;
   dula=0;
   
   wela=0;
   P0=0xfe;
   wela=1;
   wela=0;
   delay(5);
   
   P0=table[g_c];
   dula=1;
   dula=0;
   
   P0=0xfd;
   wela=1;
   wela=0;
   delay(5);
}

void main()
  {
     while(1)
       {
         second++;
         if(second==60)
         second=0;
         A1=second/10;
         A2=second%10;
         for(a=50;a>0;a--)
         { display(A1,A2);};
         }

    }
