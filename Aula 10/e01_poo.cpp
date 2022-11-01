/****
Desenvolvido por: Sérgio Assunção Monteiro, D.Sc.
****/
#include <iostream>  
using namespace std;  
class MinhaClasse{        // Classe
  private:           // Especificação de acesso
  	int chave;
  	float valor;
  public:            // Especificação de acesso
  	MinhaClasse(int c, float v){
  		chave=c;
  		valor=v;
	}
    void metodo_01(); // Declaração de método
    void metodo_02(); // Declaração de método
};

// Implementação do método
void MinhaClasse::metodo_01() {
  cout<<"Esse eh meu primeiro POO!"<<endl;
}

// Implementação do método
void MinhaClasse::metodo_02() {
  cout<<"Chave: "<<chave<<endl;
  cout<<"Valor: "<<valor<<endl;
}

int main() {
  MinhaClasse objeto=MinhaClasse(5,100.7);  // Criar um objeto
  objeto.metodo_01();  // Chamada de método
  objeto.metodo_02();  // Chamada de método
  return 0;
}
