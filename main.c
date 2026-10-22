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

float nota; 
do{
   printf("Digite uma nota (0 a 10): ");
   scanf("%f", &nota);
} while(nota < 0 || nota > 10);
printf("Nota valida: %.1f\n", nota);



return 0; 
}
 


