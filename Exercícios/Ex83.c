/*83 -Escreva um programa que leia um número inteiro positivo e calcule a soma dos
seus dígitos. O programa deve exibir o resultado na tela. Por exemplo, se o número
for 1234, a saída deverá ser 10 (1 + 2 + 3 + 4).*/

#include "stdio.h"

int main(){
	int numero, soma;
	soma = 0;
	
	printf("Digite um numero:\n" );
	scanf("%d", &numero);
	
	for(int i= numero; i=0; i--){
		soma = soma + i;
	}

    return 0;	
}