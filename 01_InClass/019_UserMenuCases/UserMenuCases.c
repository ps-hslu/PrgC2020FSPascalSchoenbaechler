#include <stdio.h>
#include <stdlib.h>

typedef enum{
	INVALID = 0,
	PRINTCODERNAME = 1,
	CALCONEPLUSONE,
	EXIT,
}MenuSelection;


MenuSelection printUserMenu(void);

int main( int argc, char *argv[] )
{
	int runMenuPrompt =1;
	MenuSelection menuSelection = INVALID; 

	while(runMenuPrompt)
	{
		menuSelection = printUserMenu();

		switch(menuSelection)
		{
			case PRINTCODERNAME:
				printf("Pascal\n");
				break;

			case CALCONEPLUSONE:
				printf("1+1=2\n");
				break;

			case EXIT:
				printf("Goodbye.\n");
				runMenuPrompt = 0;
				break;

			default:
				printf("...Du Vollhorst!!! \n");
				break;
		}//switch(menuSelection)
	}
	return EXIT_SUCCESS;
}

MenuSelection printUserMenu(void){
	int selectedMenuItem = 0;
	printf("\n------------------------------------\n");
	printf("* * * * Welcome to CoolCode! * * * *\n");
	printf("------------------------------------\n");
	printf("Select from the following options:\n");	
	printf("1: Print Coder Name\n");
	printf("2: CCalculate 1+1:\n");
	printf("3: Exit\n");
	printf("-> ");
	scanf("%d\n", &selectedMenuItem );
	

	if(    selectedMenuItem != PRINTCODERNAME
		&& selectedMenuItem != CALCONEPLUSONE
		&& selectedMenuItem != EXIT)
	{
		selectedMenuItem = INVALID;
	}
	return selectedMenuItem;
}
