#include<stdio.h>
#include<locale.h>
#include<stdbool.h>


int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

int a, b, c;

printf("digiite dois numeros:");
scanf("%d %d %d", &a, &b, &c);

if((a != b) && (b != c)){
    printf("Os tres numeros são diferentes!\n");
}else if(b != c){
    printf("Os numeros são diferentes!\n");
}else{
    printf("todos os numeros são iguais ");
}



 




return 0; 

}
