/*149- Exemplo de ponteiro 2*/

#include <stdio.h>

int main(){

    int x = 10;
    int *ponteiro;
    ponteiro = &x;

    int y = 20;
    *ponteiro = y; //O ponteiro colocará o valor de y no endereço da variável x

    printf("%d %d", x, y); //saída sera 20 20 pois o ponteiro alterou o valor de x

    return 0;

}
