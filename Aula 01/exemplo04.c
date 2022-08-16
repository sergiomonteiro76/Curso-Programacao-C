#include <stdio.h>
int main(){
	float num1, num2;	
	float maior;
	printf("Digite o num1: ");
	scanf("%f", &num1);
	printf("\n");
	printf("Digite o num2: ");
	scanf("%f", &num2);
	printf("\n");    
	maior = (num1 > num2)? num1 : num2;
	printf("O maior elemento eh: [%5.2f].\n", maior);
	return 0;
}


