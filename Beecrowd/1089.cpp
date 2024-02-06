#include <iostream>
using namespace std;

int contadorPicos(int *valores, int num) {
    int pico = 0;

    //se o primeiro é pico
    if ((valores[0] > valores[1] && valores[0] > valores[num - 1]) || (valores[0] < valores[1] && valores[0] < valores[num - 1])) {
        pico++;
    }

    //se o ultimo é pico
    if ((valores[num - 1] > valores[0] && valores[num - 1] > valores[num - 2]) || (valores[num - 1] < valores[0] && valores[num - 1] < valores[num - 2])) {
        pico++;
    }

    // Verificar picos no restante da sequência
    for (int i = 1; i < num - 1; i++) {
        // pico alto
        if (valores[i] > valores[i - 1] && valores[i] > valores[i + 1]) {
            pico++;
        }

        // pico baixo
        if (valores[i] < valores[i - 1] && valores[i] < valores[i + 1]) {
            pico++;
        }
    }

    return pico;
}

int main() {
    int num;
    while (true) {
        cin >> num;

        if (num == 0) {
            break;
        }

        int valores[num];

        for (int i = 0; i < num; i++) {
            cin >> valores[i];
        }

        cout << contadorPicos(valores, num) << endl;
    }

    return 0;
}
