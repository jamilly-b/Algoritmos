#include <iostream>
using namespace std;

template <class T>
class Lista {
private:
// atributos:
		T * items;  // - itens da lista (ponteiro para T usado como array)
		int cap, tam; // - capacidade e tamanho atual (inteiros)

public:
Lista(int capacidade) {
// inicilização do array de itens, capacidade e tamanho
		this -> tam = 0;
		this -> cap = capacidade;
		items = new T[capacidade +1];
}

~Lista() {
//destruição do array
	delete[] items;
}

// adiciona um item ao final da lista
void adiciona (const T & item) {
// lança “Lista cheia” caso capacidade esgotada (testar antes)
		if (tam < cap) {
				items[tam + 1] = item;
				tam++;
		} else throw "Lista cheia";
}

// pega um item pelo indice (começa em 1);
T pega(int idx) {
// lança “Item inválido” se posição inválida (testar antes)
// ATENÇÃO: posições válidas são de 1 a N (= capacidade).
		if (0 < idx || idx <= tam) {
			return items[idx]; // arrumar idx (1 a N)
		} else throw "Item invalido";
}

// insere um item na posição indicada (a partir de 1).
void insere (int idx, const T & item) {
// lança “Lista cheia” caso cheia
// lança “Item inválido”  se posição inválida
// se a lista contém N itens, só é possivel inserir até a posição N
// deve deslocar itens existentes uma posição para a direita

		if (tam >= cap) {
			throw "Lista cheia";
		} else if (idx > cap || idx < 1) {
			throw "Item invalido";
		} else {
			for (int i = tam; i >= idx; i--) {
						items[i + 1] = items[i];
				}

				items[idx] = item;
				tam++;
		}
}

// remove o item de uma posição  indicada (a partir de 1)
void remove(int idx) {
// lança “Item inválido” se posição inválida
// desloca itens uma posicao a esquerda sobre o item removido

		if (idx > tam || idx < 1) {
			throw "Item invalido";
		} else if (tam == 0) {
			throw "Lista vazia";
		} else {
				for (int j = idx; j < tam; j++) {
						items[j] = items[j + 1];
				}

				tam--;
		}
}

void exibe() {
// exibe os itens da saida padrÃ£o separados por espaços
		for (int k = 1; k <= tam; k++) {
				 cout << items[k] << " ";
		 } cout << "\n";
}

int tamanho() {
// retorna a quantidade de itens atualmente na lista
	return tam;
}
};