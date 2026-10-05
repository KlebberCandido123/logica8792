#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>


char* retornarNome(char nome[]) {
    return nome;
}


int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

printf("o nome e: %s\n", retornarNome("klebber"));

return 0; 
}
