/*47- Crie um programa que lê uma letra do alfabeto e imprime na tela todas as letras até z*/

#include <stdio.h>

int main() {
    char letra;
    
    printf("Digite uma letra do alfabeto: ");
    scanf("%c", &letra);
    
    if (letra >= 'a' && letra <= 'z') {
        printf("As letras seguintes sao: ");
        for (char i = letra; i <= 'z'; i++) {
            printf("%c ", i);
        }
        printf("\n");
    } else {
        printf("Por favor, digite uma letra minuscula do alfabeto.\n");
    }
    
    return 0;
}
