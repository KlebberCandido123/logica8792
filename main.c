#include<stdio.h>
#include<locale.h>
#include<stdbool.h>


int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

int n;

printf("DIgite um numero: ");
scanf("%d", &n);

printf("Antecessor: %d\n", n- 1);
printf("Sucessor; %d\n", n+ 1);





return 0; 

}
