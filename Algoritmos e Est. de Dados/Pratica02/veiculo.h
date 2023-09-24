#include <iostream>
using namespace std;

class Veiculo {
protected:
  string nome;

public:
  Veiculo(const char *nome) {
    this->nome = nome;
    cout << "O objeto " << nome << " foi criado." << endl;
  };
};

class Terrestre : public Veiculo {
public:
  Terrestre(const char *nome) : Veiculo(nome) { cap_pass = 5; }
  void setCapacidadeMax(int cap_pass);
  int getCapacidadeMax();

private:
  int cap_pass;
};

class Aquatico : public Veiculo {
public:
  Aquatico(const char *nome) : Veiculo(nome) { carga_max = 10; }
  void setCargaMax(float carga_max);
  float getCargaMax();
private:
  float carga_max;
};

class Aereo : public Veiculo {
public:
  Aereo(const char *nome) : Veiculo(nome) { vel_max = 100; }
  void setVelocidadeMax(float vel_max);
  float getVelocidadeMax();
private:
  float vel_max;
};