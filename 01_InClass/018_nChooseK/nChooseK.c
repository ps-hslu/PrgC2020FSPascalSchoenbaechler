#include <stdio.h>
#include <stdlib.h>



// Funktionen vordef.
long factorial(int n);
long nChooseK(int n, int k);


int main( int argc, char* argv[] )
{
//Var deklarieren
    int n = 0;
	int k = 0;
	int waitOnValidInput = 1;

	while(waitOnValidInput){
	    printf("Enter 2 positive integer: ");
    	scanf("%d",&n);
		scanf("%d",&k);
		if(n>=0 && k>=0 && n>=k){
		    printf("%d choose %d = %ld\n", n , k , nChooseK(n,k));
			break;
		}
		else
		{
			printf("Invalid input. Try again.\n");
		}
	}
	return EXIT_SUCCESS;
}

// implementation of the factorial function
long  factorial(int n) {
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}

// implementation of the n Choose k function
long nChooseK(int n, int k){
	return factorial(n)/(factorial(k)*factorial(n-k));
}

