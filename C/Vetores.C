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

#Lista 04

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

#Mini-avaliação

//Criar uma função que receba um vetor de caracteres (palavra, vetor de char) e retorne a quantidade de caracteres (int)? 
#include <stdio.h>

int contaCaracter (char []);

int main()
{   
    char *palavra = "marco";
    printf("a palavra %s tem %d caracteres", palavra, contaCaracter(palavra) );
    return 0;
}

int contaCaracter (char palavra [])
{
    int contador=0;
    char controle = palavra [0];
    while (controle != '\0')
    {
        contador++;
        controle=palavra[contador];
    }
    return contador;
}


//Criar uma função que receba um vetor de caracteres (frase, vetor de char) e retorne a quantidade de palavras(int)? 
#include <stdio.h>

int contaPalavra (char []);

int main()
{   
    char *palavra = "marco antonio";
    printf("a frase - %s - tem %d palavras", palavra, contaPalavra(palavra) );
    return 0;
}

int contaPalavra (char palavra [])
{
    int contador=0;
    int contadorPalavra=1;
    char controle = palavra [0];
    while (controle != '\0')
    { 
        if (controle ==' ')
        {
            contadorPalavra++;
        }
        contador++;
        controle=palavra[contador];
    }
    return contadorPalavra;
}

//Criar uma função que receba um vetor de inteiros e retorne o maior valor? 
#include <stdio.h>

int maior (int vetor [], int tamanho);

int main()
{   
    int vetor [10] = {3,87,3,6,12,87,45,98,35,26};
    printf("O maior valor no vetor eh: %d .", maior(vetor,10) );
    return 0;
}


int maior (int vetor [], int tamanho)
{
    int maiorValor = vetor[0];
    int i;
    for (i = 1; i < tamanho; i++ )
    {
        if (maiorValor < vetor [i])
          maiorValor = vetor[i];
        
    }
    return maiorValor;
}


//Criar uma função que receba um vetor de inteiros e retorne o menor valor? 
#include <stdio.h>

int menor (int vetor [], int tamanho);

int main()
{   
    int vetor [10] = {3,87,13,6,12,87,45,98,35,26};
    printf("O menor valor no vetor eh: %d .", menor(vetor,10) );
    return 0;
}


int menor (int vetor [], int tamanho)
{
    int menorValor = vetor[0];
    int i;
    for (i = 1; i < tamanho; i++ )
    {
        if (menorValor > vetor [i])
          menorValor = vetor[i];
        
    }
    return menorValor;
}


//Criar uma função que receba um vetor de inteiros por parâmetro e ordene esse vetor utilizando a função maior OU a função menor das questões anteriores. Inspire-se no método da bolha? 

#include <stdio.h>
int maior (int vetor [], int tamanho);
void ordena ( int vetor[], int tamanho);

int main()
{   int i;
    int vetor [10] = {3,87,32,6,12,86,45,98,35,26};
    for (i=0; i < 10;i++)
    {
       printf ("%d - ", vetor [i]);
        
    }   
    ordena (vetor, 10 );
    printf ("\n");
    for (i=0; i < 10;i++)
    {
       printf ("%d - ", vetor [i]);
    }   
    return 0;
}

void ordena (int vetor [], int tamanho)
{
  int indiceMaior = 0;
  int i, j;
  int maiorLocal;
  int variavelTemporaria;

  for (i=0; i < tamanho;i++)
   {
       maiorLocal = maior (&vetor[i], tamanho - i);
       for (j=i; j<(tamanho); j++)
       {
         if (maiorLocal == vetor[j])
             {
                 indiceMaior = j;
                 break;
             }
       }
        variavelTemporaria = vetor[i];
        vetor [i]=maiorLocal;
        vetor [indiceMaior] = variavelTemporaria;
   }
}

int maior (int vetor [], int tamanho)
{
    int maiorValor = vetor[0];
    int i;
    for (i = 1; i < tamanho; i++ )
    {
        if (maiorValor < vetor [i])
          maiorValor = vetor[i];
        
    }
    return maiorValor;
}



//Crie uma função que receba duas "strings" e retorne um inteiro que identifique se a primeira string está contida na segunda. Exemplo: retorna 0 (zero) se está contida, 1 se não está contida. 
#include <stdio.h>

int contaCaracter (char []);
int contemSubstring(char [], char[]);

int main()
{   
    char *palavra1 = "same";
    char *palavra2 = "adensamento";
    if (contemSubstring (palavra1, palavra2) == 0)
            printf("a palavra %s está contida em %s ", palavra1, palavra2 );
        else
            printf("a palavra %s NÃO está contida em %s ", palavra1, palavra2 );
            
    return 0;
}

int contemSubstring (char palavra1 [] , char palavra2 [] )
{   
    int i;
    int retorno = 1;
    int contadorPalavra1 = 0;
    int contadorPalavra2 = 0;
    char checkPalavra1 = palavra1 [0];
    char checkPalavra2= palavra2 [0];    
    
    if (contaCaracter (palavra1) > contaCaracter(palavra2))
        return 1;
    
    for (i = 0; i < contaCaracter (palavra2) ; i++)
    {
        if (checkPalavra1 == checkPalavra2)
        {
            while ((checkPalavra1 == checkPalavra2) && (contadorPalavra1 < contaCaracter (palavra1)))
            {
                    contadorPalavra1++;
                    checkPalavra1 = palavra1[contadorPalavra1];
                    checkPalavra2 = palavra2[i];
                    i++;
            }
            checkPalavra1 = palavra1[contadorPalavra1 - 1];
            checkPalavra2 = palavra2[i-2];
            
            if (checkPalavra1 != checkPalavra2)
                    retorno = 1;
                else if (contadorPalavra1 >= contaCaracter (palavra1))
                    retorno = 0;
        }
        checkPalavra2 = palavra2[i];
    }
    return retorno;
}


int contaCaracter (char palavra [])
{
    int contador=0;
    char controle = palavra [0];
    while (controle != '\0')
    {
        contador++;
        controle=palavra[contador];
    }
    return contador;
}
