#include <stdio.h>
float entrada_dados();
float obter_maior(float num1, float num2);

int main(){
	float num1, num2;	
	float maior;
	num1  = entrada_dados();
	num2  = entrada_dados();
	maior = obter_maior(num1, num2);
	printf("O maior elemento eh: [%5.2f].\n", maior);
	return 0;
}

float entrada_dados(){
	float num;	
	printf("Digite o numero: ");
	scanf("%f", &num);
	printf("\n");
	return num;
}

float obter_maior(float num1, float num2){
	float maior;
	maior = (num1 > num2)? num1 : num2;	
	return maior;	
}
