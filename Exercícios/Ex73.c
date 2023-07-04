/*73- Crie um algoritmo que exiba na tela a tabuada de 1 a 9*/

#include "stdio.h"
int main(){

    int i, j;

    for(i= 1; i <= 9; i++){
        printf("Tabuada do %i\n", i);
        for (j=1; j<=10; j++){
            printf("%i x %i = %i\n", i, j, i*j);
        }
    }
}