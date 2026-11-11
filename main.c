#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

int n;
printf("Digite N: ");
scanf("%d", &n);

for(int i = 1; i <= n; i++){
   for(int j = 1; j <= n; j++){
       printf("* ");
   }
   printf("\n");
}
return 0; 
}
 


