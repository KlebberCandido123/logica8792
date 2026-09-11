#include<stdio.h>
#include<locale.h>
#include<stdbool.h>


int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

float raio;
const float PI = 3.14159;

printf("Digite o raio do circulo: ");
scanf("%f", &raio);
printf("Area: %.2f\n", PI * raio);
printf("Perimetro: %.2f\n", 2 * PI * raio);





return 0; 

}
