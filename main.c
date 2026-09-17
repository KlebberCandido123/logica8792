#include<stdio.h>
#include<locale.h>
#include<stdbool.h>


int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

float a, b, c;
printf("Digite os tres lados do triangulo: ");
scanf("%f %f %F", &a, &b, &c);

if(a == b && b == c){
    printf("Equilatero!\n");
}else if(a == b || a == c || b == c){
    printf("isosceles!\n");
}else{
    printf("Escaleno!\n");
}






         


















 




return 0; 

}
