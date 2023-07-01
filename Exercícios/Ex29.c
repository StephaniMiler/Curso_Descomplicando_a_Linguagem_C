/*29- Escreva um programa que peça ao usuário 3 valores reais: r, c1 e c2. O primeiro representa o raio de uma 
circunferência, e os outros dois valores representam o centro. Peça para o usuário digitar mais dois valores reais: 
p1 e p2, que representam as coordenadas de um ponto. Imprima “Estah dentro”, se o ponto (p1,p2) está dentro da 
circunferência, caso contrário, imprima “Estah fora”.*/

#include <stdio.h>
#include <math.h>

int main() {
    float r, c1, c2, p1, p2, distancia;

    // Solicitar os valores do usuário
    printf("Digite o raio da circunferência: ");
    scanf("%f", &r);
    printf("Digite a coordenada x do centro: ");
    scanf("%f", &c1);
    printf("Digite a coordenada y do centro: ");
    scanf("%f", &c2);
    printf("Digite a coordenada x do ponto: ");
    scanf("%f", &p1);
    printf("Digite a coordenada y do ponto: ");
    scanf("%f", &p2);

    // Calcular a distância entre o centro e o ponto usando a fórmula da distância entre dois pontos
    distancia = sqrt(pow(p1 - c1, 2) + pow(p2 - c2, 2));

    // Verificar se o ponto está dentro da circunferência
    if (distancia <= r) {
        printf("Esta dentro\n");
    } else {
        printf("Esta fora\n");
    }

    return 0;
}
