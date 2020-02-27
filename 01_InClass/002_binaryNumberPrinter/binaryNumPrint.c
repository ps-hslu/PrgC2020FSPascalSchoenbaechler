#include <stdio.h>

/* binary number printer */

int main(void)
{
	//programmer input
	int decimalNumber = 32;

	printf("Initial Decimal: %d\n" , decimalNumber);
	printf("Binary Form: 0b");


	//some variables needed for calulation
	int divisionResult = decimalNumber;
	int remainder = 0;

	while(divisionResult > 0)
	{
		remainder = divisionResult%2;
		printf("%d", remainder);
		divisionResult = divisionResult/2;
		
	}

	printf("\n");
	return 0;
}
