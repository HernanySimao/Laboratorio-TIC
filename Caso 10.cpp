#include <stdio.h>
#include <locale.h>

int main()
{
	//Exercício 10.
	setlocale(LC_ALL, "portuguese");

	float salario_minimo=0,
		qtd_quilowatts=0, a=0, b=0, c=0;

	printf("Digite o salário minimo: ");
	scanf("%f",&salario_minimo);

	printf("Digite a quantidade de Quilowatts: ");

	scanf("%f",&qtd_quilowatts);

	a = salario_minimo / 5;
	b = a * qtd_quilowatts;
	c = b - (b * 0.15);

	printf("a) O valor de cada quilowatt: %.2f\n", a);
	printf("b) O valor a ser pago por essa residência: %.2f\n", b);
	printf("c) o valor a ser pago com desconto de 15%%: %.2f", c);






}
