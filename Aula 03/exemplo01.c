#include <stdio.h>
long fat(int);
int entrada_dados();
void imprimir_resultados(int,long);
int main() {
    int n;
	long r;	
	n = entrada_dados();
	r = fat(n);
	imprimir_resultados(n,r);
    return 0;
}

long fat(int n){
	if((n==0)||(n==1))
		return 1;
	return n*fat(n-1);
}

int entrada_dados(){
	int n;
	printf("\nDigite um numero: ");
	scanf("%i",&n);
	return n;
}

void imprimir_resultados(int n, long r){
	printf("\nO fatorial de [%i] eh [%li]\n",n, r);
}



