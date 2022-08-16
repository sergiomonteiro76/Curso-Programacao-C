#include <stdio.h>

int main(){
	menu();	
	return 0;
}

void menu(){
	int opcao;
	printf("Digite a sua opcao\n");
	scanf("%d",&opcao);
	switch (opcao){
		case 1:
    		printf("Voce escolheu a opcao 1.\n");
    		break;
		case 2:
    		printf("Voce escolheu a opcao 2.\n");
	    	break;
		default:
    		printf("A opcao escolhida nao eh valida!.\n");
	}
}

