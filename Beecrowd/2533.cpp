#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int qtdMaterias;
    double somaProdutos = 0, somaCargas = 0;
    double media;

    while (cin >> qtdMaterias) {
        for (int i = 0; i < qtdMaterias; i++) {
            int nota, cargaHoraria;
            cin >> nota >> cargaHoraria;
            somaProdutos += nota * cargaHoraria;
            somaCargas += cargaHoraria;
        }
        media = somaProdutos / (somaCargas * 100);
        cout << fixed << setprecision(4) << media << endl;

        somaProdutos = 0;
        somaCargas = 0;
    }

    return 0;
}
