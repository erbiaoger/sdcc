#include <8052.h>
void DelayXms(unsigned int xms)
{
	unsigned char i;
	unsigned char j;
	while(xms--)
	{
		i=2,j=239;
		do
		{
			while(--j);
		}while(--i);
	}
}

void main()
{
	unsigned char LedNum=0;
	P2_0=0;
	while(1)
	{
		if(P3_3==0)
		{
			//检测按键按下松开
			DelayXms(20);
			while(P3_3==0);
			DelayXms(20);
			//令0000 0001分别左移1,2,3……7次为一个循环
			LedNum++;
			if(LedNum==8)
			{LedNum=0;}
			P2=~(0x01<<LedNum);
		}
	}
}

