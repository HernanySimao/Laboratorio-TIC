#include <stdio.h>
#include <locale.h>

int main(){
	//Exercício 4.
	setlocale(LC_ALL,"Portuguese");
	float novo_salario =0,salario=0;
	
	printf("Digite o seu salário: ");
	scanf("%f",&salario);
	
	novo_salario = (salario * 0,25) + salario;
	
	printf("O seu novo salarío é de %.2f" ,novo_salario);
	
	return 0;
	
		
	}