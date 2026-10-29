#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int quadrado(int numero){
   return numero * numero;
}

int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

int n;

printf("Digite um numero: ");
scanf("%d",&n);

printf("%d^2 = %d", n, quadrado(n));

return 0; 
}
 


