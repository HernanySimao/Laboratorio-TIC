#include <stdio.h>
#include <locale.h>

int main(){
//Exercício 1.
	setlocale(LC_ALL,"Portuguese");
	int lado,area;
	
	printf("Infome o lado do quadrado: ");
	scanf("%d",&lado);
	
	area = lado * lado;
	
	printf("A área do quadrado é %d",area);
	
	return 0;
	
}