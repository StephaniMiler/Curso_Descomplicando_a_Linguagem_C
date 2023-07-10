/*168- */

#include <stdio.h>

int main(){
	float notas[10];
	int faltas[10];

	for(int i=0; i<10; i++){
		printf("Digite a nota e as faltas do aluno %d: ", i+1);
		scanf("%f %d", &notas[i], &faltas[i]);
		if(notas[i] < 5 || faltas[i] >= 16){
			printf("Reprovado.\n");
        }
		else{
			printf("Aprovado.\n");
		}
	}

	return 0;
}