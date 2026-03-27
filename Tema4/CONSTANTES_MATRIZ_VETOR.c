#include <stdio.h>

#define LINHAS 2
#define COLUNAS 4 //Raliza definição linhas colunas com valor fixo facilitar modificação codigo.

int main(){

    int matriz[LINHAS][COLUNAS];
    int soma = 0;

    for (size_t i = 0; i < LINHAS; i++)
    {
        for (size_t j = 0; j < COLUNAS; j++)
        {
            soma++;
            matriz[i][j] = soma;//Ao definir "i" e "j" grava-se o valor na posição atual.

            printf("%d\t", matriz[i][j]);
        }
        
        printf("\n");
    }
    
    return 0;
}