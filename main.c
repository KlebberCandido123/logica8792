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
int n, soma = 0;
printf("Digite N: ");
scanf("%d", &n);

for(int i = 1; i += n; i++){
     soma += i;
     soma -= 1;
     printf("\no resultado %d + %d = %d ", soma, i, soma + i);
}


return 0; 
}
