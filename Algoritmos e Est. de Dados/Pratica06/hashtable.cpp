#include <iostream>
#include <string>

using namespace std;

class ItemNotFound {};

/* Lista encadeada simples, com itens do tipo (chave, valor)
 * Usada internamente pela estrutura hashtable
 * T_key: tipo da chave
 * T_value: tipo do valor
 */
template<class T_key, class T_value>
class List {
private:
	struct Node {
		T_key key;
		T_value value;
		Node *next;
		Node(T_key key, T_value value) :
				key(key), value(value), next(NULL) {
		}
	};

	Node *head;

public:

	List() {
		this->head = NULL;
	}

	~List() {
		while (head != NULL) {
			Node * tmp = head;
			head = head->next;
			delete tmp;
		}
	}

	// Adiciona no início da lista
	void add(T_key key, T_value value) {
		Node *tmp = new Node(key, value);
		tmp->next = head;
		head = tmp;
	}

	// Remove um item identificado por key
	// Se o elemento não existe, lança exceção ItemNotFound
	void remove(T_key key) {
		Node *tmp = head;
		Node *prev = NULL;

		while (tmp != NULL) {
			if (tmp->key == key) {
				if (prev == NULL) {
					head = tmp->next;
				} else {
					prev->next = tmp->next;
				}
				delete tmp;
				return;
			}
			prev = tmp;
			tmp = tmp->next;
		}

		throw ItemNotFound();
	}

	// Retorna o valor (value) do item identificado por key
	// Se o item não existe, lança exceção ItemNotFound
	T_value search(T_key key) {
		Node *tmp = head;
		while (tmp != NULL) {
			if (tmp->key == key) {
				return tmp->value;
			}
			tmp = tmp->next;
		}
		throw ItemNotFound();
	}

	// Exibe os items na tela no formato (chave, valor)
	void show() {
		Node *node = head;
		while (node != NULL) {
			cout << "(" << node->key << ", " << node->value << ") ";
			node = node->next;
		}
	}
};

/* Tabela de Espalhamento como array de listas encadeadas.
 * As listas lidam com colisões (hashs que dão o mesmo índice).
 */
template<class T_key, class T_value>
class Hashtable {
private:

	List<T_key, T_value> * table;// Array de pontos para as cabeças das listas
	int cap, size;
	T_value notFound;// Item default retornado caso a chave não seja encontrada

public:
	Hashtable(int cap) {
		this->cap = cap;
		this->size = 0;
		table = new List<T_key, T_value> [cap];
	}

	~Hashtable() {
		delete[] table;
	}

	void insert(T_key key, T_value value) {
		// Calcular o hash/índice da chave na tabela
		// Pegar a lista correspondente na tabela usando o indice
		// Adicionar chave e valor na lista
	}

	void remove(T_key key) {
		// Calcular o hash/índice da chave na tabela
		// Pegar a lista correspondente na tabela usando o indice
		// Remove da lista usando a chave
	}

	T_value search(T_key key, T_value notFound) {
		// Calcular o hash/índice da chave na tabela
		// Pegar a lista correspondente na tabela usando o indice
		// Buscar na lista usando a chave e retornar o valor
                // Em caso da exceção ItemNotFound, retornar notFound
	}

	void show() {
		for (int i = 0; i < cap; i++) {
			cout << i << ":";
			table[i].show();
			cout << endl;
		}
	}

private:
	// Funções de hash para diferentes tipos
	// Essas funções devem retornar um indice dentro da capacidade da tabela
	// Devem também minimizar as colisões (vários itens no mesmo indice)

	// Calcula o hash (indice) para chaves do tipo int
	int hash(int x) {
		return int % cap;
	}

	// Calcula o hash (indice) para chaves do tipo string
	int hash(string key) {
		// TODO
	}

};

int main() {
	/* Tabela de alunos por matricula: mat = aluno */
	Hashtable<int, string> alunos(10);

	alunos.insert(12312, "Marcos");
	alunos.insert(23523, "Flavia");
	alunos.insert(9878,  "Victor");
	alunos.insert(72365, "Pedro");
	alunos.insert(51535, "Esmeralda");

	cout << "TABELA de Alunos: " << endl;
	alunos.show();
	cout << endl;

	cout << "ALUNOS: "  << endl;
	cout << "12312: "  << alunos.search(12312, "") << endl;
	cout << "23523: "  << alunos.search(23523, "") << endl;
	cout << "98784: "  << alunos.search(98784, "") << endl;
	cout << "22353: "  << alunos.search(22353, "") << endl;
	cout << "72365: "  << alunos.search(72365, "") << endl;

	cout << endl;

	// ----------------------
	Hashtable<string, float> notas(10);

	notas.insert(string("Joao"), 5);
	notas.insert(string("Pedro"), 7);
	notas.insert(string("Larissa"), 10);
	notas.insert(string("Tereza"), 7.5);
	notas.insert(string("Victor"), 8);
	notas.insert(string("Mario"), 4);

	cout << "TABELA de Notas: " << endl;
	notas.show();

	cout << endl;

	cout << "NOTAS: " << endl;
	cout << "Joao:   " << notas.search(string("Joao"), -1) << endl;
	cout << "Carlos: " << notas.search(string("Carlos"), -1) << endl;
	cout << "Pedro:  " << notas.search(string("Pedro"), -1) << endl;
	cout << "Maria:  " << notas.search(string("Maria"), -1) << endl;
	cout << "Mario:  " << notas.search(string("Mario"), -1) << endl;
}

