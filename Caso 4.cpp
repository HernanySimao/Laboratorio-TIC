#include <stdio.h>
#include <locale.h>

int main(){
	//Exerc�cio 4.
	setlocale(LC_ALL,"Portuguese");
	float novo_salario =0,salario=0;
	
	printf("Digite o seu sal�rio: ");
	scanf("%f",&salario);
	
	novo_salario = (salario * 0,25) + salario;
	
	printf("O seu novo salar�o � de %.2f" ,novo_salario);
	
	return 0;
	
		
	}