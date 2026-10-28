#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


void somar(int a, int b){
   printf("Soam = %d\n", a + b);
}


int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

 somar(5, 2);



return 0; 
}
 


