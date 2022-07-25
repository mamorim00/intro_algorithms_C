#include <stdio.h>

int main() {
  
  int valor_1,valor_2, holder,i; // variaveis de entrada
  
  int soma ; // variaveis de saida

  printf("Informe o valor 1:\n");
  scanf("%d", &valor_1);
  printf("Informe o valor 2:\n");
  scanf("%d", &valor_2);

  // colocar os valores em ordem
  if (valor_2<valor_1){
    holder= valor_1;
    valor_1 = valor_2;
    valor_2 = holder;    
  }
  //Inicializar a soma como 0
  soma=0;
  for(i=(valor_1+1);i<valor_2;i++){
    if(i%2==1){
      soma+=i;
    }
  }
  printf("A soma é %d  \n",soma); 

  return 0;
}