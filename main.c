#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");
for(int ano = 2000; ano <= 2030; ano++){
   if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
      printf("%d\n", ano);
   }
}
return 0; 
}
 


