/*65- A sequência de Fibonacci é uma sequência infinita composta por números que obedecem o seguinte 
padrão: 0 1 1 2 3 5 8 13…
Como pode se ver, os dois primeiros números (0 1) quando somados dão origem ao terceiro (1). De modo que o n-ésimo número 
é fruto da soma dos dois anteriores.
Crie um programa que pede ao usuário um número X, e imprima o X-ésimo valor da sequência.
Ex: Se o usuário digitar 6, o valor a ser impresso é 8, que é o sexto valor da sequência.*/

#include <stdio.h>

int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int x;

    printf("Digite um número: ");
    scanf("%d", &x);

    int resultado = fibonacci(x);

    printf("O %d-ésimo valor da sequência de Fibonacci é: %d\n", x, resultado);

    return 0;
}
