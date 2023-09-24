#include <iostream>
using namespace std;
#include "veiculo.h"

void Terrestre::setCapacidadeMax(int cap_pass){
  this->cap_pass = cap_pass;
}
int Terrestre::getCapacidadeMax(){
  return cap_pass;
}

void Aquatico::setCargaMax(float carga_max){
  this->carga_max = carga_max;
}
float Aquatico::getCargaMax(){
  return carga_max;
}

void Aereo::setVelocidadeMax(float vel_max){
  this->vel_max = vel_max;
};
float Aereo::getVelocidadeMax(){
  return vel_max;
};