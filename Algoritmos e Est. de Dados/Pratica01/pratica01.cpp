#include "veiculo.h"
#include <iostream>
using namespace std;

int main() {
  // cout << "Primeira aplicação C++" << endl;
  // {
  //   Veiculo veiculo1("v1");
  //   {
  //     Veiculo veiculo2("v2");
  //     {
  //       Veiculo veiculo3("v3");
  //     }
  //   }
  // }

  Veiculo *obj1 = new Veiculo("v1");
  Veiculo *obj2 = new Veiculo("v2");
  Veiculo *obj3 = new Veiculo("v3");

  obj1->setNumRodas(4);
  obj2->setNumRodas(6);
  obj3->setNumRodas(2);

  cout << "Número de rodas de v1: " << obj1->getNumRodas() << endl;
  cout << "Número de rodas de v2: " << obj2->getNumRodas() << endl;
  cout << "Número de rodas de v3: " << obj3->getNumRodas() << endl;

  delete obj1;
  delete obj2;
  delete obj3;
}