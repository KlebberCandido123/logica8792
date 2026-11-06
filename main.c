#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

void contador(int numero){
   for(int i = 0; i <= numero; i++){
      printf("%d\n", i);
   }
}

int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

contador(5);


return 0; 
}
 


