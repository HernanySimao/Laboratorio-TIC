#include <stdio.h>
#include <locale.h>

int main()
{
	//Exercício 18.
	setlocale(LC_ALL, "portuguese");
	char user_name[30][30];
	int numeroDeDiaria[5];
	float totalDoCliente[5],
		  totalGanhoPeloHotel = 0.0;

	for(int i = 0; i < 30; i++)
	{
		printf("Informe o Nome do cliente do quarto %d: ", (i + 1));
		gets(user_name[i]);
	}

	printf("\n");

	for(int i = 0; i < 30; i++)
	{
		printf("Informe o numero de diarias do cliente do quarto %d: ", (i + 1));
		scanf("%d", &numeroDeDiaria[i]);

		if(numeroDeDiaria[i] < 15)
			totalDoCliente[i] = (numeroDeDiaria[i] * 50.00) + 4.00;

		else if(numeroDeDiaria[i] == 15)
			totalDoCliente[i] = (numeroDeDiaria[i] * 50.00) + 3.60;

		else if(numeroDeDiaria[i] > 15)
			totalDoCliente[i] = (numeroDeDiaria[i] * 50.00) + 3.00;

		totalGanhoPeloHotel += totalDoCliente[i];
	}

	for(int i = 0; i < 30; i++)
	{
		printf("\nQuarto %d:", (i + 1));
		printf("\nNome do cliente: %s", user_name[i]);
		printf("\nTotal da conta: USD %.2f\n\n", totalDoCliente[i]);
	}

	printf("Total ganho pelo hotel: USD %.2f\n", totalGanhoPeloHotel);

	return 0;
}
