/***
Desenvolvedor: Sérgio Assunção Monteiro, D.Sc.
***/
#include <stdio.h>
#include "utilitario.h"
#define N 5
int main(){
	float vetor[N];		
	float soma;
	entrada_dados(vetor,N);
	soma = somar_numeros(vetor,N);
	printf("\nO resultado da soma dos elementos do vetor eh: [%3.2f].\n",soma);
	return 0;
}

