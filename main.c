#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

float lerPoositivo(char mensagem[]){
   float valor;
   do{
      printf("%s", mensagem);
      scanf("%f", &valor);
      if(valor <= 0){
         printf("Valor invalido digite um numero maior que 0.\n");
      }
   }while(valor <= 0);
   return valor;
}

int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

float idade = lerPoositivo("Digite a idade: ");
float peso = lerPoositivo("Digite o peso (kg): ");
float altura = lerPoositivo("Digite a altura (m): ");
printf("\nidade: %.0f anos\n", idade);
printf("IMC: %f\n", peso / (altura * altura));

return 0; 
}
 


