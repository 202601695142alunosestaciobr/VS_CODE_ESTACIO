#include <stdio.h>

int main(){

    char letra;

    /*Realiza a inserção de letras de mode a ficar disponivel os endereços*/
    for (size_t i = 0; i <=5; i++)
    {
        letra = 'A';

        for (size_t j = 0; j <= i; j++)//limita o valor de acordo com o valor de i
        {
            printf("%c ", letra);

            letra++;
        }
        
        printf("\n");
    }
    
    return 0;
}