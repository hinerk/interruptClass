#define F_CPU 8000000
#include <avr/io.h>
#include "uart.h"

int main(){
	uart uart(1);
	uart.setBaud(9600);
	uart.init();
	while(42){
		uart.sendByte(42);
	}
}