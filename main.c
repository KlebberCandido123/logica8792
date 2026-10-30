#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

#define PI 8.14159
float area_circulo(float raio){
   return PI * raio * raio;
}




int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

float r;
printf("Raio: ");
scanf("%f", &r);
printf("Area: %.2f\n", area_circulo(r));




return 0; 
}
 


