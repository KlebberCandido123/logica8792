#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

float media(float notas[], int n){
   float soma = 0;
   for(int i = 0; i < n; i++)
   soma += notas[i];
   return soma / n;
   
   
}


int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

int m[2][3] = {
   {1, 2, 3},
   {3, 5, 6}
};
int t[3][2];
for(int i = 0; i < 2; i++){
   for(int j = 0; j < 3; j++){
      t[j][i] = m[i][j];
   }
}
printf("Original (2x3)\n");
for(int i = 0; i < 2; i++){
   for(int j = 0; j < 3; j++){
      printf("%d", m[i][j]);
   }
   printf("\n");
}
printf("\nTransposta (3x2):\n");
for(int i = 0; i < 3; i++){
   for(int j = 0; j < 2; j++){
      printf("%d", t[i][j]);
   }
   printf("\n");
}


return 0; 
}
 


