#include<stdio.h>
#include<locale.h>
#include<stdbool.h>


int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

int opcao;

printf("--- sistema de pedagio---\n");
printf("1 - moto\n");
printf("2 - carro passeio\n");
printf("3 - Caminhão\n");
printf("4- onibus\n");
scanf("%d", &opcao);

switch (opcao)
{
 case 1:
    printf("categoria: moto | tarifa: R$ 5,00\n");
    break;
case 2:
    printf("categoria: carro passeio | tarifa: R$ 10,00\n");
    break;
case 3:
    printf("categoria: caminhão | Tarifa: R$25,00\n");
    break;
case 4:
    printf("Categoria: onibus | Tarifa: R$ 30,00\n");
    default:
    printf("Erro: Categoria não cadastrada no sistema.\n");
    break;
}






         


















 




return 0; 

}
