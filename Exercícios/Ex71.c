/*71- Escreva um programa que leia o número de habitantes de uma determinada cidade, e para cada habitante entre com os 
seguintes dados: consumo do mês e o código do consumidor (1-Residencial, 2-Comercial, 3-Industrial). No final, imprima o 
maior, o menor e a média do consumo dos habitantes; e por fim o total do consumo de cada categoria de consumidor.*/

#include <stdio.h>

int main() {
    int numHabitantes, codigo, consumo;
    int maiorConsumo = 0, menorConsumo = 0, totalResidencial = 0, totalComercial = 0, totalIndustrial = 0;
    float mediaConsumo = 0;

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &numHabitantes);

    for (int i = 0; i < numHabitantes; i++) {
        printf("\nHabitante %d:\n", i+1);
        
        printf("Digite o consumo do mês: ");
        scanf("%d", &consumo);
        
        printf("Digite o código do consumidor (1-Residencial, 2-Comercial, 3-Industrial): ");
        scanf("%d", &codigo);

        if (i == 0) {
            maiorConsumo = consumo;
            menorConsumo = consumo;
        } else {
            if (consumo > maiorConsumo) {
                maiorConsumo = consumo;
            }
            if (consumo < menorConsumo) {
                menorConsumo = consumo;
            }
        }

        switch (codigo) {
            case 1:
                totalResidencial += consumo;
                break;
            case 2:
                totalComercial += consumo;
                break;
            case 3:
                totalIndustrial += consumo;
                break;
        }

        mediaConsumo += consumo;
    }

    mediaConsumo /= numHabitantes;

    printf("\nMaior consumo: %d\n", maiorConsumo);
    printf("Menor consumo: %d\n", menorConsumo);
    printf("Média de consumo: %.2f\n", mediaConsumo);
    printf("Total de consumo residencial: %d\n", totalResidencial);
    printf("Total de consumo comercial: %d\n", totalComercial);
    printf("Total de consumo industrial: %d\n", totalIndustrial);

    return 0;
}
