#include <stdio.h>
int entrada_dados();
void saida_dados(int);
int somar_numeros_pares(int);
int ehPar(int);

int main(){
	int n, soma;	
	n = entrada_dados();
	soma = somar_numeros_pares(n);	
	saida_dados(soma);
	return 0;
}

int entrada_dados(){
	int qtd;	
	printf("Digite um numero:\n");
	scanf("%d",&qtd);	
	return qtd;
}

void saida_dados(int soma){	
	printf("O resultado da soma dos numeros pares eh: [%i]\n",soma);
}

int somar_numeros_pares(int n){	
	int r=0;
    if (n == 0){    	
    	return 0;
	} 		
	if(ehPar(n)){
		r+=n;	
	}	
	return r+somar_numeros_pares(n-1);
}

int ehPar(int n){		
	return (n%2==0)?1:0;
}
