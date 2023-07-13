/*2- Qual eh a saída do programa abaixo?*/
/*R: ____*
     ___***
     __*****
     _*******
     *********
*/


#include <stdio.h>

int main(){

    int i, j ,k;
    int r = 5;

    for(i = r; i>=1; i--){
        for(k=0; k<4; k++){
            printf("_");
        }
        for(j=i; j<= 2*(i-1); j++){
            printf("*");
        }
        printf("\n"); //saiu dos dois loops pula linha
    }

    return 0;
}