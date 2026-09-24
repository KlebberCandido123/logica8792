#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>



int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

int opcao = -1;

while(opcao != 0){
    printf("\nMenu: \n");
    printf("1 - Depositar\n");
    printf("2 - Sacar\n");
    printf("3 - Consutar\n");
    printf("0 - Sair\n");
    printf("Escolha: ");
    scanf("%d", &opcao);



    switch(opcao){
        case 1: printf("voce escolheu Depositar\n"); break;
        case 2: printf("vocce escolheu Sacar\n"); break;
        case 3: printf("voce escolheu Consultar\n"); break;
        case 0: printf("Saindo..."); break;
        default: printf("opcao invalida\n");
    }
  
}


return 0; 

}
