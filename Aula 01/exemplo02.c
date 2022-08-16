#include <stdio.h>

int main(){
	char letra;
	printf("Digite uma letra:");
	scanf("%c", &letra);
	if ('a' <= letra && letra <= 'z') {
		letra -= 'a' - 'A';
		printf("A letra foi convertida para maiuscula!\n");
	}
	printf("Letra: %c\n", letra);
	return 0;
}


