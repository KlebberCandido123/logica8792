#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>


#define QTD 5

int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

const int ALUNOS = 5;
float notas[ALUNOS];
float soma = 0;
for(int i = 0; i < ALUNOS; i++){
   printf("Nota do aluno %d: ", i + 1);
   scanf("%f", &notas[i]);
   soma += notas[i];
}
printf("\n----NOTAS-----\n");
for(int i = 0; i < ALUNOS; i++){
   printf("Aluno %d: %.1f\n", i + 1, notas[i]);
}
   printf("\nMedia da turma: %.1f\n", soma / ALUNOS);
   
return 0; 
}
 


