#include<stdio.h>
#include<locale.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

void contador(int n){
   if(n == 0){
      return;
   }
   contador(n - 1);
   printf("%d\n", n);

}

int main(){

 setlocale(LC_ALL, "pt_BR.UTF-8");
contador(5);

return 0; 
}
 


