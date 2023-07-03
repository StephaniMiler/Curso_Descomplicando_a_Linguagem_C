/*58-No dia da estreia do filme “Senhor dos Anéis”, uma grande emissora de TV realizou uma pesquisa logo após o 
encerramento do filme. Cada espectador respondeu a um questionário no qual constava sua idade e sua opinião em relação 
ao filme:
excelente;
bom;
regular.
Crie um algoritmo que receba a idade e a opinião de 10 espectadores, calcule e imprima:
A média das idades das pessoas que responderam excelente;
a quantidade de pessoas que responderam regular;
a percentagem de pessoas que responderam bom entre todos os expectadores analisados. */

#include <stdio.h>

int main() {
    int idade;
    char opiniao;
    int totalExcelente = 0;
    int somaIdadesExcelente = 0;
    int totalRegular = 0;
    int totalBom = 0;

    for (int i = 0; i < 10; i++) {
        printf("Informe a idade do espectador %d: ", i+1);
        scanf("%d", &idade);

        printf("Informe a opinião do espectador %d (e - excelente, b - bom, r - regular): ", i+1);
        scanf(" %c", &opiniao);

        if (opiniao == 'e') {
            totalExcelente++;
            somaIdadesExcelente += idade;
        } else if (opiniao == 'r') {
            totalRegular++;
        } else if (opiniao == 'b') {
            totalBom++;
        }
    }

    float mediaIdadesExcelente = (float)somaIdadesExcelente / totalExcelente;
    float percentualBom = (float)totalBom / 10 * 100;

    printf("\n");
    printf("Média das idades das pessoas que responderam excelente: %.2f\n", mediaIdadesExcelente);
    printf("Quantidade de pessoas que responderam regular: %d\n", totalRegular);
    printf("Percentual de pessoas que responderam bom entre todos os espectadores analisados: %.2f%%\n", percentualBom);

    return 0;
}
