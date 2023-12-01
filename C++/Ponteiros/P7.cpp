// Crie uma struct chama Ponto com x e y como inteiros. Atribua valores 3 e 7 aos membros x e y usando o ponteiro.
#include <iostream>
using namespace std;

struct Ponto {
    int x;
    int y;
};

int main() {
    Ponto ponto;
    Ponto *ponteiroParaPonto = &ponto;
  
    ponteiroParaPonto -> x = 3;
    ponteiroParaPonto -> y = 7;
    
    cout << ponto.x << " " << ponto.y << endl;
    return 0;
}
