#include <8052.h>
#include <math.h>

void delay() {
	unsigned int i = 10000;
	while(i--);
}

void main() {
	unsigned int a = 0xfe;
	unsigned char i = 0;
	while(1) {
		if (P2_0 == 0)
		{
			if (i != 7) {
				P1 = (a>>1) | ~a;
				a = a>>1;
				i++;
			}
			else
			{
				i = 0;
				a = 0xfe;
			}


		}
		delay();

	}
}
