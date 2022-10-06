/***
Desenvolvedor: Sérgio Assunção Monteiro, D.Sc.
***/
/*---------------------------------------------------------------------*/
#include<stdio.h>
#include<string.h>
/*---------------------------------------------------------------------*/
#define url "dados/pessoas.txt"
#define N 50
#define P 3
/*---------------------------------------------------------------------*/
struct pessoa
{
	char nome[N];
	int idade;
};
typedef struct pessoa Pessoa;
/*---------------------------------------------------------------------*/
void lerDados();
void escreverDados();
/*---------------------------------------------------------------------*/
int main()
{
  escreverDados();
  lerDados();
  return 0;
}
/*---------------------------------------------------------------------*/
void escreverDados()
{
  FILE *arq;
  int i;  
  Pessoa p;
  
  printf("\nOperacao de Escrita\n");
  arq=fopen(url,"ab");
  for(i=0;i<P;i++)
  {  
    printf("\n");
	printf("Digite o nome:");
    scanf("%s",p.nome);
    printf("Digite a idade:");
    scanf("%d",&p.idade);
    fwrite(&p, sizeof(Pessoa),1,arq);
  }/*for*/
  fclose(arq);  
}
/*---------------------------------------------------------------------*/
void lerDados()
{
	FILE *arq;	
	Pessoa p;
	
	printf("\nOperacao de Leitura\n");
	arq=fopen(url,"rb");	
	while(fread(&p, sizeof(Pessoa),1, arq)!=0)
	{
		printf("Nome: %s  -  Idade: %d\n",p.nome, p.idade);
	}/*while*/
	fclose(arq);	
}
/*---------------------------------------------------------------------*/
