
#define F_CPU 16000000UL
#include "Std_Types.h"
#include "Utilites.h"
#include "Dio_Int.h"
#include "SPI_Int.h"
#include "Dio_Reg.h"
#include "USART_RS232_H_file.h"		/* include USART library */

int main(void)
{
	u8 data;
	 USART_Init(9600);						/* initialize USART with 9600 baud rate */                        
	SPI_initMaster();                  //Initialize SPI Master
	while(1)
	{
		data = USART_RxChar();	
		 SPI_recieveByte();     //Send data, 
		
		}
		
	
}
