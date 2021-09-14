#include <stdio.h>
#include <locale.h>

int main(){
	//Exercício 5.
	setlocale(LC_ALL,"Portuguese");
	float salario_funcionario,percentual,valor_do_aumento,novo_salario; 
	
	printf("Digite o seu salário: ");
	scanf("%f",&salario_funcionario);
	
	printf("Digite o percentual de aumento: ");
	scanf("%f",&percentual);
	
	
	valor_do_aumento = (percentual/100);
	novo_salario = (salario_funcionario * valor_do_aumento) + salario_funcionario;
	
	printf("O valor de aumento: %.2f\n", valor_do_aumento);
	printf("Novo Salário: %.2f", novo_salario);
	
	return 0;
	
		
	}