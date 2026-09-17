#include<stdio.h>
#include<locale.h>
#include<stdbool.h>


int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

int opcao;

printf("--- sistema d epedagio---\n");
printf("1 - moto\n");
printf("2 - carro passeio\n");
scanf("%d", &opcao);

switch (opcao)
{
    case 1:
    printf("categoria: moto | tarifa: R$ 5,00\n");
    break;
    case 2:
    printf("categoria: carro passeio | tarifa: R$ 10,00\n");
    break;
    default:
    printf("Erro: Categoria não cadastrada no sistema.\n");
    break;
}






         


















 




return 0; 

}
