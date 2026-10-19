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
int contador = 1;

while(contador <= 10){
   printf("%d\n", contador);
   contador++;
}




return 0; 
}
