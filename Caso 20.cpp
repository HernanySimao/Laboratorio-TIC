#include <stdio.h>
#include <locale.h>

int main()
{
	//Exercício 20.
	setlocale(LC_ALL, "portuguese");
	int i;
	float a_Chico = 1.50,
		  a_Juca = 1.10;

	for(i = 1; a_Chico > a_Juca; i++)
		a_Chico += 0.02, a_Juca += 0.03;


	printf("É necessarios %d anos para que O Juca seja maior que Chico\n",i);

	return 0;
}
