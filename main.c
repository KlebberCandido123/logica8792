#include<stdio.h>
#include<locale.h>
#include<stdbool.h>


int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

int idade;

printf("DIgite a idade: ");
scanf("%d", &idade);

printf("Equivale a %d meses\n", idade * 12);
printf("Equivale a %d dias (aproximado)\n", idade * 365);





return 0; 

}
