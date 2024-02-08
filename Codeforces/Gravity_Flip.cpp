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
    cout << endl;
    for(int i = 0; i < qtdLinhas; i++){
        for(int j = 0; j < qtdColunas; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    //lógica para mudar a gravidade
    for(int i = qtdLinhas - 1; i >= 0; i--){
        for(int j = qtdColunas - 1; j >= 0; j--){
            if((qtdColunas - 1) > qtdColunas){
                int temp =  matriz[i][(qtdColunas - 1)];
                matriz[i][(qtdColunas - 1)] = matriz[i][qtdColunas];
                matriz[i][qtdColunas] = temp;
            }
        }
    }
    
    
    // imprime a matriz para teste    
    cout << endl;
    for(int i = 0; i < qtdLinhas; i++){
        for(int j = 0; j < qtdColunas; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
