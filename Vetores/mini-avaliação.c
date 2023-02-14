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
