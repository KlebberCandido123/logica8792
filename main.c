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
int n = 1;
int soma = 0;

while(n <= 100){
   soma = n + n;
   printf("%d + %d = %d\n", n, n, soma);
   n++;
}


return 0; 
}
