#include<stdio.h>
#include<locale.h>
#include<stdbool.h>


int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

int n;
printf("Digite um numero: ");
scanf("%d", &n);

if(n % 3 == 0 && n % 5 == 0){
    printf("Múriplo de 3 e 5\n");
}else if(n % 3 == 0){
    printf("Mútiplo de 3\n");
}else if(n % 5 == 0){
    printf("Mútiplo de 5\n");
}else{
    printf("nâo e um mutiplo de 3 e nem de 5\n");
}








         



return 0; 

}
