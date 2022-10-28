/*
Listas Simplesmente Encadeadas
Desenvolvedor: Sérgio Assunção Monteiro, D.Sc.
*/
/*------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------*/
#include<stdio.h>
#include <stdlib.h>
/*------------------------------------------------------------------------------*/
struct ELista
{
	int elem;
	struct ELista *prox;
};
struct EMonitor
{
	struct ELista*prim;
	struct ELista*fim;
	int qtde;
};
/*------------------------------------------------------------------------------*/
void create();
void inserir(int elem);
int menu();
void imprimir();
int pesquisar(int elem);
void excluir(int elem);
struct ELista *pesquisar_ponteiro(int elem, struct ELista **ant);
/*------------------------------------------------------------------------------*/
struct EMonitor monitor;
/*------------------------------------------------------------------------------*/
main()
{
	create();
	while(menu());
}
/*------------------------------------------------------------------------------*/
void create()
{
	monitor.prim=NULL;
	monitor.fim=NULL;
	monitor.qtde=0;	
}
/*------------------------------------------------------------------------------*/
int menu()
{
	int opcao;
	system("cls");
	printf("\n Digite:");
	printf("\n   0. Para Sair ");
	printf("\n   1.Para Inserir ");
	printf("\n   2.Para Imprimir ");
	printf("\n   3.Para Buscar a posicao de um determinado elemento ");
	printf("\n   4.Para excluir um determinado elemento da lista");
	printf("\n");
	scanf("%d",&opcao);
	switch(opcao)
	{
		case 0:return 0;
		case 1:
		{ int elem;
		  printf("\nDigite o elemento para inserir na lista: ");
		  scanf("%d",&elem);
		  inserir(elem);
		  return 1;
		}
		case 2:
		{ int elem;
		  imprimir();
		  printf("\nPressione qualquer tecla para continuar");		  
		  system("pause");
		  return 1;
		}		
		case 3:
		{ int elem;
		  int posicao;
		  printf("\nDigite o elemento para pesquisar na lista: ");
		  scanf("%d",&elem);
		  posicao=pesquisar(elem);
		  if(posicao>0){
		  	printf("O elemento %i estah na posicao %i\n",elem,posicao);
		  }
		  else{
		  	printf("O elemento %i não estah na lista \n",elem);
		  }
 		  printf("\nPressione qualquer tecla para continuar");		  
		  system("pause");
		  return 1;
		}
		case 4:
		{ int elem;
		  printf("\nDigite o elemento para excluir na lista: ");
		  scanf("%d",&elem);
		  excluir(elem);
  		  printf("\nPressione qualquer tecla para continuar");		  
		  system("pause");
		  return 1;
		}

		default:
			printf("\nDigite uma opcao VALIDA! ");
			return 1;
	}	
}
/*------------------------------------------------------------------------------*/
void inserir(int elem)
{
	struct ELista *p;
	p=(struct ELista *)malloc(sizeof(struct ELista));
	p->elem=elem;
	p->prox=NULL;
	monitor.qtde++;	
	/*verifica se a lista eh vazia*/
	if(!monitor.prim)
	{
		monitor.prim=monitor.fim=p;
		return;
	}
	/*inserir no Inicio da Lista*/
	if(p->elem<=monitor.prim->elem)
	{
		p->prox=monitor.prim;
		monitor.prim=p;
		return;
	}
	/*inserir no Final da Lista*/
	if(p->elem>=monitor.fim->elem)
	{
		monitor.fim->prox=p;
		monitor.fim=p;
		return;
	}
	/*Insercao Intermediaria. Existem, pelo menos, dois elementos*/
	struct ELista *aux;
	aux=monitor.prim;
	while((aux->prox->elem)<(p->elem))
		aux=aux->prox;
    p->prox=aux->prox;
    aux->prox=p;
}
/*------------------------------------------------------------------------------*/
void imprimir()
{
  struct ELista *p;
  p=monitor.prim;
  while(p)
  {
  	printf("\np->elem=[%d]",p->elem);
  	p=p->prox;
  }
}
/*------------------------------------------------------------------------------*/
int pesquisar(int elem)
{
  struct ELista *p;
  int posicao=0;
  p=monitor.prim;  
  while(p)
  {
  	posicao++;
  	if(p->elem==elem){
		return posicao;  
	}  	
  	p=p->prox;
  }
  return posicao;  
}
/*------------------------------------------------------------------------------*/
struct ELista *pesquisar_ponteiro(int elem, struct ELista **ant)
{
  struct ELista *p;  
  p=monitor.prim;  
  *ant=NULL;
  while(p)
  {    		
  	if(p->elem==elem){
		return p;  
	}
	*ant=p;  	
  	p=p->prox;
  }
  return p;  
}

/*------------------------------------------------------------------------------*/
void excluir(int elem)
{
	struct ELista *p;
	struct ELista *ant;
	printf("\nConstruir a funcao de exclusao");
	p=pesquisar_ponteiro(elem, &ant);
	if(p==NULL){
		printf("\nO elemento nao consta na lista");
		return;
	}
	printf("\nO elemento encontrado na lista");	
}

