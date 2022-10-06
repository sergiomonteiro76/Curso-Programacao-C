/***
Desenvolvedor: Sérgio Assunção Monteiro, D.Sc.
***/

#include<stdio.h> 
 
float adicao(float a, float b) 
{ 
	float c = a + b; 
	return c;
}
float subtracao(float a, float b) 
{ 
	float c = a - b; 
	return c;
}
float multiplicacao(float a, float b) 
{ 
	float c = a * b; 
	return c;
}
float divisao(float a, float b) 
{ 
	if(b==0){
		printf("Erro: não eh possivel realizar divisao por Zero!\n");
		return 0;
	}
	float c = a/b; 
	return c;
}
