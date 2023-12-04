#include <iostream>
using namespace std;
#ifndef ARRANJO_H
#define ARRANJO_H

class IndiceInvalido{
};

template <class T>
class Arranjo {
  private:
    int tamanho; // tamanho do arranjo
    T * items; //items do arranjo
  public:
    Arranjo(int tam) {
    // instanciar o array de items com new (pratica 1) e setar tamanho;
      tamanho = tam;
      items = new T[tamanho];
    }
    virtual ~Arranjo() {
    // destruir o array de items (prática 1);
      delete [] items;
    }
    virtual T get(int idx) {
    // retornar um item do array a partir do indice;
      if (idx >= tamanho) throw IndiceInvalido();
      return items[idx];
    }
    virtual void set(int idx, const T & item) {
    // set o item do array apontado pelo indice usando =
      items[idx] = item;
    }
    virtual void exibir();
};
template<class T>
void Arranjo<T>::exibir() {
  // exibir cada item numa linha da forma "<idx>: <item>"
  int i;
  for(i = 0; i < tamanho; i++){
    cout << i << ": " << items[i] << endl;
  }
}

#endif