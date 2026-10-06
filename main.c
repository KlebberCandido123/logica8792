#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>





int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

int numero;

do{
    printf("Digite um numero maior que 0: ");
    scanf("%d", &numero);
}while(numero <= 0);

printf("Voce digitou %d, que e valido\n", numero);




return 0; 
}
