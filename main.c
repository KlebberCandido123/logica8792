#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


int soma(int a,  int b){
   return a + b;

}

void soma1(){
   int x, y, resultado;
   printf("\n Digite um valor para x: ");
   scanf("%d", &x);
   printf("\nDigite um valor para y: ");
   scanf("%d", &y);
   resultado = x + y;
   printf("\nA soma de %d + %d = %d", x, y, resultado);
}


int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");




int resulatado = soma(5, 5);
printf("%d", resulatado);

soma1();



return 0; 
}
 


