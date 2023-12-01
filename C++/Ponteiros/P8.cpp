#include <iostream>
using namespace std;

struct Livro {
    string titulo;
    int anoPublicacao;
};

int main() {
    Livro *ptrLivro1 = new Livro;
    Livro *ptrLivro2 = new Livro;

    // Atribua valores ao título e ano de publicação usando o ponteiro
    // Lembre-se de liberar a memória alocada no final
    
    ptrLivro1->titulo = "Memórias Póstumas de Brás Cubas";
    ptrLivro1->anoPublicacao = 1881;
    
    ptrLivro2->titulo = "Dom Casmurro";
    ptrLivro2->anoPublicacao = 1889;
    
    cout << "Livro 1: " << ptrLivro1->titulo << "\nAno de lançamento: "<< ptrLivro1 ->anoPublicacao << endl;
    cout << "Livro 2: " << ptrLivro2->titulo<< "\nAno de lançamento: "<< ptrLivro2->anoPublicacao << endl;
    
    delete ptrLivro1;
    return 0;
}
