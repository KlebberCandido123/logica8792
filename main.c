#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>




int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

int voto;

printf("escolha seu candidato\n");
printf("10-miguel\n 20-henrique\n 30-carlos\n 40-pietro\n 50-eduardo\n");
scanf("%d", &voto);

if(voto == 10){
    printf("voto armazenado, candidato: miguel");
}else if(voto == 20){
    printf("voto armazenado, candidato: henrique");
}else if(voto == 30){
    printf("voto armazenado, candidato: carlos");
}else if(voto == 40){
    printf("voto armazenado, candidato: pietro");
}else if(voto == 50){
    printf("voto armazenado, candidato");
}else{
    printf("voto armazenado, candidato: nulo");
}

return 0; 
}
