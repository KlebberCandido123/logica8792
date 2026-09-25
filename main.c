#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>



int ehPrimo(int n){
    if(n < 2)return 0;
    for(int i = 2; i < n; i++){

    }
    return 1;
 }

int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

 int numero;
 printf("Digite um numero: ");
 scanf("%d", &numero);
 if(ehPrimo(numero))
 printf("%d e primo\n", numero);
 else
 printf("%d não e primo\n", numero);

return 0; 

}
