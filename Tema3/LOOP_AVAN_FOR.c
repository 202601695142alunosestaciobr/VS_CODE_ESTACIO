#include <stdio.h>

int main(){

    /*Possui mais de uma variel sem a necessidade de gerar mais um loop*/
    for (size_t i = 0, j = 10; i <= j; i++, j--)
    {
        printf("I = %d -> J = %d\n", i, j);
    }

    printf("\n");

    /*Identificar funções booleanas*/
    for (size_t i = 0, j = 10; i <= 5 && j > 5; i++, j--)
    {
        printf("I = %d -> J = %d\n", i, j);
    }
    
    
    return 0;
}