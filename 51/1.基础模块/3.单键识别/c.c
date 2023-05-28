#include <8052.h>
#define KEY P3_4 
#define LED P1_1

void delay(){
  for (unsigned int i = 0; i < 500; i++);
}


void main(){
  while(1){
    if (KEY == 0){
      LED = 0;
    }
    delay();
    LED = 1;
  }

}
