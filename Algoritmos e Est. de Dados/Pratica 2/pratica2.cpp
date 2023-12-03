#include "veiculo.h"
#include <iostream>
using namespace std;

int main() {
  //Veiculo v1("v1");
  
  Veiculo *terr, *aqua, *aereo;
  
  terr = new Terrestre("VT1");
  //((Terrestre *)terr)->setCapacidadeMax(45);
  terr->mover();
  dynamic_cast<Terrestre *>(terr)->setCapacidadeMax(45);
  
  aqua = new Aquatico("VQ1");
  //((Aquatico *)aqua)->setCargaMax(12.5);
  aqua->mover();
  dynamic_cast<Aquatico *>(aqua)->setCargaMax(12.5);
  
  aereo = new Aereo("VA1");
  //((Aereo *)aereo)->setVelocidadeMax(1040.5);
  aereo->mover();
  dynamic_cast<Aereo *>(aereo)->setVelocidadeMax(1040.5);

  Veiculo * anfi = new Anfibio("Anfibio");
  anfi->mover();
  
  delete terr;
  delete aqua;
  delete aereo;
}