#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>


void saudar(const char *nome){
    printf("ola %s\n", nome);
}

int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");


saudar("Klebber");
saudar("vinicius");



         



return 0; 

}
