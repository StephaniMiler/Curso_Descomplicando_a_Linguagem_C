/*72- Crie um jogo de adivinhação que deve ser jogado entre dois usuários. O primeiro usuário deve digitar três caracteres
 distintos.O segundo usuário deve digitar uma tecla na tentativa de acertar um dos três caracteres. Caso a tecla digitada 
 esteja correta, imprima uma mensagem informando que ele acertou e quantos caracteres restam para ele acertar. Caso ele 
 erre, imprima na tela e informe quantos caracteres restam e o número de tentativas restantes (o usuário só pode digitar 
 no máximo 15 caracteres). O jogo termina quando o usuário acerta todos os caracteres ou quando não possui mais 
 tentativas.*/

#include <stdio.h>
#include <stdbool.h>

#define MAX_TENTATIVAS 15

int main() {
    char caracteres[3];
    char tecla;
    int numCaracteresRestantes = 3;
    int numTentativasRestantes = MAX_TENTATIVAS;
    bool acertou = false;

    printf("=== Jogo de Adivinhação ===\n");
    printf("Jogador 1, digite três caracteres distintos: ");
    scanf(" %c %c %c", &caracteres[0], &caracteres[1], &caracteres[2]);

    while (numTentativasRestantes > 0 && numCaracteresRestantes > 0) {
        printf("Jogador 2, digite uma tecla: ");
        scanf(" %c", &tecla);

        // Verifica se a tecla digitada está correta
        for (int i = 0; i < 3; i++) {
            if (tecla == caracteres[i]) {
                acertou = true;
                caracteres[i] = ' ';  // Marca o caractere como já adivinhado
                numCaracteresRestantes--;
            }
        }

        if (acertou) {
            printf("Você acertou! Restam %d caracteres.\n", numCaracteresRestantes);
        } else {
            numTentativasRestantes--;
            printf("Você errou! Restam %d caracteres e %d tentativas.\n", numCaracteresRestantes, numTentativasRestantes);
        }

        acertou = false;
    }

    if (numCaracteresRestantes == 0) {
        printf("Parabéns! Você acertou todos os caracteres.\n");
    } else {
        printf("Você não conseguiu adivinhar todos os caracteres. Fim de jogo.\n");
    }

    return 0;
}
