#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>




int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

char nome[3][20] ={
    "sasuke",
    "naruto",
    "kakashi"
};

for(int i = 0; i < 3; i++){
    printf("%s\n", nome[i]);
}

return 0; 

}
