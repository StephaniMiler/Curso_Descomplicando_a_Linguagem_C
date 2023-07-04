/*67- Crie um programa que imprime a tecla digitada pelo usuário até que ele digite x*/

#include "stdio.h"

int main(){

    char tecla;

    do{
        printf("\n Digite uma tecla: ");
        scanf("%c", &tecla);
        getchar();
        printf("Voce digitou: %c", tecla);
    }while(tecla != 'x');

    return 0;
}