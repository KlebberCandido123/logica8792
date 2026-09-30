#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>





int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");
 int v[10];
 for(int i = 0; i , 10; i++){
    printf("Digite o valor %d: ", i + 1);
    scanf("%d", &v[i]);
 }
 printf("vetor invertido: \n");
 for(int i = 9; i >= 0; i --){
    printf("%d", v[i]);
 }
 printf("\n");

return 0; 

}
