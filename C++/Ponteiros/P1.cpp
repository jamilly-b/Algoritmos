#include <iostream>
using namespace std;

/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. 
Associe as variaveis aos ponteiros (use &). Modifique os valores de cada variavel usando os ponteiros. 
Imprima os valores das variáveis antes e após a modificação.*/

int main()
{
    int i = 15;
    float f = 3;
    char c = 'z';

    int *ponteiroINT = &i;
    float *ponteiroFloat = &f;
    char *ponteiroChar = &c;
    
    cout << "Antes da modificação: " << i << " " << f << " " << c << endl;
    
    *ponteiroINT = 2;
    *ponteiroFloat = 3.3;
    *ponteiroChar = 'b';
    
    cout << "Depois da modificação: " << i << " " << f << " " << c << endl;
    
    return 0;
}
