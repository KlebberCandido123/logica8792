#include<stdio.h>
#include<locale.h>
#include<stdbool.h>


int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

int n;

printf("Digite um numero: ");
scanf("%d", &n);


if(n > 0) {
    printf("Positivo\n");
        }else{
             printf("negativo\n");
        }
   



    



return 0; 

}
