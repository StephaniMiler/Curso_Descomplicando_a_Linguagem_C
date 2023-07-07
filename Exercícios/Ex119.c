/*119- Receber uma palavra, calcule quantas vogais (a, e, i, o, u) possui essa palavra. Entre com um caractere 
(vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere.*/

#include <stdio.h>
int main(){

    char palavra[10];
    int vogais = 0;
    char caractere;

    printf("Digite uma palavra: ");
    fgets(palavra, 10, stdin);
    printf("\nDigite um caractere para substituir as vogais da palavra digitada: ");
    scanf("%c", &caractere);

    for(int i=0; i<= 9; i++){
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra [i] == 'o' || palavra[i] == 'u'){
        vogais ++;
        palavra[i] = caractere;
        }
    }

    printf("Resultado da palavra digitada: %s", palavra);

    return 0;
}