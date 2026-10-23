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
 
printf("digite 1 para oi\n");
printf("digite 2 para hello\n");
printf("digite 3 para bom dia\n");
scanf("%d", &n);

switch(n){
   case 1:
   printf("seu numero é oi ");
   break;
   case 2: 
   printf("seu numero é hello");
   break;
   case 3:
   printf("seu numero é bom dia");
   break;
   default:
   printf("digite um numero valido");
   break;
}


return 0; 
}
 


