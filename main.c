#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>





int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

 int n, resto, invertido = 0;
 scanf("%d", &n);

 while(n != 0){
    resto = n % 10;
    invertido = invertido * 10 + resto;
    n /= 10;
 }
 
 printf("Numero invertido: %d\n", invertido);


return 0; 

}
