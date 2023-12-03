template <class T> class Fila {
private:
  // array de itens, capacidade, tamanho, posição inicial, etc.
  T *items; // array
  int capacidade, fim, ini;

public:
  Fila(int cap) {
    // inicializar array de items, capacidade, tamanho, posição inicial
    fim = 0;
    ini = 0;
    capacidade = cap;
    items = new T[capacidade];
  }

  ~Fila() {
    // destruir array de itens
    delete[] items;
  }

  void enfileira(const T &item) {
    // adiciona um item ao final da fila; lança “Fila cheia”  caso cheia
    if (fim < capacidade) {
      items[(ini + fim) % capacidade] = item;
      fim++;
    } else
      throw "Fila cheia";
  }

  T desenfileira() {
    // remove um item do inicio da fila; lança “Fila vazia” caso vazia
    if (fim > 0) {
      T prox = items[ini];
      ini = (ini + 1) % capacidade;
      fim--;
      return prox;
    } else
      throw "Fila vazia";
  }

  int cheia() {
    // retorna 1 se cheia, 0 caso contrário
    if (fim == capacidade) {
      return 1;
    } else {
      return 0;
    }
  }

  int vazia() {
    // retorna 1 se vazia, 0 caso contrário
    if (fim == 0) {
      return 1;
    } else {
      return 0;
    }
  }

  int tamanho() {
    // retorna a quantidade de itens atualmente na fila
    return fim;
  }
};
