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

int opcao;
do{
   printf("\n--- MENU---\n");
   printf("1 - Dizer olá\n");
   printf("2 - Dizer tchau\n");
   printf("0 - Sair\n");
   printf("Escolha: ");
   scanf("%d", &opcao);
   if(opcao == 1){
      printf("ola\n");
   }else if(opcao == 2){
      printf("Tchau!\n");
   }else if(opcao != 0){
      printf("Opcao invalida!\n");
   }
}while(opcao != 0);
printf("Ate mais!\n");
   



return 0; 
}
 


