#include <stdio.h>
#include <stdbool.h> //biblioteca para que o while(true) funcione

int main()
{
        
/*
etapas:
    - somar os valores
    - transformar o resultado em string 
    - fazer um loop buscando o valor 0 na string
    - remover os valores 0
    - imprimir o valor
*/ 
    int m, n, soma;
    char str[20];
    
    while(true){
        scanf("%d", &m);
        scanf("%d", &n);

        // o programa continua até que essa condição seja verdadeira
        if(m == 0 && n == 0){
            break;
        }
        
        soma = m + n;

        // converte o numero em string
        sprintf(str, "%d", soma);

        // percorre o vetor até que encontre "\0", que indica o fim de um vetor de char (string)
        for(int i = 0; str[i] != '\0'; i++){
            //verifica se o caractere esta dentro desse intervalo (excluimos o 0)
            if(str[i] >= '1' && str[i] <= '9'){
                printf("%c", str[i]);
            }
        }
        printf("\n");
    }
            
    return 0;
}
