#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>





int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");
int opcao;
float a, b;
do {
    printf("\n---MENU---\n");
    printf("1 - soma\n");
    printf("2 - subtração\n");
    printf("3 - mutiplicação\n");
    printf("4 - divisão\n");
    printf("0 - sair\n");
    scanf("%d", &opcao);


    switch(opcao){
        case 1:
        printf("Digite dois numeros: ");
        scanf("%f %f", &a, &b);
        printf("resiltado: %.2f\n", a + b);
        break;

         case 2:
        printf("Digite dois numeros: ");
        scanf("%f %f", &a, &b);
        printf("resiltado: %.2f\n", a - b);
        break;

         case 3:
        printf("Digite dois numeros: ");
        scanf("%f %f", &a, &b);
        printf("resiltado: %.2f\n", a * b);
        break;

         case 4:
        printf("Digite dois numeros: ");
        scanf("%f %f", &a, &b);
        if(b != 0)
        printf("resiltado: %.2f\n", a / b);
        else 
        printf("Erro: Divisão por zero!\n");
        break;

         case 0:
        printf("Saindo... ");
        break;
        default:
        printf("Opção invalida!\n");
        break;

    }
    
}while(opcao != 0);

 
return 0; 

}
