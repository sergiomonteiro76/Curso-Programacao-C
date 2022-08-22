#include <stdio.h>
long fib(int);
int entrada_dados();
void imprimir_resultados(int,long);
int main() {
    int n;
	long r;	
	n = entrada_dados();
	r = fib(n);
	imprimir_resultados(n,r);
    return 0;
}

long fib(int n){
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	return fib(n-1)+fib(n-2);
}

int entrada_dados(){
	int n;
	printf("\nDigite um numero: ");
	scanf("%i",&n);
	return n;
}

void imprimir_resultados(int n, long r){
	printf("\nO Fibonacci de [%i] eh [%i]\n",n, r);
}



