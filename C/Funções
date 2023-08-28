## Lista 07

/*1. Crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro*/

#include <stdio.h>

void dobro(){
  int num, dobro;
  printf("insira um número: ");
  scanf("%d", &num);
  dobro = num * 2;
  printf("o dobro de %d é %d", num, dobro);
}
int main(){
  dobro();
}

  /* Sem usar void */

#include <stdio.h>

int dobro(int numero, int dobro){

dobro = numero * 2;

return dobro;

}

int main()
{
    int n,d;
    printf("digite um numero: "); 
    scanf("%d", &n);
    printf("%d", dobro(n,d));

    return 0;
}

/*2. Faça uma função que receba a data atual (dia, mês e ano em inteiro) e exiba-a na tela no formato
textual por extenso. Exemplo: Data: 01/01/2000, Imprimir: 1 de janeiro de 2000.*/

#include <stdio.h>
int data(int dia, int mes, int ano){

switch(mes){
  case 1:
  printf("%d de janeiro de %d", dia,ano);
  break;
  case 2:
  printf("%d de fevereiro de %d", dia,ano);
  break;
  case 3:
  printf("%d de março de %d", dia,ano);
  break;
  case 4:
  printf("%d de abril de %d", dia,ano);
  break;
  case 5:
  printf("%d de maio de %d", dia,ano);
  break;
  case 6:
  printf("%d de junho de %d", dia,ano);
  break;
  case 7:
  printf("%d de julho de %d", dia,ano);
  break;
  case 8:
  printf("%d de agosto de %d", dia,ano);
  break;
  case 9:
  printf("%d de setembro de %d", dia,ano);
  break;
  case 10:
  printf("%d de outubro de %d", dia,ano);
  break;
  case 11:
  printf("%d de novembro de %d", dia,ano);
  break;
  case 12:
  printf("%d de dezembro de %d", dia,ano);
  break;
    default:
    printf("Data errada!");
}

return(dia,mes,ano);
}

int main(){

int dia,mes,ano;
printf("Entre com o dia: ");
scanf("%d", &dia);
printf("Entre com o mes: ");
scanf("%d", &mes);
printf("Entre com o ano: ");
scanf("%d", &ano);
data(dia,mes,ano);

return (0);
}


/*3. Faça uma função para verificar se um número é positivo ou negativo. Sendo que o valor de retorno
será 1 se positivo, -1 se negativo e 0 se for igual a 0.*/

#include<stdio.h>

int verificar(int num){

  if(num > 0){
    printf("1");
  }
  else if(num == 0){
    printf("0");
  }
  else{
    printf("-1");
  }
}
int main(){
    int num;
    printf("digite um numero: ");
    scanf("%d", &num);
    verificar(num);
}

/*4. Faça uma função para verificar se um número é um quadrado perfeito. Um quadrado perfeito é um número inteiro não
negativo que pode ser expresso como o quadrado de outro numero inteiro. Ex: 1, 4, 9...*/

#include<stdio.h>

void quadradop(){
  int num, ver = 1;
  printf("digite um numero: ");
  scanf("%d", &num);
  if(num > 0){
    while(ver < num){

      if((ver * ver) == num){
      printf("%d é um quadrado perfeito\n", num); break;
      }
      ver ++;
    }
    if(ver == num){
      printf("%d não é um quadrado perfeito", num);
    }
  }
  else{
    printf("números negativos não podem ser quadrados perfeitos.");
  }
}
int main(){
  quadradop();
  return 0;
}

/*5. Faça uma função e um programa de teste para o cálculo do volume de uma esfera. Sendo que o raio é passado
por parâmetro. V = 4/3 ∗ π ∗ R^3.*/

#include <stdio.h>

float volume(float raio){
  float vol, pi;
  pi = 3.14;
  vol = (1.33 * pi * (raio * raio * raio));

  return(vol);
}

int main()
{   
    float raio;
    printf("digite o valor do raio da esfera: ");
  scanf("%f", &raio);
  printf("o volume da esfera é: %.2f\n", volume(raio));
  return 0;
}

/*6. Faça uma função que receba 3 números inteiros como parâmetro, representando horas, minutos e segundos, e os
converta em segundos.*/

#include <stdio.h>

int conversao_segundos(int hora, int min, int seg){
  int soma;
  soma = hora * 3600 + min * 60 + seg;

  return(soma);
}

int main()
{
    int hora, min, seg;
  printf("digite a hora: ");
  scanf("%d", &hora);
  printf("\ndigite os minutos: ");
  scanf("%d", &min);
  printf("\ndigite os segundos: ");
  scanf("%d", &seg);

  printf("\n%d horas + %d minutos + %d segundos é equivalente a %d segundos.",hora, min, seg, conversao_segundos(hora,min,seg));

  return 0;
}

/*7. Faça uma função que receba uma temperatura em graus Celsius e retorne-a convertida em graus Fahrenheit. 
A fórmula de conversão é: F = C ∗ (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/

#include <stdio.h>

void conversao(){
  float c, f;
  printf("Digite a temperatura em graus Celsius: ");
  scanf("%f", &c);
  f = c * (9.0/5.0) + 32.0;
  printf("\nA temperatura em Fahrenheit é %.2f°", f);
}

int main()
{
  conversao();
  return 0;
}

/*8. Sejam a e b os catetos de um triangulo, onde a hipotenusa é obtida pela equação: hipotenusa =√a^2+ b^2. 
Faça uma função que receba os valores de a e b e calcule o valor da hipotenusa através da equação.*/

#include <stdio.h>
#include <math.h>

int hipotenusa(int a, int b){
  float hip;
  hip = sqrt((a*a)+(b*b));

  return(hip);
}

int main()
{
    int a,b;
  printf("Digite o cateto a: ");
  scanf("%d", &a);
  printf("Digite o cateto b: ");
  scanf("%d", &b);

  printf("A hipotenusa é igual a %d", hipotenusa(a,b));
  return 0;
}

/*9. Faça uma função que receba dois números e retorne qual deles é o maior.*/

#include <stdio.h>
void maior(int num1, int num2){

if (num1>num2){
  printf("O numero %d é maior que o numero %d", num1,num2);
}
else{
  printf("O numero %d é maior que o numero %d", num2,num1);
}

}

int main()
{
  int num1,num2;
  printf("digite um numero: ");
scanf("%d", &num1);
printf("digite outro numero: ");
scanf("%d", &num2);
maior(num1,num2);

return 0;
}

/*10. Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. Se a letra for A, a
função deverá calcular a média aritmética das notas do aluno; se for P, devera calcular a média ponderada, 
com pesos 5, 3 e 2.*/

#include <stdio.h>

void media(float a, float b, float c, char tipo){
  switch(tipo){
    case 'A': printf("A média aritimetica é %.2f",(a + b + c)/3); break;
    case 'P': printf("A média ponderada é %.2f",(a * 5 + b * 3 + c * 2)/10); break;
  }
}

int main()
{
  float nota1,nota2,nota3;
  char tipo;
  printf("digite a 1° nota: ");
  scanf("%f", &nota1);
  printf("digite a 2° nota: ");
  scanf("%f", &nota2);
  printf("digite a 3° nota: ");
  scanf("%f", &nota3);
  printf("O tipo de media sera aritmetica ou ponderada? \t[A/P]: ");
  scanf(" %c", &tipo);
  media(nota1,nota2,nota3,tipo);

  return 0;
}

/*11. Faça uma função que receba dois valores numéricos e um símbolo. Este símbolo representara a operação que
se deseja efetuar com os números. Se o símbolo for + devera ser realizada uma adição, se for − uma subtração,
se for / uma divisão e se for ∗ será efetuada uma multiplicação.*/

#include <stdio.h>
void calculadora(){
  float num1,num2;
  char tipo;
  printf("digite um numero: ");
  scanf("%f", &num1);
  printf("digite outro numero: ");
  scanf("%f", &num2);
  printf("Qual tipo de operação voce deseja fazer? \n[+, -, /,*]: ");
  scanf(" %c", &tipo);
  switch(tipo){
    case '+': printf("a soma dos numeros é igual a %.2f", num1 + num2); break;
    case '-': printf("a subtração dos numeros é igual a %.2f", num1 - num2); break;
    case '*': printf("a multiplicação dos numeros é igual a %.2f", num1 * num2); break;
    case '/': printf("a divisão dos numeros é igual a %.2f", num1 / num2); break;
  }
}

int main()
{
  calculadora();

  return 0;
}

/*12. Faça uma função chamada DesenhaLinha. Ele deve desenhar uma linha na tela usando vários símbolos de igual (Ex:========). 
A função recebe por parâmetro quantos sinais de igual serão mostrados.*/

#include <stdio.h>
void DesenhaLinha(){
  int num, i = 1;
  printf("digite quantos sinais deverao ser mostrados: ");
  scanf("%d", &num);
  while(i <= num){
    printf("=");
    i++;
  }
}
int main()
{
  DesenhaLinha();
  return 0;
}

/*13. Faça uma função que receba dois números inteiros positivos por parâmetro e retorne a 
soma dos N números inteiros existentes entre eles.*/

#include <stdio.h>
void soma(){
  int num1,num2, soma, resul,i = 1;
  printf("digite um numero: ");
  scanf("%d", &num1);
  printf("digite outro numero: ");
  scanf("%d", &num2);
  resul = 0;
  if(num1 > num2){
    while(i < num1 - 1){
      soma = num2 + i;
      i++;
      resul += soma;
    }
    printf("%d", resul);
  }
  else{
    while(i < num2 - 1){
      soma = num1 + i;
      i++;
      resul += soma;
    }
    printf("%d", resul);
  }
}
int main()
{
  soma();
  return 0;
}

/*14. Faça uma função que receba por parâmetro dois valores X e Z. Calcule e retorne o resultado de X^Z
para o programa principal. Atenção não utilize nenhuma função pronta de exponenciação.*/
#include <stdio.h>
void potencia(){
  int x,z,i,potencia=1;
  printf("insira o numero da base (x): ");
  scanf("%d", &x);
  printf("insira o numero do expoente (z): ");
  scanf("%d", &z);
  for (i=1; i<=z; i++)
    potencia = potencia*x;
  printf("%d^%d é igual a %d",x,z,potencia);
}

int main()
{
  potencia();
  return 0;
}

### Mini-Avaliação
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

#include <stdio.h>

double fatorial(int n);

int main()
{
    int n;
    double f;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    
    f = fatorial(n);
    printf("O fatorial de %d é igual a %.0lf", n, f);

    return 0;
}

double fatorial(int n){
    int fat;
    
    if (n <= 1){
        return (1);
    }
    
    else {
        fat = n * fatorial(n - 1);
        return(fat);
    }
}
