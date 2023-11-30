#include <iostream>
using namespace std;

// Escreva um programa que contenha duas variaveis inteiras. Compare seus endereços e exiba o maior endereço.

int main()
{
    int a = 10, b = 10;

    int * ptrA = &a;
    int * ptrB = &b;

    
    if(ptrA > ptrB){
        cout << "Endereço da maior variável: " << ptrA << endl;
    }
    
    else{
        cout << "Endereço da maior variável: " << ptrB << endl;
    }
    
    cout << "\nEndereço da variável A: " << ptrA << "\nEndereço da variável B: " << ptrB << endl;
    
    return 0;
}
