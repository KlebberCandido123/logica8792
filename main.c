#include<stdio.h>
#include<locale.h>
#include<stdbool.h>


int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

int a, b, c, maior;

printf("Digite tres, numeros: ");
scanf("%d %d %d", &a, &b, &c);

maior = a;

if(b > maior) maior = b;
if(c > maior) maior = c;

printf("Maior: %d", maior);




 




return 0; 

}
