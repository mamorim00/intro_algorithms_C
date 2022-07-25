#include <stdio.h>
#include <math.h>

 //(4.0) Você deve escrever um programa para suportar a realização de uma pesquisa do ministério do trabalho. O programa deve inicialmente ler a quantidade de trabalhadores que serão entrevistados. A seguir, para cada trabalhador o programa deve ler a sua idade, o salário e a turno de trabalho (D-diurno, N-noturno). Ao fim, o programa deve informar a média do salário dos entrevistados, qual a maior idade informada e a quantidade de pessoas entrevistadas de cada turno. */

int main() {
  
  int n,i,maior_idade,diurno,noturno,idade; // variaveis de entrada
  char turno;
  float media,salario,soma_salario ; // variaveis de entrada

  printf("Informe o numero de trabalhadores:\n");
  scanf("%d", &n);
  
  //Inicializar as variaveis como 0
  soma_salario=0;
  maior_idade = 0;
  diurno = 0;
  noturno = 0;
  for(i=0;i<n;i++){
    // coletar os dados de cada trabalhador
    printf("Informe a idade do trabalhador %d:\n",(i+1));
  scanf("%d", &idade);
    printf("Informe o turno de trabalho(D para diurno e N para noturno): \n");
  scanf(" %c", &turno);
    printf("Informe o salario do trabalhador %d:\n",(i+1));
  scanf("%f", &salario);
    // ver se a idade é a maior
    if (idade>maior_idade){
      maior_idade = idade;
    }
    // adcionar o salario a soma de salarios
    soma_salario+= salario;
    // somar os turnos
    if (turno=='D'){
      diurno+=1;
    }
    else if (turno=='N'){
      noturno+=1;
    } 
  }
  media =soma_salario/n;
  printf("Diurno: %d  \n",diurno); 
  printf("Noturno: %d  \n",noturno);
  printf("A maior idade é %d  \n",maior_idade); 
  printf("A media de salarios é %4.2f  \n",media); 

  return 0;
}