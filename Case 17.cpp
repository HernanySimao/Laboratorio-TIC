#include <stdio.h>
#include <locale.h>

int main()
{
	//Exercício 17.
	setlocale(LC_ALL,"portuguese");
	int num, fat;

	printf("Informe um número: ");
	scanf("%d", &num);

	fat = num;

	printf("\n%d! = %d ", num, num);
	for(int i = num - 1; i >= 1; i--)
	{
		fat *= i;
		printf("x %d ", i);
	}

	printf("= %d\n", fat);

	return 0;
}
