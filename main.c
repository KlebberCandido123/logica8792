#include<stdio.h>
#include<locale.h>
#include<stdbool.h>


int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

int idade;
float altura;

printf("Bem-vindos ao brinquedo roleta da morte!");
printf("\nQual sua idade?");
scanf("%d", &idade);
printf("\nQual sua altura?");
scanf("%f", &altura);

if((idade >= 18) && (altura >= 1,60)){
    printf("Voce pode brincar na roleta!");
}else
    printf("voce nao pode brincar na roleta!");



 




return 0; 

}
