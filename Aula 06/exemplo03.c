#include <stdio.h>
#include <string.h>
 
struct Livro {
   char  titulo[50];
   char  autor[50];
   char  assunto[100];
   int   livro_id;
};
 
int main( ) {

   struct Livro livro1;        /* Declare Livro1 of type Livro */
   struct Livro livro2;        /* Declare Livro2 of type Livro */
 
   /* Livro 1 specification */
   strcpy( livro1.titulo, "Programação em C");
   strcpy( livro1.autor, "Sérgio Monteiro"); 
   strcpy( livro1.assunto, "Passo a Passo de Programação em C");
   livro1.livro_id = 1234567;

   /* Livro 2 specification */
   strcpy( livro2.titulo, "Programação em Python");
   strcpy( livro2.autor, "Sérgio Assunção");
   strcpy( livro2.assunto, "Passo a Passo de Programação em Python");
   livro2.livro_id = 789078890;
 
   /* Informações do Livro 01 */
   printf( "Livro 1 titulo : %s\n", livro1.titulo);
   printf( "Livro 1 autor : %s\n", livro1.autor);
   printf( "Livro 1 assunto : %s\n", livro1.assunto);
   printf( "Livro 1 Livro_id : %d\n", livro1.livro_id);

   /* Informações do Livro 02 */
   printf( "Livro 2 titulo : %s\n", livro2.titulo);
   printf( "Livro 2 autor : %s\n", livro2.autor);
   printf( "Livro 2 assunto : %s\n", livro2.assunto);
   printf( "Livro 2 Livro_id : %d\n", livro2.livro_id);

   return 0;
}