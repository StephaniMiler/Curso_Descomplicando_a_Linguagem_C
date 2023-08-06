/*8- Dado o programa abaixo, mostre a saída que será impressa na tela:
#include <stdio.h>

int f2(int a, int b) {
    return a - b;
}

void f1(int *x, int y) {
    y = f2(y, *x);
    (*x) = f2(*x, y);
}

int main() {
    int x = 6;
    int y = 4;

    printf("%d %d\n", x, f2(x, y));
    f1(&x, y);
    printf("%d %d\n", x, y);

    return 0;
}
*/

//R: 6 2
//   8 4