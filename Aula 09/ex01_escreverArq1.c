/***
Desenvolvedor: Sérgio Assunção Monteiro, D.Sc.
***/
/*---------------------------------------------------------------------------------------*/  
#include <stdio.h>
#include <stdlib.h>
/*---------------------------------------------------------------------------------------*/  
#define N 20
#define url "dados/nomes.txt"
/*---------------------------------------------------------------------------------------*/  
void lerDados();
void escreverDados();
/*---------------------------------------------------------------------------------------*/  
int main()
{
  escreverDados();
  lerDados();  
  return 0;
}
/*---------------------------------------------------------------------------------------*/  
void lerDados()
{
  FILE *arq;
  char linha[N];
  arq = fopen(url, "r");
  printf("\nOperacao de Leitura\n");
  fgets(linha, N, arq);
  printf("\tnome1: %s", linha);
  fgets(linha, N, arq);
  printf("\tnome2: %s\n", linha);	
}
/*---------------------------------------------------------------------------------------*/  
void escreverDados()
{
  FILE *arq;
  char nome1[N], nome2[N];
  arq = fopen(url, "w");
  printf("\nOperacao de Escrita\n");  
  printf("entre nome1: "); 
  scanf("%s", nome1);
  printf("entre nome2: "); 
  scanf("%s", nome2);
  fputs(nome1, arq);
  fputs("\n", arq);
  fputs(nome2, arq);
  fclose(arq);
}
/*---------------------------------------------------------------------------------------*/  

