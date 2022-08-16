#include <stdio.h>
#include <ctype.h>

char converter_maiscula(char letra);

int main(){
   char letra;
   char letra_maiuscula;
   printf("Digite uma letra:");
   scanf("%c", &letra);
   letra_maiuscula= converter_maiscula(letra);
   printf("Letra: %c\n", letra_maiuscula);
   return 0;
}

char converter_maiscula(char letra){
	if ('a' <= letra && letra <= 'z') {
		letra = toupper(letra);
		printf("A letra foi convertida para maiuscula!\n");
	}
	return letra;
}

