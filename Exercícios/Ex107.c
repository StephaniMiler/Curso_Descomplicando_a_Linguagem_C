/*107- Faça um programa que cria um vetor de 10 elementos inteiros. Inicialize cada posição do vetor com o valor -1. 
Posições com o valor -1, significam que estão disponíveis.O programa deve pedir para que o usuário digite dois valores: o 
valor a ser adicionado no vetor e o índice (entre 0-9) em que o valor digitado será inserido no vetor. Se o índice digitado
diz respeito à uma posição disponível do vetor (valor igual a -1), o valor é inserido. Caso contrário, deve-se imprimir 
uma mensagem informando que aquela posição já foi preenchida.
O programa deve ser encerrado quando todas as posições estiverem preenchidas */

#include <stdio.h>

int main() {
    const int tamanho = 10;
    int vetor[tamanho];

    // Inicialização do vetor com o valor -1
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = -1;
    }

    int contador = 0; // Contador de posições preenchidas

    while (contador < tamanho) {
        int valor, indice;

        printf("Digite o valor a ser adicionado: ");
        scanf("%d", &valor);

        printf("Digite o índice (entre 0-9) para inserir o valor: ");
        scanf("%d", &indice);

        if (indice >= 0 && indice < tamanho) {
            if (vetor[indice] == -1) {
                vetor[indice] = valor;
                contador++;
            } else {
                printf("Essa posição já foi preenchida.\n");
            }
        } else {
            printf("Índice inválido.\n");
        }
    }

    // Impressão do vetor preenchido
    printf("Vetor preenchido:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
