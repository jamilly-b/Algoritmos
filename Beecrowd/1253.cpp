#include <iostream>
using namespace std;

string decodificar(string texto, int shift){
  string decodificado;

  for(int i = 0; i < texto.length(); i++){
    char c = char((int(texto[i]) - shift));
    if (c < 'A') {
      c += 26;
    } else if (c > 'Z') {
      c -= 26;
    }
    decodificado += c;
  }

  return decodificado;
}

int main(){
  int numTestes, shift;
  cin >> numTestes;
  string texto, arrayStrings[numTestes];
  
  for(int i = 0; i < numTestes; i++){
    cin >> texto;
    cin >> shift;
    arrayStrings[i] = decodificar(texto, shift);
  }

  for(int i = 0; i < numTestes; i++){
    cout << arrayStrings[i] << endl;
  }

  return 0;
}
