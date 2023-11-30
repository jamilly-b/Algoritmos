#include <iostream>
using namespace std;

/*Crie um programa que contenha uma matriz de float com 3 linhas e 3 colunas. 
Imprima o endereço de cada posição dessa matriz.*/


int main()
{
    int linhas = 3, colunas = 3;
    float matriz[linhas][colunas] = {
        {3, 5, 7},
        {2, 6, 8},
        {1, 2, 4}
    }; 
    
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << &matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
