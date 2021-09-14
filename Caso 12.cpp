#include <stdio.h>
#include <locale.h>

int main()
{
	//Exercício 12.
	setlocale(LC_ALL,"portuguese");
	int num = 0,
		help1 = 0,
		help2 = 0,
		help3 = 0,
		help4 = 0,
		help5 = 0,
		help6 = 0,
		help7 = 0,
		help8 = 0,
		help9 = 0,
		help10 = 0,
		verificar = 0;

	printf("Insira 5 números: ");
	scanf("%d", &num);

	help1 = ((num / 10000) % 10);
	help2 = ((num / 1000) % 10);
	help3 = ((num / 100) % 10);
	help4 = ((num / 10) % 10);
	help5 = ((num / 1) % 10);

	help6 = (num / 10000) % 10;
	help7 = (num / 1000) % 10;
	help8 = (num / 100) % 10;
	help9 = (num / 10) % 10;
	help10 = (num / 1) % 10;

	if(help1 == help10)
		verificar++;

	if(help2 == help9)
		verificar++;

	if(help3 == help8)
		verificar++;

	if(help4 == help7)
		verificar++;

	if(help5 == help6)
		verificar++;

	if( verificar == 5)
		printf("O Número é palíndromo ");

	else
		printf("O Número não é palíndromo");


return 0;
}
