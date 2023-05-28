//flow light and beep 
#include <reg51.h>
#include <intrins.h>
unsigned char a,b,k,j;
sbit beep=P2^3;
void delay10ms()
  {
    for(a=100;a>0;a--)
      for(b=225;b>0;b--);
   }
void main()
{
  k=0xfe;
  while(1)
  {
      delay10ms();
      
      beep=0;
      delay10ms();
      beep=1;
      j=_crol_(k,1);
      k=j;
      P1=j;
   }
}
