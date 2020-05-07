#include <stdio.h>
#include <stdlib.h>

#define LOOP_ARRAY_LENGTH 6

void printIntArray( int inputArray[], int arrayLength);



int main(int argc, char *argv[])
{
	//
	int loopArray[LOOP_ARRAY_LENGTH] = {0};

	printf("CHECK IF ALL ARRAY ELEMENTS ARE ZERO: \n");

	//print all array element to console
	printIntArray(loopArray, LOOP_ARRAY_LENGTH);
	printf("\n");

	// save array indey as array value
	for( int j=0; j< LOOP_ARRAY_LENGTH; j++)
	{
		loopArray[j] = j;
	}


	// print all array elements to console
	printf("Modified array: \n");
	printIntArray(loopArray, LOOP_ARRAY_LENGTH);
	printf("\n");

	return EXIT_SUCCESS;
}


// function implementation
void printIntArray( int inputArray[], int arrayLength)
{
	for(int i=0; i< arrayLength; i++)
	{
		printf("%d\n", inputArray[i]);
	}
}
