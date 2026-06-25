#include<lpc214x.h>
#include"Arm_PLL.h"
#include"Arm_Lcd.h"
#include"Arm_Uart.h"
#include"Delay.h"
void Received(int*,int);
unsigned int Adc_value;
int main()
{
	unsigned int Rx_data[4];
	PLL_SET();
	Arm_Lcd_Init();
	Arm_Uart0_Init();
	Lcd_Cmd(0x80);
	Lcd_Str("Uart_Receive:");
	while(1)
	{
     Received(Rx_data,4);
     Lcd_Cmd(0xC0); 
     Lcd_Data(Rx_data[0]);  
     Lcd_Data(Rx_data[1]);// display on LCD
     Lcd_Data(Rx_data[2]);
     Lcd_Data(Rx_data[3]);   
	}
}
void Received(int *ptr,int length)
{
	int i;
	char temp=Arm_Uart0_Rx();
	if(temp==':')
	{
	for(i=0;i<length;i++)
	*(ptr+i)=Arm_Uart0_Rx();
	}
}