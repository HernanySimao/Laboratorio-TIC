#include <stdio.h>
#include <locale.h>

int main(){
	//Exerc�cio 2.
	setlocale(LC_ALL,"Portuguese");
	float salario_minimo=0, salario_funcinario=0;
	int quantidade=0;
	
	
	printf("Digite o s�lario minimo: ");
	scanf("%f",&salario_minimo);
	
	printf("Digite o sal�rio de um funcion�rio: ");
	scanf("%f",&salario_funcinario);
	
	quantidade = (salario_funcinario / salario_minimo);
	
	printf("O seu sal�rio � %dx o salario minimo.",quantidade);
	
	return 0;
}