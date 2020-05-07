#include <msp430.h> 


unsigned long bootCounter;
unsigned long *pBootCounter = (unsigned long*)0x1800;

const unsigned int blinkDelayCounts = 30000;
void BlinkDelay(unsigned int delayCycles);

/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	


	return 0;
}
