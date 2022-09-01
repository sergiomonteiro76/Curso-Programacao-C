/*
desenvolvedor: Sérgio Assunção Monteiro, DSc
*/
#include <stdio.h>
#define M 2
#define N 3
void entrada_dados(int matriz[M][N]);
void somar_matrizes(int matA[M][N],
					int matB[M][N],
					int matR[M][N]);
void imprimir_matriz(int matriz[M][N]);
int main(){
	int matA[M][N],
		matB[M][N],
		matR[M][N];			
	entrada_dados(matA);
	entrada_dados(matB);	
	somar_matrizes(matA, matB, matR);
	imprimir_matriz(matR);
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
void somar_matrizes(int matA[M][N],
				   int matB[M][N],
				   int matR[M][N]){
	int k,j;	
	for(k=0;k<M;k++){
		for(j=0;j<N;j++){
			matR[k][j]=matA[k][j]+matB[k][j];
		}
	}
}
void imprimir_matriz(int matriz[M][N]){
	int k,j;
	printf("\nMatriz:\n");
	for(k=0;k<M;k++){
		for(j=0;j<N;j++){
			printf("matriz[%i][%i]=%i\n",k,j,matriz[k][j]);		
		}
	}
}
