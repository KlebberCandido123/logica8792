#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>


void contarVogais(char palavra[]){
    int contador = 0;
    for(int i = 0; i <strlen(palavra); i++){
        char c = palavra[i];
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
        || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
            contador++;
        }
    }
    printf("A palavra '%s' tem %d vogais.\n", palavra, contador);
}

int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

char p[20];

printf("Digite uma palavra!: ");
scanf("%s", p);

contarVogais(p);




return 0; 

}
