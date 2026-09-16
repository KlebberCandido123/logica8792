#include<stdio.h>
#include<locale.h>
#include<stdbool.h>


int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

int  diaDaSemana;

printf("Digite um numero de (1 a 7): ");
scanf("%d", &diaDaSemana);

if(diaDaSemana == 1){
    printf("DOmingo!");

}else if(diaDaSemana == 2){
    printf("Segunda-feira");
}else if(diaDaSemana == 3){
    printf("Terça-feira");
}else if(diaDaSemana == 4){
    printf("Quarta-feira");
}else if(diaDaSemana == 5){
    printf("Quinta-feira");
}else if(diaDaSemana == 6){
    printf("Sexta-feira");
}else if (diaDaSemana == 7){
    printf("Sabado!");
}else{
    printf("valor invalido!");
}





 




return 0; 

}
