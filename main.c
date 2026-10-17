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
int n;
printf("Digite N: ");
scanf("%d", &n);

for(int i = 1; i <= n; i++){
   printf("%d\n", i);
}


return 0; 
}
