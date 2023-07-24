/*5- Informe os problemas do código abaixo:*/
/*
#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int * soma_vetor(int * A, int * B){
    int resultado[TAM];
    int i;

    for(i= 0; i<TAM; i++){
        resultado[i] = A[i] + B[i];
    }

    return resultado;
}

int main(){
    int vetorA[TAM];
    int vetorB[TAM];
    int * vetorC;
    int i;

    for(i=0; i<TAM; i++){
        scanf("%d %d", &vetorA[i], &vetorB[i]);
    }

    vetorC = soma_vetor(vetorA, vetorB);

    for(i=0; i<TAM; i++){
        printf("%d\n", vetorC[i]);
    }

    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int *soma_vetor(int *A, int *B) {
    int *resultado = malloc(TAM * sizeof(int)); // Aloca o vetor dinamicamente
    int i;

    for (i = 0; i < TAM; i++) {
        resultado[i] = A[i] + B[i];
    }

    return resultado;
}

int main() {
    int vetorA[TAM];
    int vetorB[TAM];
    int *vetorC;
    int i;

    for (i = 0; i < TAM; i++) {
        scanf("%d %d", &vetorA[i], &vetorB[i]);
    }

    vetorC = soma_vetor(vetorA, vetorB);

    for (i = 0; i < TAM; i++) {
        printf("%d\n", vetorC[i]);
    }

    free(vetorC); // Libera a memória alocada para o vetorC

    return 0;
}

//OU

#include <stdio.h>

#define TAM 10

int resultado[TAM]; // Declaração do vetor resultado como variável global

void soma_vetor(int *A, int *B) {
    int i;

    for (i = 0; i < TAM; i++) {
        resultado[i] = A[i] + B[i];
    }
}

int main() {
    int vetorA[TAM];
    int vetorB[TAM];
    int i;

    for (i = 0; i < TAM; i++) {
        scanf("%d %d", &vetorA[i], &vetorB[i]);
    }

    soma_vetor(vetorA, vetorB);

    for (i = 0; i < TAM; i++) {
        printf("%d\n", resultado[i]);
    }

    return 0;
}
