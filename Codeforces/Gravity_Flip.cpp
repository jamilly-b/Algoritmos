/*https://codeforces.com/contest/405/problem/A*/
#include <iostream>
using namespace std;

int main()
{
    int qtdColunas;
    
    cin >> qtdColunas;
    
    int arrayValoresColunas[qtdColunas];
    
    for(int i = 0; i < qtdColunas; i++){
       cin >> arrayValoresColunas[i] ;
    }
    
    // ordena o array de colunas
    bool troca = true;
    for(int i = 0; i < qtdColunas - 1 && troca; i++){
        troca = false;
        for(int j = 0; j < qtdColunas - 1 - i; j++){
            if(arrayValoresColunas[j] > arrayValoresColunas[j + 1]){
                int temp = arrayValoresColunas[j];
                arrayValoresColunas[j] = arrayValoresColunas[j + 1];
                arrayValoresColunas[j + 1] = temp;
                troca = true;
            }
        }
    }
    
    int maiorValorArray = arrayValoresColunas[0];
    
    for(int i = 1; i < qtdColunas; i++){
        if(maiorValorArray < arrayValoresColunas[i]){
            maiorValorArray = arrayValoresColunas[i];
        }
    }
    
    int qtdLinhas = maiorValorArray;
    
    short matriz[qtdLinhas][qtdColunas];
    
    //zera os valores da matriz
    for(int i = 0; i < qtdLinhas; i++){
        for(int j = 0; j < qtdColunas; j++){
            matriz[i][j] = 0;
        }
    }
    
    // lógica para inserir os blocos na matriz
    for(int j = 0; j < qtdColunas; j++){
        int contador = 0;
        for(int i = (qtdLinhas - 1); contador < arrayValoresColunas[j]; i--){
            matriz[i][j] = 1;
            contador++;
        }
    }
    
    // imprime a matriz para teste
    // cout << endl;
    // for(int i = 0; i < qtdLinhas; i++){
    //     for(int j = 0; j < qtdColunas; j++){
    //         cout << matriz[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    int arraySomaColunas[qtdColunas];
    for(int j = 0; j < qtdColunas; j++){
        int soma = 0;
        for(int i = 0; i < qtdLinhas; i++){
            soma += matriz[i][j];
        }
        arraySomaColunas[j] = soma;
    }
    
    for (int i = 0; i < qtdColunas; i++){
        cout << arraySomaColunas[i] << " ";
    }

    return 0;
}
