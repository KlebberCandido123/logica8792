#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>


int somar(int a, int b){
    return a + b;
}

int subtrair(int a, int b){
    return a - b;
}

int mutiplicar(int a, int b){
    return a * b;
}

int dividir (int a, int b){
    if( b <= 0){
        printf("ele precisa ser maior que 0!");
    }else{
        return a / b; 
    }
}

int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");


int resultado = somar(5, 3);
printf("o resultado da soma e: %d\n", resultado);



int resultado1 = subtrair(5, 3);
printf("o resultado e: %d\n", resultado1);


int resultado2 = mutiplicar(5, 3);
printf("o resultado e: %d\n", resultado2);


int resultado3 = dividir(5, 3);
printf("o resultado e: %d\n", resultado3);



return 0; 

}
