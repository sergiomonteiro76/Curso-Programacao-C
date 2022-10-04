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
} pessoa;

int main() {

  strcpy(pessoa.nome, "Nome Sobrenome");
  pessoa.cpf = 7777777;
  pessoa.salario = 102500;

  printf("Nome: %s\n", pessoa.nome);
  printf("CPF: %d\n", pessoa.cpf);
  printf("Salario: %.2f", pessoa.salario);

  return 0;
}