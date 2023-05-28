#include <8052.h>

void delay() {
	unsigned int i = 10000;
	while(i--);
}

void main() {
	unsigned char a = 0xFF;
	while(1) {
		if (P2_0 == 0)
		{
			P1 = a - 1;
			a = P1;
		}
		delay();

	}
}
