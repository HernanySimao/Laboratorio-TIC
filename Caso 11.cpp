#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	//Exercício 11.
	setlocale(LC_ALL, "portuguese");
	int a, b, c, delta, x1, x2;

	printf("Digite o valor de A B e C: ");
	scanf("%d %d %d", &a, &b, &c);

	
	printf("Os valores: \nA:%d \nB:%d \nC:%d\n",a, b, c);

	if(a != 0)
	{
		delta = pow(b, 2) - 4 * a * c;
	}
	else if(delta < 0)
	{
		printf("Raiz Imaginaria\n");
	}
	else if(delta == 0)
	{
		x1 = x2 = (-b) / 2 * a;
		printf("A solução: %d", x1);
	}
	else if(delta > 0)
	{
		x1 = -b + sqrt(delta) / 2 * a;
		x2 = -b - sqrt(delta) / 2 * a;

		printf("A solução: \nX1: %d  \nX2: %d", x1, x2);
	}


	return 0;



}
