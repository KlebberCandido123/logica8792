#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>


struct Pessoa{
   char nome[50];
   int idade;
   float altura;
};


int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

struct Pessoa p1 = {"Klebber", 15, 1.78};
struct  Pessoa p2 = {"Erick", 15, 1.67};
struct Pessoa p3 ={"miguel", 15, 1.90};

printf("Nome: %s | idade: %d | Altura: %.2f\n", p1.nome, p1.idade, p1.altura);
printf("Nome: %s | idade: %d | Altura: %.2f\n", p2.nome, p2.idade, p2.altura);
printf("Nome: %s | idade: %d | Altura: %.2f\n", p3.nome, p3.idade, p3.altura);


return 0; 
}
