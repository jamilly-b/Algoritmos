### Lista 03

Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, considerando números maiores que 0. 

	#include <stdio.h>

	int main()
	{
		int produto = 3, contador = 0, multiplo;

		while(contador < 5){
			contador = contador + 1;
			multiplo = produto * contador;
			printf("É multiplos de 3: %d\n", multiplo);
		}

		return 0;
	}

Escreva um programa que escreva na tela, de 1 ate 100, de 1 em 1, 3 vezes. A primeira vez deve usar a estrutura de repetição˜ for, a segunda while, e a terceira do while.

	#include <stdio.h>

	int main()
	{
		int a,b,c;
		printf("Comando For \n");
		for(a=1; a <= 100; a++){
			printf("%d ", a);
		}
		printf("\n");
		printf("Comando While \n");
		while(b<100){
			b++;
			printf("%d ", b);
		}

		printf("\n");
		printf("Comando Do while \n");
		do{
			c++;
			printf("%d ", c);
		} while (c < 100);


		return 0;
	}

Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” após a contagem.

	#include <stdio.h>

	int main()
	{
		int i=10;
		while(i>-1){
			printf("%d ", i);
			i--;
		}
		printf("FIM!");
		return 0;
	}

Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000 em 1000, imprimindo seu valor na tela, ate que seu valor seja 100000 (cem mil). 

	#include <stdio.h>

	int main()
	{
		int i= 0;
		while(i<=100000){
			printf("%d\n", i);
			i = i + 1000;
		}
		return 0;
	}

Faça um programa que peça ao usuário para digitar 10 valores e some-os. 

	#include <stdio.h>

	int main()
	{
		int i = 0;
		float valor, soma;
		while(i<10){
			printf("Digite um valor: ");
			scanf("%f", &valor);
			i = i + 1;
			soma += valor;
		}

		printf("soma: %f", soma);

		return 0;
	}

Faça um programa que leia 10 inteiros e imprima sua media. 

	#include <stdio.h>

	int main() {
		int i = 1;
		float n = 0;
		double soma, media;
		while (i <= 10){
			printf("Digite o %d° valor : ",i);
			scanf("%f", &n);
			soma += n;
			i++;
		}
		media = soma /10;
		printf("%.2lf\n", soma);
		printf("%.2lf\n", media);
	}

Faça um programa que leia 10 inteiros positivos, ignorando nao positivos, e imprima sua media. 

	#include <stdio.h>

	int main() {
		int i = 1;
		float n;
		double soma, media;
		while (i <= 10){
			printf("Digite o %d° valor : ",i);
			scanf("%f", &n); 
			if(n>0){
			soma += n;
			i++;}
		}
		media = soma /10;
		printf("%.2lf\n", soma);
		printf("%.2lf\n", media);
	}
