#include<stdio.h>
#include<locale.h>
#include<stdbool.h>


int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

float n1, n2, n3, media;

printf("Digite tres notas:" );
scanf("%f %f %f", &n1, &n2, &n3);

media = (n1 = n2 = n3) / 3;

printf("medias: %.2f\n", media);



return 0; 

}
