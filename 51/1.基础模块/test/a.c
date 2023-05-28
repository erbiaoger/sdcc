#include <8052.h>
#define duanxuan P2_5
#define weixuan P2_6

void main()
{
  duanxuan = 0;
  weixuan = 0;
  P0 = 0x00;
  duanxuan = 1;
  //duanxuan = 0;

  duanxuan = 0;
  weixuan = 0;
  P0 = 0x01;
  weixuan = 1;
  //weixuan = 0;
  
}

