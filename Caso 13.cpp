#include <stdio.h>
#include <locale.h>

main(){
	//Exerc�cio 13.
	setlocale(LC_ALL,"portuguese");
	int num, quant=0;
	
	
	do{
		printf("Digite um n�mero: ");
		scanf("%d",&num);
		
		if(num %2!=0 && num*3)
			quant++;		
	}while(num != 500);
	
	printf("Quantidade: %d ",quant);
	

	
	
}