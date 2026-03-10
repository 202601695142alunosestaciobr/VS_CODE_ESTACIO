#include <stdio.h>

int main(){

    unsigned short int cont = 1, cont_2 = 1;

    /*While*/
    while (cont <= 5) //enquanto for verdade imprime valor de cont.
    {
        printf("%u | ", cont); //imprimi na tela o valor de cont.
        cont++; // incrimeta valor a constante evita loop infinito.
    }

    /*Do-while*/
    do//Garante a execução pelo menos uma vez.
    {
        printf("\n %u", cont_2);
        cont_2++;
    } while (cont_2 <= 5); //enquanto for verdade imprime valor de cont.

    /*For*/
    for (size_t i = 0; i < 5; i++) //
    {
        printf("For | ");
    }
    /*Por que usar size_t em vez de int?
    Embora o int funcione perfeitamente para contar até 5, usar size_t é considerado
    uma "boa prática" em C quando estamos lidando com contagens de loops ou tamanhos
    de arrays, pois ele garante que o número nunca será negativo e tem o tamanho
    ideal para a memória do seu sistema.*/

    return 0;
}