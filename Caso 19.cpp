#include <stdio.h>

int main()
{
	//Exercício 19.
	int  fib, n1 = 0, n2 = 1, i = 3;

	printf("0,1");


	while(i < 21)
	{
		fib = n1 + n2;
		n1 = n2;
		n2 = fib;
		i++;
		printf(",%d", fib);
	}
	return 0;
}
