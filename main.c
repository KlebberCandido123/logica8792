#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>


int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

const int MAX_TENTATIVAS = 7;
int tentativas[MAX_TENTATIVAS];
int secreto, palpite;
int usadas = 0, acertou = 0;
srand(time(NULL));
secreto = rand() % 100 + 1;
printf("Adivinhe o numero entre 1 e 100.\n");
printf("Voce tem %d tentativas. \n", MAX_TENTATIVAS);
do{
   printf("\nTentativa %d: ", usadas + 1);
   scanf("%d", &palpite);

   if(palpite < 1 || palpite > 100){
      printf("Digite um numero entre 1 e 100!\n");
   }else{
      tentativas[usadas] = palpite;
      usadas++;
      if(palpite == secreto){
         acertou = 1;
      }else if(palpite < secreto){
         printf("o numero secreto é MAIOR!\n");
      }else{
         printf("o numero secreto é MENOR!\n");
      }
   }
}while(!acertou && usadas < MAX_TENTATIVAS);
printf("\n----- FIM DE JOGO ------");
if(acertou){
   printf("Parabens! Voce acertou em %d tentativa(s).\n", usadas);
}else{
   printf("Suas tentativas acabaram. O numero era %d.\n", secreto);
}
printf("Historico de palpites:\n");
for(int i = 0; i < usadas; i++){
   printf("%d) %d\n", i + 1, tentativas[1]);
}








return 0; 
}
 


