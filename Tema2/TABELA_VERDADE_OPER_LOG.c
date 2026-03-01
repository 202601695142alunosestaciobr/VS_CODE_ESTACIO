#include <stdio.h>

int main(){

    /*Tabela Verdade AND - &&*/

    int A = 0;
    int B = 1;

    printf("Tabela Verdade AND - &&\n\n");

    if (A && B)
    {
        printf(" A: %i && B: %i -> Verdade\n", A, B);

    }   else{

        printf(" A: %i && B: %i -> Falso\n", A, B);
    }

    printf("\n\nTabela Verdade OR - ||\n\n");

    if (A || B)
    {
        printf(" A: %i || B: %i -> Verdade\n", A, B);

    }   else{

        printf(" A: %i || B: %i -> Falso\n\n", A, B);
    }

    printf("\n\nTabela Verdade NOT - !\n\n");

    if (!A)
    {
        printf(" A: %i -> Verdade\n", A);

    }   else{

        printf(" A: %i -> Falso\n", A);
    }    

    if (!B)
    {
        printf(" B: %i -> Verdade\n", B);

    }   else{

        printf(" B: %i -> Falso\n", B);
    }    

    

    return 0;
}