/****
Desenvolvido por: S�rgio Assun��o Monteiro, D.Sc.
****/
#include <iostream>  
using namespace std;  
class MinhaClasse{        // Classe
  private:           // Especifica��o de acesso
  	string nome;
  	int chave;
  	float valor;
  public:            // Especifica��o de acesso
  	MinhaClasse(string nm, int c, float v){ //Construtor
  		setNome(nm);
		setChave(c);
  		setValor(v);
	}
	//"Essa classe contem um Destrutor."
  	~MinhaClasse(){ //Destrutor
		cout<<"Destrutor!"<<endl;
	}
    void setNome(string nm); // Declara��o de m�todo
	void setChave(int c); // Declara��o de m�todo
    void setValor(float v); // Declara��o de m�todo
    string getNome(); // Declara��o de m�todo
    int getChave(); // Declara��o de m�todo
    float getValor(); // Declara��o de m�todo    
    void imprimirDados();
};

// Implementa��o dos m�todos
void MinhaClasse::setNome(string nm){ // Declara��o de m�todo
	 this->nome=nm;
}

void MinhaClasse::setChave(int c){ // Declara��o de m�todo
	 this->chave=c;
}

void MinhaClasse::setValor(float v){ // Declara��o de m�todo
	this->valor=v;
}

string MinhaClasse::getNome(){ // Declara��o de m�todo
	return this->nome;
}

int MinhaClasse::getChave(){ // Declara��o de m�todo
	return this->chave;
}

float MinhaClasse::getValor(){ // Declara��o de m�todo
	return this->valor;
}

void MinhaClasse::imprimirDados() {
  cout<<"Nome: "<<getNome()<<endl;
  cout<<"Chave: "<<getChave()<<endl;
  cout<<"Valor: "<<getValor()<<endl;
  cout<<endl<<endl<<endl;
}

int main() {
  MinhaClasse objeto01=MinhaClasse("Objeto 01",5,100.7);  // Criar um objeto
  MinhaClasse objeto02=MinhaClasse("Objeto 02",7,342.1);  // Criar um objeto
  objeto01.imprimirDados();  // Chamada de m�todo
  objeto02.imprimirDados();  // Chamada de m�todo
  return 0;
}
