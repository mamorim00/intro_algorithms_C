/* Este programa pega dois inteiros, os soma e exibe o resultado na tela Entradas: dois valores inteiros (lidos via teclado) Saída: a soma dos dois valores lidos */
#include <stdio.h>
int main(void) {
float val1, val2, val3; //Declaracao das variaveis de entrada
float soma, produto; //Declaracao da variavel com o resultado (saida)
printf("Valor do primeiro termo:\n"); scanf("%f", &val1);
printf("Valor do segundo termo:\n"); scanf("%f", &val2);
printf("Valor do terceiro termo:\n"); scanf("%f", &val3);
soma = val1 + val2 + val3;
produto = val1 * val2 * val3; 
printf("Resultado da soma: %f\n", soma); 
printf("Resultado do produto: %f\n", produto);
  return 0;
}