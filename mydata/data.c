#include<reg51.h>
void main()
{
SCON=0X50;
TMOD=0X20;
TH1=-3;  //BAUDRATE=9600
TR1=1;
SBUF ='A';
while(TI==0);  //status of TI will become 1 after complition of transmission
TI=0;
}