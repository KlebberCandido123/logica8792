#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int buscar(int vetor[], int tamanho, int valor){
   if(tamanho == 0){
      return - 1;
   }
   if(vetor[tamanho - 1] == valor){
      return tamanho - 1;
   }
   return buscar(vetor, tamanho - 1, valor);
}

int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");
int numeros[] = {10, 20, 30, 40, 50};
int posicao = buscar(numeros, 5, 30);
printf("Posição: %d\n", posicao);

return 0; 
}
 


