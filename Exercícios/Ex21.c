/*21- Para doar sangue é necessário ter entre 18 e 67 anos. Faça um programa que leia a idade do usuário. 
Se o usuário puder doar sangue, imprima "Voce pode doar", caso contrário imprima "Voce nao pode doar"*/

#include "stdio.h"

int main(){

    int idade;

    printf("Digite a sua idade: \n");
    scanf("%i", &idade);

    if(idade >= 18 && idade <= 67){
        printf("Voce pode doar sangue!");
    }
    else{
        printf("Voce nao pode doar sangue!");
    }

    return 0;

}