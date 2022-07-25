#include <stdio.h>


 // Atividade pratica 5 exercicio 2: programa para caixa de uma loja */

int main(void) {
  int opcoes;
  float total, num;

  //inicializar o total como zero
  total = 0;
  //realizar a operacao ate o valor zero ser informado
  while(opcoes!=0){
    printf("Opções:\n 0-Encerrar compra \n 1-Refrigerante R$      8,00 \n 2-Água  R$ 3,00 \n 3-Biscoito  R$ 5,00\n");
    printf("Informe a opcao:");
    scanf("%d", &opcoes);
    if (opcoes!=0){
      printf("Informe a quantidade:");
      scanf("%f", &num);
      while(num<=0){
        printf("Quantidade Invalida. \nInforme a          quantidade:");
        scanf("%f", &num);   
      }
    // adcionar o valor ao total dependendo da opcao selecionada
      switch (opcoes)
       {
            case 1: total+=(8*num);
                    break;
            case 2: total+=(3*num);
                    break;
            case 3: total+=(5*num);
                    break;
            default: printf("\nOpção invalida\n");
        }
      }
    }
    printf("Total a pagar %4.2f",total);
  
  return 0;
}