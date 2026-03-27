#include <stdio.h>

int main(){

    int matriz_1[2][2] = {{1,3},{7,9}};
    int matriz_2[2][2] = {{2,4},{6,8}};
    int matriz_soma[2][2];

    printf("Soma das Matrizes vale:\n\n");

    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            matriz_soma[i][j] = matriz_1[i][j] + matriz_2[i][j];
            printf("|%d|\t", matriz_soma[i][j]);

            if (j == 1)
            {
                printf("\n");
            }
            
        }
        
    }

    return 0;
}