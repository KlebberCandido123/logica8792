#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

for(int i = 1; i <= 100; i++){
   if(i % 4 == 0){
      printf("%d\n", i);
   }
}
return 0; 
}
 


