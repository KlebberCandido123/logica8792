#include<stdio.h>
#include<locale.h>
#include<stdbool.h>


int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

int a, b, c, d, e, maior;

printf("Digite cinco, numeros: ");
scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

maior = a;


if(b > maior) maior = b;
if(c > maior) maior = c;
if(d > maior) maior = d;
if(e > maior) maior = e;


printf("Maior: %d", maior);




 




return 0; 

}
