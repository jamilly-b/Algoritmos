#include "veiculo.h"
#include <iostream>
using namespace std;

int main() { 
  Veiculo * terr, * aqua, * aereo;
  terr = new Terrestre("VT1");
  terr->setCapacidadeMax(45);
  aqua = new Aquatico("VQ1");
  aqua->setCargaMax(12.5);
  aereo = new Aereo("VA1");
  aereo->setVelocidadeMax(1040.5);
}