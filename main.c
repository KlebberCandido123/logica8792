#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

float media(float notas[], int n){
   float soma = 0;
   for(int i = 0; i < n; i++)
   soma += notas[i];
   return soma / n;
   
   
}


int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

int numeros[5];
int soma = 0;
for(int i = 0; i < 5; i++){
   printf("Digite o %d numero: ", i + 1);
   scanf("%d", &numeros[i]);
   soma = soma + numeros[i];
}
printf("\nSoma = %d\n", soma);


return 0; 
}
 


