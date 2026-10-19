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
int idade;
int temIngresso;
printf("Digite sua idade: ");
scanf("%d", &idade);
printf("Possui ingresso? (1 - sim/ 0 - não)");
scanf("%d", &temIngresso);


if(idade >= 1 && temIngresso){
   printf("Entranda permitida!\n");
}else{
   printf("Entrada não permitida!\n");
}




return 0; 
}
