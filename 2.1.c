#include <stdio.h>
#include <math.h>
/*
Exercicio 1 da atividade pratica 2

Se uma pessoa investir um valor C em uma aplicação de renda fixa com rendimento mensal r (em %), o montante ao final de n meses será dado por 𝐶 1 + 100 . Escreva
um programa que leia o montante inicial C, o rendimento mensal r e o número de meses da aplicação n (valor inteiro), calcule o montante final e imprima o resultado na tela (usando duas casas decimais para mostrar os centavos).
*/
int main() {
  
  float C, r, temp; // variaveis de entrada e auxiliares   
  int n; // variavel de entrada

  float montante; // variavel de saida

  printf("Entre o valor inicial (em reais)\n");
  scanf("%f", &C);

  printf("Entre o rendimento mensal (percentual):\n");
  scanf("%f", &r);

  printf("Entre o número de meses da aplicação:\n");
  scanf("%d", &n);
  
temp = (1+(r/100)); // valor para ser elevado na potencia 
montante = C*(pow(temp,n)); // calculo do montante final
 

  printf("O montante ao final do período será de %4.2f reais.", montante);

  return 0;
}
