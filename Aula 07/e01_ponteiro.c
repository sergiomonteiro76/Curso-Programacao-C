/****
Desenvolvido por: Sérgio Assunção Monteiro, D.Sc.
****/

#include<stdio.h>
int main(void)
{
	int vetor[]={1980,1992,1995, 1996, 2000, 2006, 2007, 2014, 2022, 2030};
	int *ano;
	ano=&vetor[0];
	ano++;
	printf("\nValor: %d\n", *ano);
	(*ano)++;
	printf("Valor: %d\n", *ano);
	
	int a = sizeof(float);
	printf("\na: %d\n", a);
}
