#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>


struct Pessoa{
   char nome[50];
   int idade;
   float altura;
   float peso;
};


int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");
int n = 5;
 for(int i = 0; i < n; i++){
   printf("%d-prgramar\n", i);
 }


return 0; 
}
