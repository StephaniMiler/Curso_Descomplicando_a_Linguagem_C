/*128- O jogo da forca é um jogo em que o jogador tem que acertar qual é a palavra proposta, tendo como dica o 
número de letras e o tema ligado à palavra. A cada letra errada, o usuário perde uma tentativa (o número é 
determinado pelo programador). O jogo termina ou com o acerto da palavra ou com o término do número de 
tentativas.
Para começar o jogo se imprime um underline correspondente ao lugar de cada letra.
Por exemplo, para a palavra "AMOR", se escreve:
A M O R ------> _ _ _ 
O jogador que tenta adivinhar a palavra deve ir dizendo as letras que podem existir na palavra. Cada letra que ele acerta é escrita no espaço correspondente.
A M O R→ A _ O R
Caso a letra não exista nessa palavra, imprime-se que a letra está incorreta, e reduz-se o número de tentativas.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TENTATIVAS 6

void imprimirPalavraAtual(const char *palavra, const int *letrasReveladas) {
    for (int i = 0; palavra[i] != '\0'; i++) {
        if (letrasReveladas[i])
            printf("%c ", palavra[i]);
        else
            printf("_ ");
    }
    printf("\n");
}

int main() {
    char palavra[100];
    int letrasReveladas[100] = {0};
    int numTentativas = MAX_TENTATIVAS;

    printf("Digite a palavra a ser adivinhada: ");
    scanf("%s", palavra);

    int tamanhoPalavra = strlen(palavra);

    // Converter a palavra para letras maiúsculas
    for (int i = 0; i < tamanhoPalavra; i++) {
        palavra[i] = toupper(palavra[i]);
    }

    // Loop principal do jogo
    while (numTentativas > 0) {
        printf("\nPalavra atual: ");
        imprimirPalavraAtual(palavra, letrasReveladas);

        char letra;
        printf("Digite uma letra: ");
        scanf(" %c", &letra);

        letra = toupper(letra);

        int letraRevelada = 0;

        // Verificar se a letra existe na palavra
        for (int i = 0; i < tamanhoPalavra; i++) {
            if (palavra[i] == letra) {
                letrasReveladas[i] = 1;
                letraRevelada = 1;
            }
        }

        if (letraRevelada) {
            printf("A letra '%c' está correta!\n", letra);
        } else {
            printf("A letra '%c' está incorreta.\n", letra);
            numTentativas--;
            printf("Tentativas restantes: %d\n", numTentativas);
        }

        // Verificar se todas as letras foram reveladas
        int todasLetrasReveladas = 1;
        for (int i = 0; i < tamanhoPalavra; i++) {
            if (!letrasReveladas[i]) {
                todasLetrasReveladas = 0;
                break;
            }
        }

        if (todasLetrasReveladas) {
            printf("\nParabéns! Você acertou a palavra '%s'.\n", palavra);
            break;
        }
    }

    if (numTentativas == 0) {
        printf("\nVocê perdeu! A palavra correta era '%s'.\n", palavra);
    }

    return 0;
}
