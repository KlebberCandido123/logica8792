#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>




int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

int num[5] = {1, 2, 3, 4, 5};

printf("%d", num[0]);
printf("%d", num[2]);




return 0; 

}
