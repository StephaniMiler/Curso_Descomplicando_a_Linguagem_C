/*9- Dado o programa abaixo, mostra a saída que será impressa na tela:
#include <stdio.h>
int f2(int a, int b) {
    return a / b;
}
void f1(int *x, int *y) {
    (*x) = f2(*x, *y);
    (*y) = f2(*y, *x);
 }
int main() {
    int x = 10;
    int y = 5;
    printf("%d %d\n", f2(x, y), x);
    f1(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}*/

//R: 2 10
//   2 2
