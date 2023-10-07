#include "arranjo.h"
#include <iostream>
using namespace std;
#ifndef ALUNO_H
#define ALUNO_H
class Aluno {
private:
  string nome;
  string mat;

public:
  Aluno() {
    this->nome = "";
    this->mat = "";
  }

  Aluno(const char *nome, const char *mat) : nome(nome), mat(mat) {}

  friend class Arranjo<Aluno>;
};
template <> void Arranjo<Aluno>::set(int idx, const Aluno &aluno) {
  // atribua nome e mat individualmente para o item do array
  // isto é, pegue o aluno no array, e atribua cada campo um a um
  items[idx].mat = aluno.mat;
  items[idx].nome = aluno.nome;
}
template <> void Arranjo<Aluno>::exibir() {
  // exiba cada aluno do array no formato "idx : mat = nome"
  for (int i = 0; i < tamanho; i++) {
    cout << i << ": " << items[i].mat << " = " << items[i].nome << endl;
  }
}
#endif