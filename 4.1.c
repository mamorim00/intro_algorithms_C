#include <stdio.h>
#include <math.h>

int main() {
  
  int n,i; // variaveis de entrada
  
  double termo,soma ; // variaveis de entrada

  printf("Informe o numnero de termos para a série:\n");
  scanf("%d", &n);
  
  //Inicializar a soma como 0
  soma=0;
  for(i=0;i<=n;i++){
    termo = 1/(pow(2,i));
    soma=soma+termo;
  }
  printf("A soma é %lf  \n",soma); 

  return 0;
}