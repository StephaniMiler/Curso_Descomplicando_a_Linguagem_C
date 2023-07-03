/*39- Você está desenvolvendo um sistema de controle de acesso a cinema. Este sistema deve pedir a idade do usuário, 
e em seguida imprimir as opções de filmes: 
-Titanic (16 anos)
-Pica Pau (Livre) 
-A volta de Jason (18 anos) 
-Desistir
Se o usuário escolher o filme e não tiver idade suficiente, o sistema deve imprimir "Voce nao tem idade para assistir ao 
filme". Caso o usuário tenha idade para o filme, o sistema imprime "Voce comprou o filme tal. Bom filme!".*/

#include <stdio.h>

int main() {
    int idade;
    int opcao;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Opções de filmes:\n");
    printf("1. Titanic (16 anos)\n");
    printf("2. Pica Pau (Livre)\n");
    printf("3. A volta de Jason (18 anos)\n");
    printf("4. Desistir\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        if (idade >= 16) {
            printf("Você comprou o filme Titanic. Bom filme!\n");
        } else {
            printf("Você não tem idade para assistir ao filme Titanic.\n");
        }
    } else if (opcao == 2) {
        printf("Você comprou o filme Pica Pau. Bom filme!\n");
    } else if (opcao == 3) {
        if (idade >= 18) {
            printf("Você comprou o filme A volta de Jason. Bom filme!\n");
        } else {
            printf("Você não tem idade para assistir ao filme A volta de Jason.\n");
        }
    } else if (opcao == 4) {
        printf("Você desistiu.\n");
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}


