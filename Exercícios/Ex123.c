/*123- Escreva um programa que leia a idade e o primeiro nome de várias pessoas. Seu programa deve terminar 
quando uma idade negativa for digitada. Ao terminar, seu programa deve escrever o nome e a idade da pessoa 
mais jovem e mais velha. */

#include <stdio.h>
#include <string.h>

int main() {
    int idade;
    char nome[15];
    char maisVelha[15];
    int maiorIdade = 0;

    idade = 0; // Inicialização corrigida

    while (idade >= 0) {
        printf("Digite a sua idade: ");
        scanf("%d", &idade);
        getchar(); // Remoção do caractere de nova linha

        if (idade >= 0) {
            printf("\nDigite o seu nome: ");
            fgets(nome, 15, stdin);

            if (idade > maiorIdade) {
                maiorIdade = idade;
                strcpy(maisVelha, nome);
            }
        }
    }

    printf("A pessoa mais velha é %s", maisVelha);
    printf(" com %d anos.\n", maiorIdade);

    return 0;
}
