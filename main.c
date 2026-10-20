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
int numero, soma = 0;
printf("Digite um numero (0 para sair): ");
scanf("%d",&numero);

while(numero != 0){
   soma += numero;
   printf("Digite um numero (0 para sair): ");
   scanf("%d", &numero);
}
printf("Soma: %d\n", soma);

return 0; 
}
