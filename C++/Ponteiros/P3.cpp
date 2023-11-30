#include <iostream>
using namespace std;

/*Faça um programa que leia dois valores inteiros e chame uma função que receba essas duas variáveis e troque o seu conteúdo. 
Em outras palavras, esta função é chamada passando duas variáveis, A e B, por exemplo, e, após a execução da função, 
A conterá o valor de B e B terá o valor de A.*/

void trocaValores(int * a, int * b){
    cout << "valor inicial \n" << "a = "<< *a << "\n" << "b = " << *b << endl;
    
    int x = *a;
    *a = *b;
    *b = x;
    
    cout << "valor final \n" << "a = "<< *a << "\n" << "b = " << *b << endl;
}

int main()
{
    int x = 3;
    int y = 5;
    trocaValores(&x,&y);
    
    return 0;
}
