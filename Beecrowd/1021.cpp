#include <iostream>

using namespace std;

int main() {

    int qtdNotas = 0;
    int notas[] = {100, 50, 20, 10, 5, 2};
    double moedas[] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};
    double valor;
    
    cin >> valor;
    valor += 0.0001;
    
    int i = 0;
    
    cout << "NOTAS:" << endl;
    while (i < 6){
        while(valor >= notas[i]){
            valor = valor - notas[i];
            qtdNotas += 1;
        }
        cout << qtdNotas << " nota(s) de R$ " << notas[i] << ".00" << endl;
        qtdNotas = 0;
        i++;
    }
    
    i = 0;
    cout << "MOEDAS:" << endl;
    while (i < 6){
        while(valor >= moedas[i]){
            valor = valor - moedas[i];
            qtdNotas += 1;
        }
        if(i == 1 || i == 3){
            cout << qtdNotas << " moeda(s) de R$ " << moedas[i] << "0" << endl;
        }
        else if(i == 0){
            cout << qtdNotas << " moeda(s) de R$ " << moedas[i] << ".00" << endl;
        }
        else{
            cout << qtdNotas << " moeda(s) de R$ " << moedas[i] << endl;
        }
        qtdNotas = 0;
        i++;
    }
    
    return 0;

}
