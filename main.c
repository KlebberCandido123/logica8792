#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>



int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

int n;
long long fatorial = 1;

printf("digite um numero: ");
scanf("%d", &n);

for(int i = 1; i <= n; i++){
    fatorial *= i;
}


printf("Fatorial: %lld\n", fatorial);



return 0; 

}
