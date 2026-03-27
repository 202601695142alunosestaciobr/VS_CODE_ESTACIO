#include <stdio.h>

int main(){

    int number[5] = {1,2,3,4,5};
    int soma = 0;

    for (size_t i = 0; i < 5; i++)
    {
        soma += number[i];//soma o valor da variável soma a variável number

        printf("O valor da lista: %d\n", number[i]);
    }

    printf("\nA soma total é : %d\n", soma);
    
    return 0;
}