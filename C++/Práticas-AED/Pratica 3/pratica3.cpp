#include "funcoes.h"
#include "arranjo.h"
#include "aluno.h"
#include <iostream>
using namespace std;
using namespace funcoes;

int main() {
  // int x = 5, y = 10, z = 30;
  float x = 5.5, y = 10.15, z = 30.7;
  cout << "Antes: x = " << x << " y = " << y << endl;
  trocar(x, y);
  cout << "Depois: x = " << x << " y = " << y << endl;
  cout << "Minimo entre " << x << " e " << y << ": " << minimo(x, y) << endl;
  cout << "Maximo entre " << y << " e " << z << ": " << maximo(y, z) << endl;
  //const char *
  cout << "Minimo de \"strA\" e \"strB\": " << minimo("strA", "strB") << endl;
  cout << "Maximo de \"strA\" e \"strB\": " << maximo("strA", "strB") << endl;

  //testando arranjo.h
  cout << "----------------------------------" << endl;
  Arranjo<int> arr(10);
  arr.set(4, 5);
  arr.set(7, 15);
  arr.set(8, 22);
  arr.exibir();
  cout << "----------------------------------" << endl;
  Arranjo<float> a(5);
  a.set(2, 3.5);
  a.set(4, 11.3);
  a.set(0, 1.556);
  a.exibir();
  cout << "----------------------------------" << endl;
  try {
		Arranjo<float> a2(5);
		a2.set(0, 2.2);
		a2.set(2, 6.6);
		a2.set(4, 5.5);
		a2.set(11, 5.5);
		a2.exibir();
	} catch(IndiceInvalido) {
		cout << "Você tentou inseriu um valor em um índice inválido." << endl;
	}
  cout << "----------------------------------" << endl;
  Arranjo<Aluno> turma(3);
  turma.set(0, Aluno("Joao","1234"));
  turma.set(1, Aluno("Maria","5235"));
  turma.set(2, Aluno("Jose","2412"));
  turma.exibir();
}