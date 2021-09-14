
#include<stdio.h>
main()
{
	//Exercício 14.
	int c, a, s, s1, q = 0, q1 = 0;
	float media, mediaPares;
	while(a < 10)
	{
		printf("Digite um numero:\n");
		scanf("%d", &a);
		if(a % 2 == 0)
		{
			s = s + a;
			q = q + 1;
		}
		else
		{
			s1 = s1 + a;
			q1 = q1 + 1;
		}

	}
	media = s / q;
	mediaPares = s1 / q1;

	printf("A media dos numeros pares e: %f", media);
	printf("\nA media dos numeros impares: %f", mediaPares);
	return 0;
}
