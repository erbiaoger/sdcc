#include <8052.h>

#define DataPort P0 //�������ݶ˿� ����������DataPort ����P0 �滻
#define LATCH1 P2_2;//��������ʹ�ܶ˿� ������
#define LATCH2 P2_3;//                 λ����

unsigned char code dofly_DuanMa[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
// ��ʾ����ֵ01234567
unsigned char code dofly_WeiMa[]={0xfe,0xfd,0xfb,0xf7,0xef,0xdf,0xbf,0x7f};
//�ֱ��Ӧ��Ӧ������ܵ���,��λ��

void Delay(unsigned int t); //��������

/*------------------------------------------------
                    ������
------------------------------------------------*/
main()
{
 unsigned char i=0;
 while(1)
      {
	   DataPort=dofly_WeiMa[i]; //ȡλ�� 
       LATCH2=1;     //λ����
       LATCH2=0;

       DataPort=dofly_DuanMa[i]; //ȡ��ʾ���ݣ�����
       LATCH1=1;     //������
       LATCH1=0;

	   Delay(200); //ɨ���϶��ʱ��ʱ��̫������˸��̫�̻������Ӱ
	   i++;
	   if(8==i)    //���8λɨ����ȫ��������ɨ�������ӵ�һ����ʼ�ٴ�ɨ��8λ
	     i=0;
      }
}
/*------------------------------------------------
 ��ʱ����������������� unsigned int t���޷���ֵ
 unsigned int �Ƕ����޷������α�������ֵ�ķ�Χ��
 0~65535
------------------------------------------------*/
void Delay(unsigned int t)
{
 while(--t);
}
