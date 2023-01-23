/* 1. Faça um programa que possua um vetor denominado A que armazene 6 numeros inteiros. O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
(d) Mostre na tela cada valor do vetor A, um em cada linha.*/

#include <stdio.h>

int main()
{
    int i;
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma = (A[0] + A[1] + A[5]);
    printf("A soma dos vetores A[0], A[1] e A[5] é igual a %d\n", soma);
    A[3] = 100;
    for(i = 0; i < 6; i++){
        printf("%d\n", A[i]);
    }

    return 0;
}

/*2. Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos.*/

#include <stdio.h>

int main()
{
    int i, num, valor[6];
    for(i = 0; i < 6; i++){
        printf("digite o %d° numero: ", i+1);
        scanf("%d", &num);
        valor[i] = num;
    }

    for(i = 0; i < 6; i++){
        printf("%d\n", valor[i]);
    }
    
    return 0;
}

/*3. Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das componentes deste vetor, armazenando o resultado
em outro vetor. Os conjuntos tem 10 elementos cada. Imprimir todos os conjuntos.*/

#include <stdio.h>

int main()
{
    int conjunto[10] = {1,2,3,4,5,6,7,8,9,10};
    int quadrado[10];
    int i;
    
    for(i = 0; i < 10; i++){
        quadrado[i] = (conjunto[i] * conjunto[i]);
    }
    for(i = 0; i < 10; i++){
    printf("%d ao quadrado é %d \n", conjunto[i], quadrado[i]);
    }
    
    return 0;
}

/*4. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. 
Ao final seu programa devera escrever a soma dos valores encontrados nas respectivas posições X e Y. */

#include <stdio.h>

int main()
{
    int vetor[8];
    int i, num, posicao, soma;
    for(i = 0; i < 8; i++){
        printf("digite um numero: ");
        scanf("%d", &num);
        vetor[i] = num;
    }
    printf("\nVetor: ");
    for(i = 0; i < 8; i++){
        printf("%d ", vetor[i]);
    }
    soma = 0;
    for(i = 0; i < 2; i++){
        printf("\nqual posição do vetor você deseja [0-7]: ");
        scanf("%d", &posicao);
        printf("no vetor criado, a posição %d é igual a %d \n", posicao,vetor[posicao]);
        soma += vetor[posicao];
    }
    printf("A soma dos valores encontrado nas posições escolhidas é igual a %d.", soma);
    
    return 0;
}
/*5. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.*/

#include <stdio.h>

int main()
{
    int vetor[10];
    int i, num, n, contagem = 0;
    for(i = 0; i < 10; i++){
        printf("digite um numero: ");
        scanf("%d", &num);
        vetor[i] = num;
        
    }
    printf("\nVetor criado: ");
    for(i = 0; i < 10; i++){
        printf("%d ", vetor[i]);  
    }
    printf("\nOs numeros pares do vetor são: ");
    for(i = 0; i < 10; i++){
        if(vetor[i] % 2 == 0){
            contagem = contagem + 1;
            int par[contagem];
            par[n] = vetor[i];
            printf("%d ", par[n]);
        }
    }
    printf("\nO vetor possui %d numeros pares.", contagem);
    
    return 0;
}




