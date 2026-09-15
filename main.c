#include<stdio.h>
#include<locale.h>
#include<stdbool.h>


int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

int a, b, c, d, e, maior;

printf("Digite um numero para a:");
scanf("%d", &a);

printf("Digite um numero para b:");
scanf("%d", &b);

printf("Digite um numero para c:");
scanf("%d", &c);

printf("Digite um numero para d:");
scanf("%d", &d);

printf("Digite um numero para e:");
scanf("%d", &e);



maior = a;


if(b > maior) maior = b;
if(c > maior) maior = c;
if(d > maior) maior = d;
if(e > maior) maior = e;


printf("Maior: %d", maior);




 




return 0; 

}
