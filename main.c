#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

int fibonacci(int n){
   if(n == 0){
      return 0;
   }
   if(n == 1){
      return 1;
   }
   return fibonacci(n - 1) + fibonacci(n - 2);
}


int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

for(int i = 0; i < 10; i++){
   printf("%d ", fibonacci(i));
}


return 0; 
}
 


