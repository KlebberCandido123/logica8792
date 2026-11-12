#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");
 int total = 0;
for(int i = 1; i <= 200; i++){
   if(i % 10 == 3){
      printf("%d\n", i);
      total++;
   }
}
printf("\nTotal: %d\n", total);
return 0; 
}
 


