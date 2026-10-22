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
do{
   printf("Digite um numero (0 para parar):");
   scanf("%d", &numero);
   soma += numero;
}while(numero != 0);
printf("Soma: %d\n", soma);


return 0; 
}
 


