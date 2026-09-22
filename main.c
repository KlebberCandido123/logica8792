#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>


int main(){

setlocale(LC_ALL, "pt_BR.UTF-8");

int idades[3] = {25, 35, 45};
 
printf("%s %d %s", "Sasuke tem, ", idades[0], "anos!");
printf("%s %d %s", "Naruto tem, ", idades[1], "anos!");
printf("%s %d %s", "Boruto tem, ", idades[2], "anos!");






         



return 0; 

}
