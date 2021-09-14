#include <stdio.h>
#include <locale.h>

int main()
{
	//Exercício 9.
	setlocale(LC_ALL, "portuguese");

	int gramas,
		saida,
		saco_racao,
		qtFornecida_cdGato;

	printf("(KG)Digite o peso do saco da ração: ");
	scanf("%d", &saco_racao);

	printf("(G)Digite a quantidade de ração fornecida para cada gato: ");
	scanf("%d", &qtFornecida_cdGato);


	gramas = (qtFornecida_cdGato * 10);   //5 dias de gramas para dois gatos.
			 saida = saco_racao - (gramas * 1000)  ;

	if(saida > 1000)
		printf("Pós 5 dias restou: %d de KG;", saida);
	else
		printf("Pós 5 dias restou: %d de G.",saida);
	
	return 0;


}
