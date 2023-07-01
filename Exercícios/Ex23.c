/*23- Construir um algoritmo que indique se o número digitado está compreendido entre 20 e 90 ou não.*/

#include "stdio.h"

int main(){

    int number;

    printf("Digite um numero: \n");
    scanf("%i", &number);

    if(number >= 20 && number <= 90){
        printf("%i esta entre 20 e 90\n", number);
    }
    else{
        printf("%i nao esta entre 20 e 90\n", number);
    }

    return 0;
}