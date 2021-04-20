#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKL25Z4.h"
#include "fsl_debug_console.h"
#include "GPIO.h"

int main(void)
{
	PinMode('D', 1, 'O');
	PinMode('B', 18, 'O');
	PinMode('B', 19, 'O');


	DigitalWare('B', 18, 1);
	DigitalWare('B', 19, 1);
	DigitalWare('D', 1, 1);

	DigitalWare('B', 18, 0);
	DigitalWare('B', 19, 0);
	DigitalWare('D', 1, 0);

	DigitalWare('D', 1, 0);
	PinMode('C', 13, 'I');
	DigitalWare('D', 1, 1);



    return 0 ;
}

