/*169-*/

#include <stdio.h>
#include <string.h>

int main(){

    char palavra[20];
    int vogais = 0;
    int tamanho;

    printf("Digite uma palavra: \n");
    fgets(palavra, 20, stdin);

    tamanho = strlen(palavra) - 1;

    for(int i= tamanho; i>=0; i--){
        printf("%c", palavra[i]);
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
            vogais++;
        }
    }

    printf("\nQuantidade de vogais: %d", vogais);

    return 0;
}