/*76- Dados um número inteiro N, N>0, e uma sequência com N números inteiros maiores do que zero, determinar o fatorial de
cada número da sequência.*/

#include <stdio.h>

// Função para calcular o fatorial de um número
int calcularFatorial(int n) {
    int fatorial = 1;
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    int N;

    // Obter o número de elementos na sequência
    printf("Digite o número de elementos na sequência: ");
    scanf("%d", &N);

    // Verificar se N é maior que zero
    if (N <= 0) {
        printf("O número de elementos deve ser maior que zero.\n");
        return 0;
    }

    // Criar um array para armazenar os N números inteiros
    int numeros[N];

    // Obter os N números inteiros
    printf("Digite os %d números inteiros maiores que zero:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &numeros[i]);
    }

    // Calcular e exibir o fatorial de cada número da sequência
    printf("Fatoriais:\n");
    for (int i = 0; i < N; i++) {
        int fatorial = calcularFatorial(numeros[i]);
        printf("%d! = %d\n", numeros[i], fatorial);
    }

    return 0;
}
