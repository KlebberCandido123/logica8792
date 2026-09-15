#include<stdio.h>
#include<locale.h>
#include<stdbool.h>


int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

int a, b;

printf("digiite dois numeros:");
scanf("%d %d", &a, &b);

if(a == b){
    printf("Os números são iguais!\n");
}else{
    printf("Os numeros são diferentes!\n");
}



 




return 0; 

}
