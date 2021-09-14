#include <stdio.h>
#include <locale.h>

int main()
{
	//Exercício 3.
	setlocale(LC_ALL, "Portuguese");
	int ano_actual, ano_nascimento, idade, idade_nova;

	printf("Digite o ano actual e o seu ano de nascimento: ");
	scanf("%d %d", &ano_actual, &ano_nascimento);

	idade = ano_actual - ano_nascimento;
	idade_nova = 2050 - ano_nascimento;

	printf("a)A sua idade é %d \nb) A sua idade em 2050 é%d .", idade, idade_nova);

	return 0;
}
