/*7- Em uma aplicação que trabalha com triângulos, definiu-se uma struct para armazenar os 
comprimentos dos três lados (valores reais) de um dado triângulo. Além disso, existe uma função 
que recebe os dados de dois triângulos A e B (dois parâmetros do tipo struct descrito 
anteriormente) e retorna 1 se a área do triângulo A for maior que a área do triângulo B e 0 
caso contrário. Implemente a função que realiza essa comparação.
*/

#include <stdio.h>
#include <math.h>

typedef struct triangulo {
    float lado1;
    float lado2;
    float lado3;
} Triangulo;

float calcularArea(Triangulo t) {
    float semiperimetro = (t.lado1 + t.lado2 + t.lado3) / 2;
    float area = sqrt(semiperimetro * (semiperimetro - t.lado1) * (semiperimetro - t.lado2) * (semiperimetro - t.lado3));
    return area;
}

int comparaAreas(Triangulo A, Triangulo B) {
    float areaA = calcularArea(A);
    float areaB = calcularArea(B);

    if (areaA > areaB) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    Triangulo A = {3.0, 4.0, 5.0};
    Triangulo B = {6.0, 8.0, 10.0};

    int resultado = comparaAreas(A, B);

    if (resultado == 1) {
        printf("A área do triângulo A é maior do que a área do triângulo B.\n");
    } else {
        printf("A área do triângulo A não é maior do que a área do triângulo B.\n");
    }

    return 0;
}
