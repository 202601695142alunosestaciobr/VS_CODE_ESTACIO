#include <stdio.h>

int main(){

    int num1, num2;

    printf("Digite Primeiro Valor: ");
    scanf("%i", &num1);
    printf("\nDigite Segundo Valor: ");
    scanf("%i", &num2);

    /*Operadores ternarios, serve para simplificação do código e organização*/
    /* condição ? Verdadeiro : Falso */

    num1 > num2 ? printf("\n\nPrimeiro Valor %i Maior que Segundo Valor %i\n\n", num1, num2) : printf("Segundo Valor %i Maior que Primeiro Valor %i\n\n", num2, num1);

    return 0;
}