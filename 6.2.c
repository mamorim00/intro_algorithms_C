#include <stdio.h>
#include <string.h>
#define MAX 20

int main(void) {
  char palavra[MAX], palavra_2[MAX];
  int len,i;
  puts("Insira a palavra:");
  gets(palavra);
  //printf(" palavra 1 eh %s \n", palavra);
  strcpy(palavra_2,palavra);
  //printf(" palavra 2 eh %s \n", palavra_2);
  
  len = strlen(palavra)-1;
  //inverter as palavras
  for (i=0;i<len+1;i++){
    palavra_2[i] = palavra[len-i]; 
  }
  // ver se eh palindromo
  if (strcmp(palavra,palavra_2) == 0){
      printf("Eh palindromo\n");
  }
  else {
      printf("Nao eh palindromo\n");
  }
  
  return 0;
}