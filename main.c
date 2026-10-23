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
 
printf("digite um numero de 1 a 12");
scanf("%d", &n);

switch(n){
   case 1:
   case 3:
   case 5:
   case 7:
   case 8:
   case 10:
   case 12:
   printf("o numero de dias é: 31");
   break;
   case 4:
   case 6:
   case 9:
   case 11:
   printf("o numero de dias é: 30");
   break;
   case 2:
   printf("o numero de dias é: 28");
   break;
   default:
   printf("digite um numero valido");
}


return 0; 
}
 


