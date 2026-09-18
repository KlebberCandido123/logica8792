#include<stdio.h>
#include<locale.h>
#include<stdbool.h>


int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

int mes;

printf("Digite um número de 1 a 12 meses");
scanf("%d", &mes);

switch (mes){
    case 12:
    case 1 :
    case 2 :
         printf("verão\n");
         break; 
    
    case 3 :
    case 4 :
    case 5 :
         printf("Outono\n");
         break;
    
    case 6:
    case 7:
    case 8:
        printf("inverno\n");
        break;

    case 9:
    case 10:
    case 11:
    printf("primavera\n");
    default:
    printf("numero invalido");
    break;


}





         



return 0; 

}
