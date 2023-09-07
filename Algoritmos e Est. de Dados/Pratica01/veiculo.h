#include <iostream>
using namespace std;

class Roda {
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

  Veiculo(const char *nome) {
    this->nome = string(nome);
    cout << "O novo objeto " << nome << " foi construído" << endl;
  };
  ~Veiculo() { cout << "O objeto " << nome << " foi destruído" << endl; }
};
