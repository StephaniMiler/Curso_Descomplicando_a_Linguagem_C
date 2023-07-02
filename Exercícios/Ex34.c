/*34- Voce está desenvolvendo um sistema de compra de carro. Este sistema deve pedir a idade do usuário.
-Se a idade for menor que 18, deve imprimir que o usuário é de menor e não pode realizar a compra, caso contrário, 
o sistema deve lver o dinheiro disponivel do usuário e em seguida imprimir as opçoes de carro:
-BMW 1000
-Mercedez 2000
-Ferrari 3000
-Desistir
O usuário deve escolher a opção que deseja. Se escolher desistir o sistema deve imprimir "Voce desistiu da compra". 
Caso o usuário tenha escolhido e seu dinheiro seja suficiente, imprime "Compra realizada com sucesso!". 
Se não for suficiente, imprime "Seu dinheiro é insuficiente"*/

#include <stdio.h>

int main() {
    int idade, modelo;
    float dinheiro;

    printf("Insira a sua idade: \n");
    scanf("%i", &idade);

    if (idade < 18) {
        printf("Você é menor de idade, não pode comprar um carro!\n");
    } else {
        printf("Digite o valor em dinheiro que você tem: \n");
        scanf("%f", &dinheiro);
        if (dinheiro < 1000) {
            printf("Você não tem dinheiro suficiente para comprar um carro!\n");
        } else {
            printf("Digite a opção desejada: 1- BMW 2- Mercedez 3- Ferrari 4- Desistir\n");
            scanf("%i", &modelo);
            if (modelo == 4) {
                printf("Você desistiu da compra!\n");
            } else if ((modelo == 1) || (modelo == 2 && dinheiro >= 2000) || (modelo == 3 && dinheiro >= 3000)) {
                printf("Compra realizada com sucesso!\n");
            } else {
                printf("Dinheiro insuficiente! Escolha outro modelo!\n");
            }
        }
    }
    
    return 0;
}
