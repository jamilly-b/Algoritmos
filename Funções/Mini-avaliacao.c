/*1)  Escreva uma função que recebe, por parâmetro, dois valores X e Z e calcula e retorna X elevado a z. 
(sem utilizar funções ou operadores de potência prontos)*/

#include <stdio.h>
int elevado(int, int);

int main()
{
    int X,Z;
    printf("Digite dois números (X e Z): ");
    scanf("%d %d", &X, &Z);
    printf("%d elevado a %d é igual a %d", X, Z, elevado(X,Z));

    return 0;
}

int elevado(X, Z){
    int i, quadrado, potencia = 1;
    quadrado = X*X;
    if (Z > 2){
        for(i = 1; i<= Z; i++){
            potencia = potencia * X;
        }
    }
    
    return ((Z > 2) ? potencia : quadrado);
}

/*2) Faça uma função que receba por parâmetro um inteiro positivo e retorne a raiz quadrada desse número.
(sem utilizar funções ou operadores de potência prontos). Pense numa estratégia de aproximação.*/

#include <stdio.h>

float raiz(int);

int main()
{
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("a raiz quadrada de %d é igual a %.1f", numero, raiz(numero));

    return 0;
}

float raiz(int num){
    float i = 0; 
    int teste;
    
    while(i < num){
        teste = i * i;
        if (teste == num){
            break;
        }
        i = i + 0.01;
    }

    return (i);
}

/*3)Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S.

S = 1 + 1/1! + ½! + 1/3! + 1 /N! */




