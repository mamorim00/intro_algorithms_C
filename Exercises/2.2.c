
#include <stdio.h>

/*
Exercicio 2 da atividade pratica 2

Escreva um programa que leia a frequência (número de aulas assistidas) de um aluno, as notas de duas provas (P1 e P2), as notas das aulas práticas (AP) e a nota do trabalho final (NT). Calcule a média final (MF) conforme a ponderação usada na disciplina INF01202, ou seja, MF = 0.3*P1 + 0.45*P2 + 0.15*AP + 0.1*TF, e determine o conceito final do aluno, conforme informado na página da disciplina. Ao final, imprima na tela a nota final (com uma casa decimal) e o conceito.
Obs. se a frequência for menor do que 75% (há 45 aulas no total), o aluno ficará com FF (independente de MF). Não é necessário considerar que a não entrega do trabalho impede o aluno de ficar com A.

Importante lembrar que:
MF >= 8,5 : Conceito A
8,5 > MF >= 7,5 : Conceito B
7,5 > MF >= 6,0 : Conceito C
Frequência menor que 75%: Conceito FF
MF < 6,0: Conceito D


*/

int main(){
  
  float P1, P2,AP,NT; // variaveis de entrada e auxiliares   
  int freq ; // variavel de entrada

  float MF; // variavel de saida

  printf("Entre a frequência (número de aulas assistidas):\n");
  scanf("%d", &freq);

  printf("Entre a nota da prova 1:\n");
  scanf("%f", &P1);

  printf("Entre a nota da prova 2:\n");
  scanf("%f", &P2);

  printf("Entre a nota das aulas práticas:\n");
  scanf("%f", &AP);

  printf("Entre a nota do trabalho final:\n");
  scanf("%f", &NT);


  MF = 0.3*P1 + 0.45*P2 + 0.15*AP + 0.1*NT; // calcular a media final
// utilizar if, else if e else para selecionar o conceito de acordo com a MF
  if (freq<45){
    printf("A nota final é %4.2f e o conceito é FF \n",MF);
  }
    // se a freq>45 
  else if (MF<6){
    printf("A nota final é %4.2f e o conceito é D \n",MF);
  }
  else if (MF<=7.5){
    printf("A nota final é %4.2f e o conceito é C \n",MF);
  }
  else if (MF<=8.5){
    printf("A nota final é %4.2f e o conceito é B \n",MF);
  }
  else {
    printf("A nota final é %4.2f e o conceito é A \n",MF); 
  }


    return 0;
}