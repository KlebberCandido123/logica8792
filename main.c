#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>


char* saudacao(){
    return "ola, seja bem-vindo";
}


int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

printf("%s\n", saudacao());

return 0; 
}
