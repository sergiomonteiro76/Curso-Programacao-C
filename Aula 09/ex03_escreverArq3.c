/***
Desenvolvedor: Sérgio Assunção Monteiro, D.Sc.
***/

/*---------------------------------------------------------------------------------------*/  
#include <stdio.h>
#include <stdlib.h>
/*---------------------------------------------------------------------------------------*/  
#define url "dados/numeros.txt"
#define TAM 20
#define N 2
/*---------------------------------------------------------------------------------------*/  
void escreverDados();
/*---------------------------------------------------------------------------------------*/  
int main(){
  escreverDados();
  return 0;
}
/*---------------------------------------------------------------------------------------*/  

void escreverDados()
{
  FILE *arq;
  int x, y;
  int i;
  arq = fopen(url, "w");
  printf("entre com os valores X e Y \n");
  for (i = 0; i < N; i++) 
  {
    printf("X [%d]\n",i);
	scanf("%i", &x);
    printf("Y [%d]\n",i);
	scanf("%i", &y);
    fprintf (arq, "%i", x);
    fprintf (arq, "%s", ", ");
    fprintf (arq, "%i", y);
    fputs("\n", arq);
  }/*for*/
  fclose(arq);
}
/*---------------------------------------------------------------------------------------*/  
