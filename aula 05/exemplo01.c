/*
desenvolvedor: Sérgio Assunção Monteiro, DSc
*/
#include <stdio.h>
#define M 2
#define N 3
void entrada_dados(int matriz[M][N]);
int maior_elemento(int matriz[M][N]);
void preencher_automatico(int matriz[M][N]);
int main(){
	int matriz[M][N];		
	float maior;
	entrada_dados(matriz);
	//preencher_automatico(matriz);
	maior = maior_elemento(matriz);
	printf("\nO maior elemento da matriz eh: [%3.2f].\n",maior);
	return 0;
}
void entrada_dados(int matriz[M][N]){
	int k,j;
	for(k=0;k<M;k++){
		for(j=0;j<N;j++){
			printf("\nmatriz[%i][%i] = ",k,j);
			scanf("%i",&matriz[k][j]);
		}
	}
}
int maior_elemento(int matriz[M][N]){
	int k,j;
	int maior = matriz[0][0];
	for(k=0;k<M;k++){
		for(j=0;j<N;j++){
			if(matriz[k][j]>maior){
				maior=matriz[k][j];
			}			
		}
	}
	return maior;
}

void preencher_automatico(int matriz[M][N]){
	matriz[0][0]=5;
	matriz[0][1]=6;
	matriz[0][2]=15;	
	matriz[1][0]=3;
	matriz[1][1]=7;
	matriz[1][2]=9;
}
