/***
Desenvolvedor: Sérgio Assunção Monteiro, D.Sc.
***/

/*---------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
/*-------Lista de prototipos ------------------------------------------------------------*/
void lerDados();
/*---------------------------------------------------------------------------------------*/
int main()
{
	lerDados();
}
/*---------------------------------------------------------------------------------------*/  
void lerDados()
{
   FILE *fp;
   char c;
   fp = fopen("dados/char.txt","r");   /* Arquivo ASCII, para leitura */
   if(!fp)
    {
     printf( "Erro na abertura do arquivo");
     exit(0);
    }
   printf("\n Impressao dos dados \n");
   while((c = getc(fp) ) != EOF)      /* Enquanto não chegar ao final do arquivo */
     printf("%c\n", c);                 /* imprime o caracter lido */
   fclose(fp);
   printf("\n Fim da Leitura \n");
   return 0;  	
}
/*---------------------------------------------------------------------------------------*/
