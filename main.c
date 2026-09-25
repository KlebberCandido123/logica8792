#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>



int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

int n, tabuada;

printf("Digite um numero: ");
scanf("%d", &n);

for(int i = 1; i<= 10; i++){
    printf("%d\n", n  * i);
}



return 0; 

}
