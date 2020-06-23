#include <avr\io.h>
#include <Atmega328P.h>
#include <avrlib.h>
#include <RegisterAccess.h>
#define F_CPU 16000000
#include <util\delay.h>
#include <inttypes.h>
#include <inttypes.h>

uint16_t timSnf[] = { 1, 2, 4, 16, 32, 64, 128, 256, 512, 768, 816, 960, 1023, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1 };

#define PULS_WIDTH_1MS 64

#define SERVO_MIN 50
#define SERVO_MAX 205


int main(void)
{
	Usart_Init(250000);
	
	while (True)
	{
		TRACE("hello world");
		_delay_ms(1000);
	}
	return 0;
}