#include <iostream>
using namespace std;

class Aluno {
public:
    Aluno(string nome, int idade) : nome(nome), idade(idade) {}

    void apresentar() {
        cout << "Meu nome é " << nome << " e tenho " << idade << " anos." << endl;
    }

private:
    string nome;
    int idade;
};

int main() {
    Aluno *ponteiroParaAluno = new Aluno("Joao", 20);

    // Chame a função apresentar() usando o ponteiro
    // Lembre-se de liberar a memória alocada no final
    ponteiroParaAluno->apresentar();
    delete ponteiroParaAluno;
    
    return 0;
}
