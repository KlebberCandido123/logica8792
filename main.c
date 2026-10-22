#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>


struct Pessoa{
   char nome[50];
   int idade;
   float altura;
   float peso;
};


int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

int resposta;
do{
   printf("Executando o programa...\n");
   printf("Deseja continuar? (1- sim / 0 - não):");
   scanf("%d", &resposta);
}while(resposta == 1);
printf("Programa encerrado!\n");



return 0; 
}
 


