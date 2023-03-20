#include <8052.h>
unsigned char code table[]={0x7f,0xbf,0xdf,0xef,
                            0xf7,0xfb,0xfd,0xfe,
							0xff,0xff,0x00,0x00,
							0x55,0x55,0xaa,0xaa
							};

void Delay(unsigned int t);

void main (void)
{
                  
unsigned char i;

while (1)
  {
 for(i=0;i<16;i++)
    {
     P1=table[i];
     Delay(30000);
    }
  }
}

void Delay(unsigned int t)
{
 while(--t);
}
