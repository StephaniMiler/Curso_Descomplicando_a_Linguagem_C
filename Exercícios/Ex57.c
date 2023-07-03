/*57- A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de 
filhos. A prefeitura deseja saber: 
a) média do salário da população;
b) média do número de filhos;
c) maior e menor salário;
d) percentual de habitantes com mais de 2 filhos.
A quantidade de habitantes que serão cadastrados é fornecida pelo usuário.*/

#include <stdio.h>

int main() {
    int n;
    int s;
    int f;
    int soma_s = 0;
    int soma_f = 0;
    int maior_s = 0;
    int menor_s = 0;
    int mais_de_dois_filhos = 0;

    printf("Informe a quantidade de habitantes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Informe o salário do habitante %d: ", i+1);
        scanf("%d", &s);

        printf("Informe o número de filhos do habitante %d: ", i+1);
        scanf("%d", &f);

        soma_s += s;
        soma_f += f;

        if (i == 0) {
            maior_s = s;
            menor_s = s;
        } else {
            if (s > maior_s) {
                maior_s = s;
            }
            if (s < menor_s) {
                menor_s = s;
            }
        }

        if (f > 2) {
            mais_de_dois_filhos++;
        }
    }

    float media_s = (float)soma_s / n;
    float media_f = (float)soma_f / n;
    float percentual_mais_de_dois_filhos = (float)mais_de_dois_filhos / n * 100;

    printf("\n");
    printf("Média do salário da população: %.2f\n", media_s);
    printf("Média do número de filhos: %.2f\n", media_f);
    printf("Maior salário: %d\n", maior_s);
    printf("Menor salário: %d\n", menor_s);
    printf("Percentual de habitantes com mais de 2 filhos: %.2f%%\n", percentual_mais_de_dois_filhos);

    return 0;
}
