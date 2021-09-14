#include <stdio.h>
#include <locale.h>

int main()
{
	//Exercício 8.
	setlocale(LC_ALL, "portuguese");
	float hrs_trabalhadas,
		  salario_minimo,
		  valor_hrs_trab,
		  salario_bruto,
		  imposto;

	printf("Digite as horas trabalhadas: ");
	scanf("%f", &hrs_trabalhadas);

	printf("Digite o salário mininmo: ");
	scanf("%f", &salario_minimo);

	printf("\n");

	valor_hrs_trab = (salario_minimo / hrs_trabalhadas);
	salario_bruto = hrs_trabalhadas * valor_hrs_trab;
	imposto = (salario_bruto * 13) / 100;

	printf("a) O salario minimo: %.2f\n", valor_hrs_trab);
	printf("b) O salario bruto: %.2f\n", salario_bruto );
	printf("c) O Imposto: %.2f\n", imposto);
	printf("d) O salário a receber: %.2f", (salario_bruto - imposto));

	printf("\n");

}
