#include <stdio.h>
#include <locale.h>

int main()
{
	//Exerc�cio 3.
	setlocale(LC_ALL, "Portuguese");
	int ano_actual, ano_nascimento, idade, idade_nova;

	printf("Digite o ano actual e o seu ano de nascimento: ");
	scanf("%d %d", &ano_actual, &ano_nascimento);

	idade = ano_actual - ano_nascimento;
	idade_nova = 2050 - ano_nascimento;

	printf("a)A sua idade � %d \nb) A sua idade em 2050 �%d .", idade, idade_nova);

	return 0;
}
