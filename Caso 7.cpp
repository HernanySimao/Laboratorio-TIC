#include <stdio.h>
#include <locale.h>

int main()
{
	//Exercício 7.
	setlocale(LC_ALL, "portuguese");
	float carro_novo,
		  preco_fabrica,
		  percentual_lucro,
		  imposto_preco_fabrica;


	printf("Digite o preço de fabrica: ");
	scanf("%f", &preco_fabrica);

	printf("Digite o percentual de lucro: ");
	scanf("%f", &percentual_lucro);

	printf("Digite o percentuald de imposto: ");
	scanf("%f", &imposto_preco_fabrica);

	printf("\n \n");

	printf("a)O valor correspondente ao lucro do distribuidor: %.2f\n", (percentual_lucro / 100));
	printf("b)O valor correspondente aos impostos: %.2f\n", (imposto_preco_fabrica / 100));
	carro_novo = (preco_fabrica + (percentual_lucro / 100) + (imposto_preco_fabrica / 100));
	printf("c)O preço final do veículo: %.2f", carro_novo);


	printf("\n \n");




}
