#include <stdio.h>
#define N 5
void entrada_dados(int x[]);
int somar_numeros(int x[]);
int main(){
	int vetor[N];		
	float soma;
	entrada_dados(vetor);
	soma = somar_numeros(vetor);
	printf("\nO resultado da soma dos elementos do vetor eh: [%3.2f].\n",soma);
	return 0;
}
void entrada_dados(int x[]){
	int i;
	for(i=0;i<N;i++){
		printf("\nvetor[%i] = ",i);
		scanf("%i",&x[i]);
	}
}
int somar_numeros(int x[]){
	int i, soma=0;
	for(i=0;i<N;i++){
		soma+=x[i];
	}
	return soma;
}


