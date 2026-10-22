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

 int n; 
 do{
   printf("Digite um numero (não negativo): ");
   scanf("%d", &n);
 }while(n < 0);

 printf("Voce digitou: %d\n", n);

return 0; 
}
