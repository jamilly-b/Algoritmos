#include <iostream>
using namespace std;

/*Crie um programa que contenha um array de inteiros com 5 elementos. Utilizando apenas
aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.
*/

int main()
{
    int array[5];
    cout << "digite 5 números: "<< endl;
    for(int i =0; i < 5; i++){
        cin >> *(array + i);
    }
  
    for(int i = 0; i < 5; i++){
        cout << *(array + i) * 2<< " ";
    }
  
    return 0;
}
