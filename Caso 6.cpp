#include <stdio.h>
#include <locale.h>

int main(){
	//Exercício 6.
	setlocale(LC_ALL,"Portuguese");
    
    int preco_espetaculo_teatral=0, preco_convite=0;
	int quantidade=0;
	
	printf("Digite o preço do espetaculo teatral: "); 
	scanf("%d",&preco_espetaculo_teatral);
	printf("Digite o preço do convite: "); 
	scanf("%d",&preco_convite);
	
	for(int i=preco_convite; i<=preco_espetaculo_teatral; i++){
		quantidade++;
		
	}
	
	printf("Devem ser vendidos pelo menos %d convites para alcançar o preço do espetaculo. ",quantidade);

	
	return 0;
	
		
	}