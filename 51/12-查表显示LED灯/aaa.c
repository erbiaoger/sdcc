#include <8052.h>
#define KEY P3_2
#define LED P1_2

/*****************************

  函数功能：延时一段时间

 *****************************/

void delay(void)

{

  unsigned int n;

  for(n=0;n<10000;n++);

}

/*****************************

  函数功能：主函数

 *****************************/

void main(void)

{
  while(1){
    //KEY = 0;
    if (!KEY)
      LED = 0;
    else
      LED = 1;
  }


}
