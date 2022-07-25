#include <stdio.h>

int main(void) {
  
  float saldo_inicial, valor; // variaveis de entrada    
  int op ; // variavel de entrada

  float saldo_final; // variavel de saida

  printf("Informe o saldo inicial da conta:\n");
  scanf("%f", &saldo_inicial);


  printf("Qual operação você deseja realizar?\n");
  scanf("%d", &op);

    

// Realizer a operação de acordo com o codigo inserido
  if (op==0){
    printf("Qual valor você deseja depositar?\n");
  scanf("%f", &valor); 
    saldo_final=saldo_inicial+valor;
  } 
  else if (op==1){
    printf("Qual valor você deseja sacar?\n");
  scanf("%f", &valor);
    if(valor>saldo_inicial){
      printf("Saldo insuficiente\n");
      saldo_final=saldo_inicial;
    }
    else{
      saldo_final=saldo_inicial-valor;
    }
  }
  else {
    printf("Qual valor você deseja transferir?\n");
  scanf("%f", &valor);
    if(valor>saldo_inicial){
      printf("Saldo insuficiente\n");
      saldo_final=saldo_inicial;
    }
    else{
      printf("Informe o numero da conta para transferência:\n");
  scanf("%f", &valor);
      saldo_final=saldo_inicial-valor;
    }
  }

  printf("O saldo final é %4.2f  \n",saldo_final); 
  
    return 0;
}