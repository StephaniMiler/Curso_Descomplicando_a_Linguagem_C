/*28- Dada uma letra, escreva na tela se essa letra é ou não uma vogal. Dica: a função toupper(letra) converte um char 
para caixa alta (maiúsculo) e o retorna, e a função tolower(letra) converte um char para caixa baixa (minúsculo) e o 
retorna. Ambas as funções encontram-se na biblioteca “ctype.h”.*/

#include "stdio.h"
#include "ctype.h"

int main(){

    char letra;

    printf("Digite uma letra: \n");
    scanf(" %c", &letra);

    letra = tolower(letra);

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
        printf("%c eh uma vogal", letra);
    }
    else{
        printf("%c nao eh uma vogal", letra);
    }

    return 0;
}