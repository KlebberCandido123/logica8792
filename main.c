#include<stdio.h>
#include<locale.h>
#include<stdbool.h>


int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

int idade;

printf("Digite um numero: ");
scanf("%d", &idade);

if(idade >= 50){
    printf("vc e senior");

}else if(idade >=  18){
    printf("Maior de idade");

}else if(idade >= 12){
    printf("voce e adolecente");

}else if(idade >= 9){
    printf("voce e pre-adolecente");
}else
    printf("vc e criança");




 




return 0; 

}
