# include <stdio.h>
# include <stdlib.h>

void PrintUsageMessage(void);
void PrintPascalTriangle(int triangleLimite);

const int lowerLimit = 1;
const int upperLimit = 20;

int main( int argc, char* argv[]){
		int inputValue = 0;
	
		if( argc !=2)
		{
			PrintUsageMessage();
			return 0;
		}
		else
		{
			inputValue = atoi(argv[1]);

			if( inputValue >= lowerLimit && inputValue <= upperLimit)
			{
				PrintPascalTriangle( inputValue );
			}
			else
			{
				PrintUsageMessage();
				return 0;
			}

		}




	return 0;
}


void PrintUsageMessage(void){
	printf("Usage: pascalTriangle wholeNumber\n\t	\
			woholeNumber: integer on the intercal [1,20]\n");
}

void PrintPascalTriangle( int triangleLimite){
	int coef = 1;
	int space = 1;
	for(int i=0; i <= triangleLimite-1; i++)
	{
		for(space=1; space <= triangleLimite - i; space++){
			printf("     ");
		}

		for( int j=0; j <= i; j++)
		{
			if(j==0 || i==0)
			{
				coef=1;
			}
			else
			{
				coef=coef*(i-j+1)/j;
			}
			printf("%10d",coef); 
		}
		printf("\n");
		
	}	
}
