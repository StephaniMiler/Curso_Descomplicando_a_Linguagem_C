/*147- Dado o programa , mostre a saída que será impressa na tela.

#include <stdio.h>
int f2(int c, int d){
	return c + d;}

void f1(int a, int *b){
	(*b) = 5 + f2(a, *b);}

int main(){
    int x=3;
    int y=4;
    printf(“%d %d %d\n”, x, y, f2(x, 2 * y));

f1(y, &x);
    printf(“%d %d\n”, x, y);
    return 0;
}
*/

//primeiro printf: 3 4 11
//segundo printf: 12,4

