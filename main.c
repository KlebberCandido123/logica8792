#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int buscar(float vetor[], int tamanho, float chave){
   for(int i = 0; i < tamanho; i++){
   if(vetor[i] == chave){
      return i;
   }
}
   return -1;
}

int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

float numeros[] = {10.5, 20.5, 30.5, 40.5, 50.5};
int tamanho = 5;
float procurado;
printf("Digite  o numero que deseja procura: ");
scanf("%f", &procurado);
int resultado = buscar(numeros, tamanho, procurado);
if(resultado != -1){
   printf("Numero encontrado!\n");
   printf("Valor: %.2f\n", numeros[resultado]);
   printf("posição no vetor: %d\n", resultado);
}else{
   printf("Numero não encontrado");
}


return 0; 
}
 


