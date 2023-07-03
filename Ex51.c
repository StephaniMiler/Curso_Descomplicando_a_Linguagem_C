/*51- Faça um programa que leia um número inteiro X. Imprima os cinco primeiros múltiplos de 3 e 7, considerando números 
maiores e menores que X.*/

#include "stdio.h"
int main(){

    int x;

    printf("Digite o limite superior do intervalo: \n");
    scanf("%i", &x);

    int conta_divisores = 0;

    for(int i = 0; i<= x; i++){
        if(i % 3 == 0 && i % 7 ==0){
            conta_divisores++;

            if(conta_divisores <= 5){
                printf("%i\n", i);
            }
            else{
                break;
            }
        }
    }

    return 0;

}