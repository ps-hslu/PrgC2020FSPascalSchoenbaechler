#include <stdio.h>
#include <stdlib.h>

void printBinary(int input);




int main(int argc, char *argv[])
{

	int a = 12, b = 25;


	printf("++AND++\n");	
	printBinary(a);
	printBinary(b);
	printBinary( a&b );

	printf("++OE++\n");	
	printBinary(a);
	printBinary(b);
	printBinary( a|b );

	printf("++XOR++\n");	
	printBinary(a);
	printBinary(b);
	printBinary( a^b );


	printf("++complement++\n");	
	printBinary(a);
	printBinary(~a);

	printf("++shift left++\n");	
	printBinary(a);
	printBinary( a << 1 );

	printf("++shift right++\n");	
	printBinary(a);
	printBinary( a >> 1 );

	//bit masking: Set bit 5
	unsigned char c    = 0b00001100;
	unsigned char mask = 0b00100000; //set bit 5
	printf("\n++ set bit 5+++\n");
	printBinary(c);
	unsigned char d=c|mask;
	printBinary(d);
	mask = 1;
	printBinary( c | mask << 5); //register veränder: c=c|mask<<5;

	// bit masking: Clear bit 5 --> AND
//	unsigned char mask = 0b11011111; //set bit 5
//	printf("\n++ clear bit 5+++\n");
//	printBinary(d);
//	printBinary( d & mask);
//	printBinary (d &~(1<<5);


	// check if bit 3 is set
	printf("\n++check bit 3++\n");
	printBinary( d );
	mask = 0b00001000;
	printBinary( d & mask);
	printBinary( (d & (1<<3)) >>3); //shift hin und her


	// flip bits 4 and 0
	printf("\n++flip bits 4 and 0++\n");
	printBinary( d );
	mask = 0b00001001;
	printBinary(d ^ mask);
	printBinary(d ^ ((1<<3) | 1));
	//					bit3  bit 1

	return EXIT_SUCCESS;
}



void printBinary( int input )
{
	unsigned int i = 0;

	printf("%u = 0b", input);

	for( i=(1 << 15); i> 0; i=(i>>1))
	{
		if( input & i)
		{
			printf("1");
		}
		else
		{
			printf("0");

		}
	}
	printf("\n");

}
