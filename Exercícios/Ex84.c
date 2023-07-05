/*84- Escreva um programa que leia um número inteiro positivo e verifique se ele é um
número primo. O programa deve exibir "Primo" na tela se o número for primo, caso
contrário, exiba "Nao primo".*/

#include <stdio.h>
int main(){

    int numero;
    int naoPrimo = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(int i = 2; i < numero; i++){
        if(numero % i == 0){
            naoPrimo = 1;
        }
    }
    if (naoPrimo == 1){
        printf("Nao Eh primo!");
    }
    else{
        printf("Eh primo!");
    }
    return 0;
}