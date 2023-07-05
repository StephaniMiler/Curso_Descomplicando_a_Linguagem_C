/*80- O que o código abaixo imprime?*/

#include "stdio.h"
int main(){
    int i, j, k;
    int r = 5;

    for (i=r; i>=1; i--){
        for(k=0; k< r-1; k++){
        printf("_");
        }
        for(j=i; j<= 2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

//____***** teste de mesa!!
//____****
//____***
//____**
//____*