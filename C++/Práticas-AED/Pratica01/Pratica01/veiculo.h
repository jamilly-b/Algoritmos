#include <iostream>
using namespace std;

class Roda {
public:
  Roda() { cout << "O objeto foi construído." << endl; }
  ~Roda() { cout << "O objeto foi destruído." << endl; }
};

class Veiculo {
private:
  string nome;
  int num_rodas;
  Roda *rodas;

public:
  void setNumRodas(int num_rodas);
  int getNumRodas();

public:
  Veiculo(const char *nome) {
    this->nome = string(nome);
    this->rodas = NULL;
    cout << "O novo objeto " << nome << " foi construído" << endl;
  };

public:
  ~Veiculo() {
    delete[] rodas;
    cout << "O objeto " << nome << " foi destruído" << endl;
  }
};