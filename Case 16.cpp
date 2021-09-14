#include <stdio.h>
#include <locale.h>

int main()
{
	//Exercício 16.
	setlocale(LC_ALL,"Portuguese");
	int altura[15], altura_maior=0, altura_menor=0;
	
	for(int i=0; i<15; i++){
		printf("Altura [%d]: ",i+1);
		scanf("%d",&altura[i]);
		
		if(i==0){
			altura_maior = altura[i];
		}else if(altura[i] > altura_maior){
			altura_maior = altura[i];
		}
		
			if(i==0){
			altura_menor = altura[i];
		}else if(altura[i] < altura_menor){
			altura_menor = altura[i];
		}
		
	}
	
	printf("A menor altura do grupo: %d\n",altura_menor);
	printf("A maior altura do grupo: %d",altura_maior);
	


}
