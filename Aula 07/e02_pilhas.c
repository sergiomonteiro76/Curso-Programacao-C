/****
Desenvolvido por: Sérgio Assunção Monteiro, D.Sc.
****/
//-------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//------------------------------------------- 
/* nó da lista para armazenar valores reais */
struct elemento {
 int info;
 struct elemento *prox;
};
typedef struct elemento Elemento;
/* estrutura da pilha */
struct pilha {
 Elemento* prim; /* aponta para o topo da pilha */
};
typedef struct pilha Pilha;
//--------------
Pilha* pilha_cria (void)
{
 Pilha* p = (Pilha*) malloc(sizeof(Pilha));
 if (p==NULL) exit(1);
 p->prim = NULL;
 return p;
}
//--------------
void pilha_push (Pilha* p, float v)
{
 Elemento* n = (Elemento*) malloc(sizeof(Elemento));
 if (n==NULL) exit(1);
 n->info = v;
 n->prox = p->prim;
 p->prim = n;
}
//--------------
float pilha_pop (Pilha* p)
{
 Elemento* t;
 float v;
 if (pilha_vazia(p)) exit(1); /* aborta programa */
 t = p->prim;
 v = t->info;
 p->prim = t->prox;
 free(t);
 return v;
}
//------------------
void pilha_libera (Pilha* p)
{
 Elemento *t, *q = p->prim;
 while (q!=NULL)
 {
 t = q->prox;
 free(q);
 q = t;
 }
 free(p);
}
//----------------------
int pilha_vazia (Pilha* p)
{
 if(p->prim == NULL)
 return 1;
 return 0;
}
//-------------------------------------------
void teste(int *v, int n, Pilha *p){
  if(n==0) return;
  teste(v+1, n-1, p);
  if(*v%2 == 0) pilha_push(p, *v);
}/*teste*/
//-------------------------------------------
void main(){  
  Pilha *p=pilha_cria();
  int vet[]={1,2,3,4,5,6,7,8,9,10};
  p->prim=NULL;
  teste(vet, 10, p);
  while(pilha_vazia(p)==0)  
    printf("\n%d",pilha_pop(p));
}/*main*/
//-------------------------------------------

