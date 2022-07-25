#include <stdio.h>
#define QTD_CONTAS 3

 // Atividade pratica 6 exercicio 1: programa para caixa de um banco otimizado */


int main(void) {
  
  float contas[QTD_CONTAS],saldo_inicial, valor; // variaveis de entrada    
  int i, op, num_conta, num_conta_2 ; // variaveis de entrada

  for (i=0;i<QTD_CONTAS;i++){
    printf("Informe o saldo inicial da conta %d:\n", i);
    scanf("%f", &contas[i]);  
    while (contas[i]<0){
      printf("Informe o saldo inicial da conta:\n");
      scanf("%f", &contas[i]);
    }
  }
    
  while(op!=0){
    printf("Opções:\n 0 - Sair \n 1 - Exibir saldo \n 2 - Depósito \n 3 - Saque \n 4 – Transferência \n");
    printf("Informe a opcao:");
    scanf("%d", &op);
    if (op!=0){
      switch(op){
        // Caso olhar saldo, somente imprimir o saldo
        case 1: printf("Que conta voce deseja utilizar?\n");
                scanf("%d", &num_conta);
                if (num_conta>=0&& num_conta<QTD_CONTAS){
                  printf("O saldo é %4.2f \n",contas[num_conta]);
                }
                else{
                  printf("Conta invalida!\n");  
                }
                break;
        // Caso depósito, somente adcionar a conta
        case 2: printf("Que conta voce deseja utilizar?\n");
                scanf("%d", &num_conta);
                if (num_conta>=0&& num_conta<QTD_CONTAS){
                  printf("Qual valor você deseja depositar?\n");
                  scanf("%f", &valor);
                  if (valor>0){
                    contas[num_conta]=contas[num_conta]+valor;
                    printf("Novo saldo eh %4.2f \n",contas[num_conta]);
                  }
                  else{
                    printf("valor invalido! \n");
                  }
                }
                else{
                          printf("Conta invalida!\n");  
                        }
                break;
        // caso saque, ver se tem o dinheiro e sacar
        case 3: printf("Que conta voce deseja utilizar?\n");
                scanf("%d", &num_conta);
                if (num_conta>=0&& num_conta<QTD_CONTAS){
                  printf("Qual valor você deseja sacar?\n");
                  scanf("%f", &valor);
                  if(valor>contas[num_conta]){
                    printf("Saldo insuficiente\n");
                  }
                  else{
                    contas[num_conta]=contas[num_conta]-valor;
                    printf("Novo saldo eh %4.2f \n",contas[num_conta]);
                  }
                }
                else{
                          printf("Conta invalida!\n");  
                        }
                break;
        // caso transferencia, add valor em uma e sub na outra
        case 4: printf("Informe o numero da conta de origem para transferência:\n");
                scanf("%d", &num_conta);
                printf("Informe o numero da conta de destino para transferência:\n");
                scanf("%d", &num_conta_2);
                if (num_conta>=0&& num_conta<QTD_CONTAS&&num_conta_2>=0&& num_conta_2<QTD_CONTAS){
                printf("Qual valor você deseja transferir?\n");
                scanf("%f", &valor);
                if (valor<contas[num_conta]){
                  contas[num_conta]-=valor;
                  contas[num_conta_2]+=valor;
                  printf("Novo saldo  da conta %d eh %4.2f \n",num_conta, contas[num_conta]);
                  printf("Novo saldo da conta %d eh  %4.2f \n",num_conta_2, contas[num_conta_2]);
                }
                else{
                  printf("Saldo insuficiente");
                }
                }
                else{
                  printf("conta invalida \n");
                }
                break;
                }

    }
    else{
      printf("operacao finalizada");
    }
    }

  
    return 0;
}