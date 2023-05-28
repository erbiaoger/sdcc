#include <8052.h>

void main() {
	while(1) {
		P2_2 = 1;
		P2_3 = 0;
		P2_4 = 0;
		P0 = 0x7d;
	}


}
