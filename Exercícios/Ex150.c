/*150- Exemplo de ponteiro 3*/

int main(){

    int x = 10;
    double y = 20.50;
    char z = 'a';

    int    *ponteiroX = &x; //outra forma de atribuição de ponteiros
    double *ponteiroY = &y;
    char   *ponteiroZ = &z;

    printf("Endereco de x= %i | Valor x = %i\n", &x, x);
    printf("Endereco de ponteiroX= %i | Valor de ponteiroX = %i\n", &ponteiroX, *ponteiroX);
    printf("Endereco de Y= %i | Valor Y = %.2f\n", ponteiroY, y);
    printf("Endereco de Z= %i | Valor Z = %c", ponteiroZ, z);

    double soma = *ponteiroX + *ponteiroY;

    printf("\n Valor da soma: %.2f", soma); //Será 10 + 20,50 = 30,50


    return 0;
}