#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>





int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");

for(int i = 1; i < 4; i++){
    for(int j = 1; j < 4; j++){
        printf("For externo e for interno: %d %d\n", i, j);
    }
}



return 0; 

}
