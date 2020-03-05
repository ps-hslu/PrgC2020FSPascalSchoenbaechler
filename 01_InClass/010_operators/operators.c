#include <stdio.h>

int main(void)
{
	short largeShort=32760;
	largeShort = largeShort + 12345;
	printf("largeShort sollte 45105 sein ist aber=> %d\n\n",largeShort);

	int nummerator = 19 , denominator = 5 , result = 0;
	result = nummerator/denominator;
	printf("%d/%d=%d\n\n",nummerator, denominator, result);

	float e = 2.718281828f;
	//printf("e=2.718281828f");
	e++;
	printf("e+1 => %f\n",e);
	e--;
	printf("e+1-1 => %f\n\n",e);

	//double dbNumerator = 12.8; //double kann nicht mit modulo 'berechnet' werden
	//dbNumerator%3;
	//printf("12.8%3 => %f\n", dbNumerator);

	return 0;
}
