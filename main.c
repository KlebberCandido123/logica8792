#include<stdio.h>
#include<locale.h>
#include<stdbool.h>


int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

float a, b, c;
printf("Digite os tres lados do triangulo: ");
scanf("%f %f %F", &a, &b, &c);

if( a + b > c && a + c > b && b + c > a){
    printf("Os lados formam um triangulo!\n");
}else{
    printf("Os lados NÂO formam um triangulo!\n");
}






         


















 




return 0; 

}
