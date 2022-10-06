/***
Desenvolvedor: Sérgio Assunção Monteiro, D.Sc.
***/

/*---------------------------------------------------------------------------------------*/  
#include <stdio.h>
#include <stdlib.h>
/*---------------------------------------------------------------------------------------*/  
#define url "dados/alunos.txt"
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
  char nome[TAM], sobrenome[TAM];
  int i;
  arq = fopen(url, "w");
  printf("entre nome e sobrenome de %d alunos : \n",N);
  for (i = 0; i < N; i++) 
  {
    printf("Aluno [%d]\n",i+1);
	printf("Entre nome: ");
    scanf("%s", nome);
    printf("Entre sobrenome: ");
    scanf("%s", sobrenome);
    fputs(nome, arq);
    fputs(" ", arq);
    fputs(sobrenome, arq);
    fputs("\n", arq);
  }/*for*/
  fclose(arq);
}
/*---------------------------------------------------------------------------------------*/  
