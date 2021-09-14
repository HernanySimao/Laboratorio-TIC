#include <stdio.h>
#include <locale.h>

int main(){
	//Exercício 2.
	setlocale(LC_ALL,"Portuguese");
	float salario_minimo=0, salario_funcinario=0;
	int quantidade=0;
	
	
	printf("Digite o sálario minimo: ");
	scanf("%f",&salario_minimo);
	
	printf("Digite o salário de um funcionário: ");
	scanf("%f",&salario_funcinario);
	
	quantidade = (salario_funcinario / salario_minimo);
	
	printf("O seu salário é %dx o salario minimo.",quantidade);
	
	return 0;
}