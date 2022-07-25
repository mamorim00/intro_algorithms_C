#include <stdio.h>

int main(void) {
  
  int codigo_1, codigo_2, codigo_3, pop_1, pop_2, pop_3; // variaveis de entrada
  
  float media ; // variaveis de entrada

  printf("Informe o identificador e a população do primeiro município:\n");
  scanf("%d %d", &codigo_1, &pop_1);
  
  printf("Informe o identificador e a população do segundo município:\n");
  scanf("%d %d", &codigo_2, &pop_2);
  
  printf("Informe o identificador e a população do terceiro município:\n");
  scanf("%d %d", &codigo_3, &pop_3);

media= (pop_1+pop_2+pop_3)/3.0;
printf("Municípios com população maior ou igual à média:");
// imprimir os municipiuos com pop>media
  if (pop_1>media){ 
    printf(" %d ", codigo_1); 
  } 
  if (pop_2>media){ 
    printf(" %d  ", codigo_2); 
  } 
  if (pop_3>media){ 
    printf(" %d  ", codigo_3); 
  } 
    return 0;
}