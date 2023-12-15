#include <iostream>
using namespace std;

string espacoLinha(int qtdAsteriscos, int contador){
    string espaco;
    for(int i = 0; i < (qtdAsteriscos - contador)/2; i++){
        espaco += " ";
    }
    return espaco;
}

string asteriscoLinha(int contador){
    string asterisco;
    for(int i = 0; i < contador; i++){
        asterisco += "*";
    }
    return asterisco;
}

string linha(int qtdAsteriscos, int contador){
    string linha, espaco = " ", asterisco = "*";

    linha += espacoLinha(qtdAsteriscos, contador);
    linha += asteriscoLinha(contador);

    return linha;
}

int main() {
    int qtdAsteriscos;
    int contador;
    cin >> qtdAsteriscos;
    
    for(contador = 1; contador <= qtdAsteriscos; contador+=2){
        cout << linha(qtdAsteriscos, contador) << endl;
    }

    for(contador = 1; contador < 4; contador+=2){
        cout << linha(qtdAsteriscos, contador) << endl;
    }

}
