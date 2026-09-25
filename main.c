#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>



int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

int n;
int resultado;

printf("Digite um numero para tabuada: ");
    resultado = scanf("%d", &n);

    if(resultado != 1){
         printf("entrada invalida! por favor, digite apenas numeros!");
        return 1;
    }
       
    for(int i = 1; i <= 10; i++){
        int resposta = n * i;
        printf("o resultado de %d x %d e: %d\n", n, i, resposta);
    }



return 0; 

}
