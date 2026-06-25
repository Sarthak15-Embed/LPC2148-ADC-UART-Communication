#include<lpc214x.h>
#include"Arm_PLL.h"
#include"Arm_Adc.h"
#include"Arm_Lcd.h"
#include"Arm_Uart.h"
#include"Delay.h"
void Arm_Uart0_Display(unsigned int);
unsigned int Adc_value;
int main()
{
	PLL_SET();
	Arm_Lcd_Init();
	Adc_Init();
	Arm_Uart0_Init();
	Lcd_Cmd(0x80);
	Lcd_Str("Uart_Transmit:");
	while(1)
	{
		Adc_value=Arm_Adc_Read();
		Lcd_Cmd(0xC0);
		Adc_Display(Adc_value);
	  Arm_Uart0_Display(Adc_value);	
		delay(100);
	}
}
void Arm_Uart0_Display(unsigned int val)
	{
		Arm_Uart0_Tx(':');
		Arm_Uart0_Tx((val/1000)+'0');
		Arm_Uart0_Tx(((val/100)%10)+'0');
		Arm_Uart0_Tx((val/10)%10+'0');
		Arm_Uart0_Tx((val%10)+'0');	
	}