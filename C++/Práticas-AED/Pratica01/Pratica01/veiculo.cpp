#include "veiculo.h"

void Veiculo::setNumRodas(int num_rodas) { 
  this->num_rodas = num_rodas; 
  delete [] rodas;
  rodas = new Roda[num_rodas];
}
int Veiculo::getNumRodas() { return num_rodas; }