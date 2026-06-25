#include"Arm_Uart.h"
void Arm_Uart0_Init()
{
	PINSEL0 |=0x00000005;//Uart config Pins UART0=P0.0 & P0.1
	U0LCR=0x83;//Line Control Reg., 8-bit, 1 stop, no parity, enable DLAB
	U0DLM=0x01;//higher byte BaudRate
	U0DLL=0x87;//lower byte BaudRate
	U0LCR=0x03;//Disable DLAB
}
void Arm_Uart0_Tx(char Tx_data)
{
	U0THR=Tx_data;//Buffer Reg. of Tx
	while(U0LSR & (1<<5));//Line Status Reg.
	//monitoring bit 5 for Tx
}
char Arm_Uart0_Rx()
{
	//monitoring bit 0 for Rx
	while(!(U0LSR &(1<<0)));//Line Status Reg.
	return U0RBR;//Buffer Reg. of Rx
}
