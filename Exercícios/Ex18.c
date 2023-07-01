/* 18- Escreva um programa em que uma variável recebe um valor lido entre 20 e 100. Imprima na tela o valor gerado, 
caso seja divisível por 3 e por 5.*/

#include "stdio.h"

int main(){
    
    int valor;

    printf("Digite um numero entre 20 e 100\n");
    scanf("%i", &valor);

    if(valor % 3 == 0 && valor % 5 ==0){
        printf("%i eh divisivel por 3 e por 5!\n", valor);
    }
    else{
        printf("%i nao eh divisivel por 3 e por 5\n", valor);
    }
    
    return 0;

}