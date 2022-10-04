/******************************************************************************
Desenvolvedor: Sérgio Assunção Monteiro, D.Sc.
*******************************************************************************/

#include <stdio.h>
#include <stdio.h>
#include <string.h>
struct Pessoa {
  char nome[50];
  int cpf;
  float salario;
};
struct Pessoa preencher_dados();
void imprimir_dados(struct Pessoa p);
int main() {
 struct Pessoa p;
 p=preencher_dados();
 imprimir_dados(p);
 return 0;
}
struct Pessoa preencher_dados(){
  struct Pessoa p;
  strcpy(p.nome, "Nome Sobrenome");
  p.cpf = 7777777;
  p.salario = 102500;
  return p;
}
void imprimir_dados(struct Pessoa p){
  printf("Nome: %s\n", p.nome);
  printf("CPF: %d\n", p.cpf);
  printf("Salario: %.2f", p.salario);
}


