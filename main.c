#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int potencia(int base, int expoente){
   if(expoente == 0){
      return 1;
   }
   return base * potencia(base, expoente - 1);
}

int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

printf("Resultado: %d\n", potencia(2, 4));


return 0; 
}
 


