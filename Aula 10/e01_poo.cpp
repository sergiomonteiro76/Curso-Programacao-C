/****
Desenvolvido por: S�rgio Assun��o Monteiro, D.Sc.
****/
#include <iostream>  
using namespace std;  
class MinhaClasse{        // Classe
  private:           // Especifica��o de acesso
  	int chave;
  	float valor;
  public:            // Especifica��o de acesso
  	MinhaClasse(int c, float v){
  		chave=c;
  		valor=v;
	}
    void metodo_01(); // Declara��o de m�todo
    void metodo_02(); // Declara��o de m�todo
};

// Implementa��o do m�todo
void MinhaClasse::metodo_01() {
  cout<<"Esse eh meu primeiro POO!"<<endl;
}

// Implementa��o do m�todo
void MinhaClasse::metodo_02() {
  cout<<"Chave: "<<chave<<endl;
  cout<<"Valor: "<<valor<<endl;
}

int main() {
  MinhaClasse objeto=MinhaClasse(5,100.7);  // Criar um objeto
  objeto.metodo_01();  // Chamada de m�todo
  objeto.metodo_02();  // Chamada de m�todo
  return 0;
}
