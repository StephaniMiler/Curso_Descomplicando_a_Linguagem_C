/*66- Faça um programa que simule a urna eletrônica. A tela a ser apresentada deverá ser da seguinte forma:
As opções são:
1. Candidato Jair Rodrigues
2. Candidato Carlos Luz
3. Candidato Neves Rocha
4. Nulo
5. Branco
Entre com o seu voto:
O programa deverá ler os votos dos eleitores e, quando o número 6 for lido, apresentar as seguintes informações: 
a) O número de votos de cada candidato; 
b) A porcentagem de votos nulos; 
c) A porcentagem de votos brancos; 
d) O candidato vencedor.*/

#include <stdio.h>

int main() {
    int votos_candidato1 = 0;
    int votos_candidato2 = 0;
    int votos_candidato3 = 0;
    int votos_nulos = 0;
    int votos_brancos = 0;
    int total_votos = 0;
    int voto;

    while (1) {
        printf("As opções são:\n");
        printf("1. Candidato Jair Rodrigues\n");
        printf("2. Candidato Carlos Luz\n");
        printf("3. Candidato Neves Rocha\n");
        printf("4. Nulo\n");
        printf("5. Branco\n");
        printf("6. Encerrar votação\n");
        printf("Entre com o seu voto: ");
        scanf("%d", &voto);

        if (voto == 6) {
            break;
        }

        switch (voto) {
            case 1:
                votos_candidato1++;
                break;
            case 2:
                votos_candidato2++;
                break;
            case 3:
                votos_candidato3++;
                break;
            case 4:
                votos_nulos++;
                break;
            case 5:
                votos_brancos++;
                break;
            default:
                printf("Opção inválida!\n");
        }

        total_votos++;
    }

    float porcentagem_nulos = (float)votos_nulos / total_votos * 100;
    float porcentagem_brancos = (float)votos_brancos / total_votos * 100;
    int maior_votos = votos_candidato1;
    int candidato_vencedor = 1;

    if (votos_candidato2 > maior_votos) {
        maior_votos = votos_candidato2;
        candidato_vencedor = 2;
    }

    if (votos_candidato3 > maior_votos) {
        maior_votos = votos_candidato3;
        candidato_vencedor = 3;
    }

    printf("\nResultados:\n");
    printf("Número de votos do Candidato Jair Rodrigues: %d\n", votos_candidato1);
    printf("Número de votos do Candidato Carlos Luz: %d\n", votos_candidato2);
    printf("Número de votos do Candidato Neves Rocha: %d\n", votos_candidato3);
    printf("Porcentagem de votos nulos: %.2f%%\n", porcentagem_nulos);
    printf("Porcentagem de votos brancos: %.2f%%\n", porcentagem_brancos);
    printf("Candidato vencedor: Candidato %d\n", candidato_vencedor);

    return 0;
}
