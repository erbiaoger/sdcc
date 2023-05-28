#include <8052.h>
#define DataPort P0 
#define LATCH1 P2_2
#define LATCH2 P2_3

main()
{

 while(1)
      {
	DataPort=0xfe;
       LATCH1=1;     
       LATCH2=0;

       DataPort=0x4F; 
       LATCH2=1;    
       LATCH1=0;
      }
}
