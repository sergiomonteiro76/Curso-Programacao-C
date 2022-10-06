/***
Desenvolvedor: Sérgio Assunção Monteiro, D.Sc.
***/
#include<stdio.h> 
 
void entrada_dados(float x[], int tam){
	int i;
	for(i=0;i<tam;i++){
		printf("\nvetor[%i] = ",i);
		scanf("%f",&x[i]);
	}
}
float somar_numeros(float x[], int tam){
	int i;
	float soma=0;
	for(i=0;i<tam;i++){
		soma+=x[i];
	}
	return soma;
}
