/*148- Exemplo de ponteiro*/

#include <stdio.h>

int main(){

    int x;
    x =10;

    int *ponteiro;
    ponteiro = &x; //O ponteiro recebe o endereço de x

    printf("%d\n", x); //imprime o valor de x
    printf("%d\n", &x); //imprime o endereço de x
    printf("%d\n", *ponteiro); //imprime o conteúdo de ponteiro, que recebe o mesmo que x pois está apontando para ele
    printf("%d\n", &ponteiro); //imprime o endereço de ponteiro
    printf("%d\n", ponteiro);// imprime o endereço de x
    
    return 0;
}