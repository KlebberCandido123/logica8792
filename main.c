#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

char* tipoVeiculo(char placa[]){
   char primeiro = placa[0];
   if(primeiro >= 'A' && primeiro <= '2'){
      return "Veiculo particular";
   }else if(primeiro >= '0' && primeiro <= '9'){
      return "Placa irregular";
   }else{
      return "Formato desconhecido";
   }
}

int main(){

int opcao;
char placa[8];
printf("\n------- SISTEMA DE TRANSITO BRASILEIRO ------\n");
printf("Digite os caracteres da placa do veiculo: ");
scanf("%s", placa);
do{
   printf("\n1 - ver placa | 2 - tipo de veiculo | 0 - sair:");
   scanf("%d", &opcao);

switch(opcao){
   case 1: 
   printf("PLACA DO VEICULO: %s\n", placa);
   break;
   case 2: 
   printf("Tipo: %s\n", tipoVeiculo(placa));
   break;
   case 0:
   printf("Saindo...\n");
   break;
   default:
   printf("Numero invalido!\n");
   break;
}
}while(opcao != 0);
printf("\n====== FIM DO PROGRAMA ======\n");


return 0; 
}
 


