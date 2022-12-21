/* Faça um programa que peça 3 números inteiros ao usuário, 
armazene em um vetor, depois mostre o valor de cada elemento do vetor, 
assim como seu índice.*/

#include <stdio.h>

int main()
{
    int i, notas[3];
    
    for(i = 0; i < 3; i++){
        printf("nota %d: ", i+1);
        scanf("%d", &notas[i]);
    }
    for(i=0 ; i < 3 ; i++){
        printf("nota %d = %d\n", i+1, notas[i]);
    }        
    
    return 0;
}

/*Faça um programa em C que peça ao usuário duas notas que ele tirou e mostre a média.
Use vetores! Aliás, use somente um vetor para essas três variáveis.*/

#include <stdio.h>

int main()
{
    int i, notas[2];
    float soma = 0;
    for(i = 0; i < 2; i++){
        printf("nota %d: ", i+1);
        scanf("%d", &notas[i]);
        soma += notas[i];
    }
    printf("média: %.1f", soma/2);
    
    return 0;
}
