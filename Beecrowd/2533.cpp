#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int M;

    while (cin >> M) {
        double notas, cargaHoraria;
        double somaPonderada = 0, totalCargaHoraria = 0;

        for (int i = 0; i < M; i++) {
            cin >> notas >> cargaHoraria;
            somaPonderada += notas * cargaHoraria; 
            totalCargaHoraria += cargaHoraria; 
        }

        double IRA = (somaPonderada / (totalCargaHoraria * 100)); 

        cout << fixed << setprecision(4) << IRA << endl;
    }

    return 0;
}
