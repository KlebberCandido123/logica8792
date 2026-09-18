#include<stdio.h>
#include<locale.h>
#include<stdbool.h>


int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

char letra;
printf("Digite uma letra: ");
scanf("%c", &letra);

if(letra == 'a' || letra =='e' ||letra == 'i' || letra == 'o'  || letra == 'u'||
    letra == 'A' || letra == 'E' || letra == 'I' || letra == 'o' || letra == 'U'){
        printf("vogal\n");
    }else{
        printf("consoante\n");
    }








         



return 0; 

}
