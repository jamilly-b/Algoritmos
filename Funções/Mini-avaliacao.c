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

#include <stdio.h>

float resultado(int);
int fatorial(int);

int fatorial(int n){
    int fat = 1;
    while( n > 0 ){
        fat *= n--;}
    return(fat);
}

float resultado(int n){
    int i;
    float s = 0; 
    for(i = 1; n <= 1 ; n--){
        s += (i / fatorial(n));
    }
    
    return (s);
}


int main()
{
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    printf("%.2f", resultado(numero));
    
    return 0;
}

/*4) Faça uma função que leia 50 valores inteiros e retorna o maior deles.*/

#include <stdio.h>

int maiorvalor();
int main(){
    int numero;
    printf ("%d", maiorvalor());
    return 0;
}

int maiorvalor(){
    int i,numero,maior;
    printf ("digite um numero: ");
    scanf ("%d", &numero);
    maior = numero;

    for (i = 1 ; i < 5; i++){
        printf ("digite um numero: ");
        scanf ("%d", &numero);
        if (numero > maior)
        maior = numero;
    }

    return (maior);
}

/*5) Faça uma função que receba um valor inteiro e positivo e calcula o seu fatorial.*/

#include <stdio.h>

int fatorial();
int main(){
    int numero;
    printf ("digite um numero: ");
    scanf ("%d", &numero);
    printf ("%d", fatorial(numero));
    return 0;
}

int fatorial(int num){
    int fat = 1;
    while(num >= 1){
        fat *= num;
        num --;
    }
    
    return (fat);
}

/*6) Faça uma função recursiva que receba um valor inteiro e positivo e calcule o seu fatorial. 
(Veja o código da aula mas não copie. Tente fazer com seu entendimento)*/










