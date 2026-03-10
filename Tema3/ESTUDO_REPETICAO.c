#include <stdio.h>

int main(){

    int i = 0, numero, tabuada;

    /*While*/
    while (i <= 10)
    {
        if (i % 2 == 0)
        {
            printf("O número %d é par\n", i);
        }
        
        i++;
    }
    
    /*Do-while*/
    do
    {
        printf("\nDigite numero par para sair do progrmada: ");
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            printf("\nEste numero %d é par!\n\nSaindo do programa...");
        }else{
            printf("\nEste numero %d é impar!");
        }
        
    } while (numero % 2 != 0);

    /*For*/
    printf("\n\nDigite numero para criar a tabuada: ");
    scanf("%d",&tabuada);
    printf("\n");
    
    for (size_t i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n", i, tabuada, i * tabuada);
    }
    
    

    return 0;
}