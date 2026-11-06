#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
void contar(int n){
   if(n == 0){
      return; //retorna a propria função
   }
   contar(n - 1);
   printf("%d\n", n);
}

int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");
contar(5);



return 0; 
}
 


