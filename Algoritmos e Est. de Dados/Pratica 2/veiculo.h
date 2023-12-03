#include <iostream>
using namespace std;

class Veiculo {
protected:
  string nome;

public:
  Veiculo(const char *nome) {
    this->nome = nome;
    cout << "O objeto " << nome << " foi criado.\n" << endl;
  };
  virtual ~Veiculo() {
    cout << "O objeto " << nome << " foi destruído.\n" << endl;
  }

  virtual void mover() = 0;
};

class Terrestre : public virtual Veiculo {
protected:
  Terrestre() : Veiculo("Terrestre"), cap_pass(5){};

public:
  void setCapacidadeMax(int cap_pass);
  int getCapacidadeMax();

  Terrestre(const char *nome) : Veiculo(nome), cap_pass(5) {}
  virtual ~Terrestre() {
    cout << "O objeto terrestre " << nome << " foi destruído.\n" << endl;
  }
  void mover() override {
    cout << "O objeto terrestre " << nome << " andou.\n" << endl;
  }

private:
  int cap_pass;
};

class Aquatico : public virtual Veiculo {
protected:
  Aquatico() : Veiculo("Aquático"), carga_max(10){};

public:
  Aquatico(const char *nome) : Veiculo(nome), carga_max(10) {}
  virtual ~Aquatico() {
    cout << "O objeto aquático " << nome << " foi destruído.\n" << endl;
  }
  void setCargaMax(float carga_max);
  float getCargaMax();
  void mover() override {
    cout << "O objeto aquatico " << nome << " navegou.\n" << endl;
  }

private:
  float carga_max;
};

class Aereo : public Veiculo {
public:
  Aereo(const char *nome) : Veiculo(nome), vel_max(100) {}
  virtual ~Aereo() {
    cout << "O objeto aéreo " << nome << " foi destruído.\n" << endl;
  }
  void setVelocidadeMax(float vel_max);
  float getVelocidadeMax();
  void mover() override {
    cout << "O objeto aéreo " << nome << " voou.\n" << endl;
  }

private:
  float vel_max;
};

class Anfibio : public Terrestre, public Aquatico {
public:
  Anfibio(const char *nome) : Veiculo(nome), Terrestre(), Aquatico() {}
  void mover() override {
    Terrestre::mover();
    Aquatico::mover();
  }
};