#include<stdio.h>
#include<locale.h>
#include<stdbool.h>


int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

int n;

printf("Digite um numero: ");
scanf("%d", &n);


 printf("%s", n > 0 ? "positivo" : (n < 0 ? "Negativo" : "Zero"));


    



return 0; 

}
