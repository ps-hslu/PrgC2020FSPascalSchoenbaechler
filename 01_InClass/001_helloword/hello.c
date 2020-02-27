#include <stdio.h>
/*
 * our first c program! Yeah...
*/


//function prototyype
int TestFunction(void);

//global variable
int TestValueReturn = 0;


//main function
int main(void)
{
	
	TestValueReturn = TestFunction();
	printf("Hello World!\nTestValue: %d\n", TestValueReturn);
}

//implementation of Testfunction
int TestFunction(void)
{
	int retVal = 99;
	return retVal;
}
