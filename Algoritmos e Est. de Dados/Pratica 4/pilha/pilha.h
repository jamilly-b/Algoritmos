#include <iostream>
using namespace std;

template <class T> 
class Pilha {
private:
  // Atributos para array de items, capacidade e topo da pilha
  T *items;
  int capacidade;
  int topo;

public:
  Pilha(int capacidade) {
    // instancia array de items, inicializa capacidade e topo
    this->capacidade = capacidade;
    items = new T[capacidade];
    topo = -1;
  }
  ~Pilha() {
    // destroy array de items
    delete[] items;
  }
  void empilha(T item) {
    // empilha um item no topo da pilha; lança “Estouro da pilha” se cheia
    items[topo + 1] = item;
    if (topo == capacidade - 1) {
      throw "Estouro da pilha";
    }
    topo++;
  }
  T desempilha() {
    // remove um item do topo da pilha; lança “Pilha vazia” se vazia
    if (topo == -1){
      throw "Pilha vazia";
    }
    topo--;
    return items[topo + 1];
  }
  int tamanho() {
    // retorna o número de elementos na pilha.
    return (topo + 1);
  }
};
