/****
Desenvolvido por: Sérgio Assunção Monteiro, D.Sc.
****/
#include <iostream>  
using namespace std;  
class MinhaClasse{        // Classe
  private:           // Especificação de acesso
  	string nome;
  	int chave;
  	float valor;
  public:            // Especificação de acesso
  	MinhaClasse(string nm, int c, float v){ //Construtor
  		setNome(nm);
		setChave(c);
  		setValor(v);
	}
	//"Essa classe contem um Destrutor."
  	~MinhaClasse(){ //Destrutor
		cout<<"Destrutor!"<<endl;
	}
    void setNome(string nm); // Declaração de método
	void setChave(int c); // Declaração de método
    void setValor(float v); // Declaração de método
    string getNome(); // Declaração de método
    int getChave(); // Declaração de método
    float getValor(); // Declaração de método    
    void imprimirDados();
};

// Implementação dos métodos
void MinhaClasse::setNome(string nm){ // Declaração de método
	 this->nome=nm;
}

void MinhaClasse::setChave(int c){ // Declaração de método
	 this->chave=c;
}

void MinhaClasse::setValor(float v){ // Declaração de método
	this->valor=v;
}

string MinhaClasse::getNome(){ // Declaração de método
	return this->nome;
}

int MinhaClasse::getChave(){ // Declaração de método
	return this->chave;
}

float MinhaClasse::getValor(){ // Declaração de método
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
  objeto01.imprimirDados();  // Chamada de método
  objeto02.imprimirDados();  // Chamada de método
  return 0;
}
