#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>



int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");


int contador = 10;

while(contador >= 1){
    printf("%d\n", contador);
    contador--;
}




return 0; 

}
