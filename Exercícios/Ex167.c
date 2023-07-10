/*167- Escreva um programa que receba o valor do raio de uma esfera e retorne o seu volume. O 
cálculo do volume da esfera deve ser feito em uma função chamada volume_esfera definida antes da
função main().V = 4/3 π r³*/

#include <stdio.h>

float volume(float raio){

   float volume = (4.00/3.00) * 3.14 * (raio * raio * raio);

    return volume;
}

int main(){

    float raio;
    float resultado;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    volume(raio);

    resultado = volume(raio);

    printf("O valor do volume eh: %.2f", resultado);

   return 0;
}

