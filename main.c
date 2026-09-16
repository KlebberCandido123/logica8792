#include<stdio.h>
#include<locale.h>
#include<stdbool.h>


int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

int idade;
int ehEstudante;

printf("Qual sua idade?");
scanf("%d", &idade);
printf("\nVoce é estudante (0 - Não | 1 - Sim):");
scanf("%d", &ehEstudante);

if((idade >= 60) && (ehEstudante == 1)){
    printf("parabens voce tem direito a desconto!");

}else{
    printf("infelizmente voce não tera desconto!");
}





 




return 0; 

}
