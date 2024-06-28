#include<LPC214X.h>
void delay(){
	unsigned int i=0;
	while (i<20000)
	{
		i++;
	}
}
int main()
{
	unsigned int j;
	while (1)
	{
	for(j=16;j<=23;j++)
	{
		IODIR0|=(0x01<<j);
		IOSET0|=(0x01<<j);
		delay();
		IOCLR0|=(0x01<<j);
		delay();
		
	}
	}
}



