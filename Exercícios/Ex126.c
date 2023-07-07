/*126- O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo de substituição na 
qual cada letra do texto é substituída por outra, que se apresenta no alfabeto abaixo dela um número fixo de 
vezes. Por exemplo, com uma troca de três posições, ‘A’ seria substituído por ‘D’, ‘B’ se tornaria ‘E’, e 
assim por diante. Implemente um programa que faça uso desse Código de César (3 posições), entre com uma string
e retorne a string codificada. Exemplo: String: a ligeira raposa marrom saltou sobre o cachorro cansado, Nova 
string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR (com caracteres maiúsculos)
OBS: Os caracteres 'x', 'y' e 'z', que são os três últimos devem ser substituídos por 'A', 'B' e 'C' 
respectivamente.
OBS: O caracter ' ' (espaço deve ser mantido)*/

#include <stdio.h>
#include <ctype.h>

char codificarCaractere(char caractere) {
    if (isalpha(caractere)) {
        // Verifica se o caractere é 'x', 'y' ou 'z'
        if (caractere == 'x')
            return 'A';
        else if (caractere == 'y')
            return 'B';
        else if (caractere == 'z')
            return 'C';

        // Realiza a troca de três posições no alfabeto
        char base = islower(caractere) ? 'a' : 'A';
        return (caractere - base + 3) % 26 + base;
    }

    // Retorna o caractere original caso não seja uma letra
    return caractere;
}

void codificarString(char *string) {
    for (int i = 0; string[i] != '\0'; i++) {
        string[i] = codificarCaractere(string[i]);
    }
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    codificarString(string);

    printf("Nova string codificada: %s\n", string);

    return 0;
}
