#include<stdio.h>
#include<locale.h>
#include<stdbool.h>


int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

float celsius, fahrenheit;

printf("Digite a temperatura em Celsius: ");
scanf("%f", &celsius);

fahrenheit = (celsius * 9.0 / 5.0) + 32;
printf("Fahrenheit: %.2f\n", fahrenheit);


    



return 0; 

}
