#include <stdio.h>
#include <locale.h>

main()
{
	//Exerc�cio 15.
	setlocale(LC_ALL, "portuguese");
	int num, quant = 0;


	do
	{
		printf("Digite um n�mero: ");
		scanf("%d", &num);

        printf("R:%d\n",(num+1));

	}
	while(num > 0);




}
