#include <stdio.h>
int quantidade_numeros();
int somar_numeros(int qtd);

int main(){
	int qtd;	
	float soma=0;
	qtd = quantidade_numeros();
	soma = somar_numeros(qtd);
	printf("O resultado da soma dos numeros de [1] a [%d] eh: [%3.2f].\n",qtd,soma);
	return 0;
}

int quantidade_numeros(){
	int qtd;	
	printf("Digite a quantidade de numeros que vai processar:\n");
	scanf("%d",&qtd);	
	return qtd;
}

int somar_numeros(int qtd){
	int i, soma=0;
	i=1;
	do{
		soma+=i;
		i++;
	}while(i<=qtd);
	return soma;
}



