#include <iostream>
using namespace std;

/*Crie um programa que contenha um array de floats com 10 elementos. 
Imprima o endereço de cada posição desse array.*/


int main()
{
    float array[5] = {1, 2, 3, 4, 5};
    cout << "Endereço inicial: " << array << endl;
    for(int i = 0; i < 5; i++){
        cout << "Endereço do " << array[i] << ": " << array + i << endl;
    }
    
    return 0;
}
