/*38- Peça três valores ao usuários, A, B, C, e verifique se eles podem ser valores dos lados de um triângulo.
Para ser triângulo, (A+B) > C e (A+C) > B e (B+C) > A.
Se não puder ser triângulo, imprima na tela que “nao pode ser triangulo”; caso contrário, imprima na tela qual é o 
triângulo formado: escaleno (todos os lados diferentes), isósceles (2 lados iguais e 1 diferente) ou equilátero 
(3 lados iguais).*/

#include "stdio.h"

int main(){

    int a, b, c;

    printf("Digite os tres lados: \n");
    scanf("%i %i %i", &a, &b, &c);

    if ((a+b) > c && (a+c) > b && (b+c) >a){
        if (a != b && a != c && b!=c){
            printf("Forma um triangulo escaleno");
        }
        else if (a == b || a == c || b == c){
            printf("Forma um triangulo isósceles");
        }
        else{
            printf("Forma um triangulo equilátero");
        }
    }
    else{
        printf("Nao forma um triangulo!");
    }
    return 0;
}