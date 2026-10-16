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
struct  Pessoa p1;


printf("--- bem vindo a academia reis ---");
printf("\n");

printf("qual seu nome ?: ");
scanf("%s", p1.nome);

printf("digite sua altura: ");
scanf("%f", &p1.altura);

printf("digite sua idade: ");
scanf("%d", &p1.idade);

printf("digite seu peso: ");
scanf("%f", &p1.peso);


return 0; 
}
