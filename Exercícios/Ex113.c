/*113- Receber um nome e imprimir as 4 primeiras letras do nome.*/

#include <stdio.h>

int main(){

    char nome[20];

    printf("Digite o seu nome: \n");
    fgets(nome, 5, stdin);

    printf("As 4 primeiras letras do nome eh: ");
    puts(nome);

    return 0;
}