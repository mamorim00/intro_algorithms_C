#include <stdio.h>
#include <math.h>

 // Atividade pratica 5 exercicio 1: programa para auxiliar uma campanha para arrecadação de doações. */

int main() {
  
  
  float valor,total,doacao, maior; // variaveis de entrada

  printf("Informe o valor que se deseja arrecadar:\n");
  scanf("%f", &valor);
  
  //Inicializar a variavel total como 0
  total=0;
  maior=0;
  

  // criar um loop que le doacoes ate chegar no valor necessario

  while(total<valor){
    printf("Informe o valor da doação:\n");
    scanf("%f", &doacao);
    while(!(doacao>0)){
      printf("Informe um valor valido:\n");
      scanf("%f", &doacao);
    }
    // adcionar doacao ao total
    total+=doacao;
     //conferir se é a maior doacao
    if(doacao>maior){
      maior=doacao;
    }
  }

   

    printf("Maior Valor %4.2f :\n", maior);
    printf("Total %4.2f :\n", total);
    
    
  
  return 0;
}