#include <stdio.h>

int main(void)
{
// 
//	int testValue = 1;
//	int limitValue = 2;

//Eingabe von zwei Variabeln
	int testValue =0;
	printf("Enter testValue:");
	scanf("%d",&testValue);

	int limitValue =0;
	printf("Enter limitValue:");
	scanf("%d",&limitValue);

// Vergleich der Werte
	if(testValue >= limitValue ){
		printf("%d is bigger or equal to %d\n", testValue, limitValue);
	}
	else{
		printf("%d is less than %d\n", testValue, limitValue);
	}
	return 0;
}
