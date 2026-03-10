#include <stdio.h>

int main(){

    /*Calculadora com estrutura aninhada*/
    for (size_t i = 1; i <= 10; i++)
    {
        for (size_t j = 1; j <= 10; j++) //a cada  incrementos de j temos um incremento de i
        {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        
        printf("\n");
    }
        
    return 0;
}