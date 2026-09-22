#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>


int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");


int numeros[] = {10, 20, 30};

int x = 10;
int *p = &x;
printf("valor de x: %d\n", x);
printf("Endereço de x: %p\n");
printf("valor via ponteiro: %d\n", *p);



         



return 0; 

}
