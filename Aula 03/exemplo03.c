#include <stdio.h>
int entrada_dados();
int somar_numeros();

int main(){
	int qtd;	
	float soma;
	qtd = entrada_dados();
	soma = somar_numeros(qtd);
	printf("O resultado da soma dos numeros de [1] a [%d] eh: [%3.2f].\n",qtd,soma);
	return 0;
}

int entrada_dados(){
	int qtd;	
	printf("Digite a quantidade de numeros:\n");
	scanf("%d",&qtd);	
	return qtd;
}

int somar_numeros(int n){
	if(n==0)
	   return 0;
	return n+somar_numeros(n-1);
}


