#include<stdio.h>
#include<locale.h>
#include<stdbool.h>


int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

int idade;

printf("Digite um numero: ");
scanf("%d", &idade);

if(idade >= 18){
    printf("Voce e maior de idade!");
}else{
    printf("voce e menor de idade");
}



 




return 0; 

}
