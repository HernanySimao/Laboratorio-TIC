#include <stdio.h>
#include <locale.h>

int main()
{
	//Exerc�cio 9.
	setlocale(LC_ALL, "portuguese");

	int gramas,
		saida,
		saco_racao,
		qtFornecida_cdGato;

	printf("(KG)Digite o peso do saco da ra��o: ");
	scanf("%d", &saco_racao);

	printf("(G)Digite a quantidade de ra��o fornecida para cada gato: ");
	scanf("%d", &qtFornecida_cdGato);


	gramas = (qtFornecida_cdGato * 10);   //5 dias de gramas para dois gatos.
			 saida = saco_racao - (gramas * 1000)  ;

	if(saida > 1000)
		printf("P�s 5 dias restou: %d de KG;", saida);
	else
		printf("P�s 5 dias restou: %d de G.",saida);
	
	return 0;


}
