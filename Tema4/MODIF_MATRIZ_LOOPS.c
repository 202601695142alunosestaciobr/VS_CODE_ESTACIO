#include <stdio.h>

int main(){

    int matriz[3][3] = {{2,4,9},{8,5,6},{1,3,4}};

    for (size_t i = 0; i < 3; i++)//leitura das linhas
    {
        for (size_t j = 0; j < 3; j++)//leituras das colunas
        {
            if (matriz[i][j] > 5)//elemento maior que 5 torna-se negativo
            {
                matriz[i][j] = -matriz[i][j]; 
            }
            
            printf("%d\t", matriz[i][j]);
        }

        printf("\n");
        
    }
    
    printf("\n");

    return 0;
}