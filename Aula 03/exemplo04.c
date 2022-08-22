#include <stdio.h>
int entrada_dados();
void contar_numeros_pares(int);
int ehPar(int);

int main(){
	int n;	
	n = entrada_dados();
	contar_numeros_pares(n);	
	return 0;
}

int entrada_dados(){
	int qtd;	
	printf("Digite um numero:\n");
	scanf("%d",&qtd);	
	return qtd;
}

void contar_numeros_pares(int n){
    if (n == -1){
    	printf("\ncontagem concluida.\n");
    	return;
	} 	
	if(ehPar(n)){
		printf("[%i] ",n);	
	}	
	contar_numeros_pares(n-1);
}

int ehPar(int n){		
	return (n%2==0)?1:0;
}
