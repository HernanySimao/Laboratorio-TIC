#include <stdio.h>
#include <locale.h>

int main(){
//Exerc�cio 1.
	setlocale(LC_ALL,"Portuguese");
	int lado,area;
	
	printf("Infome o lado do quadrado: ");
	scanf("%d",&lado);
	
	area = lado * lado;
	
	printf("A �rea do quadrado � %d",area);
	
	return 0;
	
}