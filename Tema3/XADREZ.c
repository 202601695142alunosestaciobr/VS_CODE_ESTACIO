#include <stdio.h>

int main (){

    int torre = 1, bispo = 1, rainha;

    /*Cabeçalho do Programa*/
    printf("*** XADREZ - NIVEL AVENTUREIRO ***\n\n");
    printf(">>> Torre <<<\n");

    /*Ação repetição movimentação da Torre*/
    while (torre <= 5)
    {
        printf("%d. Direita\n", torre);
        torre++;
    }

    /*Cabeçalho do Programa*/
    printf("\n>>> Bispo <<<\n");

    /*Ação repetição movimentação da Bispo*/
    do
    {
        printf("%d. Cima, Direita\n", bispo);
        bispo++;
    } while (bispo <= 5);
   
    /*Cabeçalho do Programa*/
    printf("\n>>> Rainha <<<\n");
    
    /*Ação repetição movimentação da rainha*/
    for (size_t rainha = 1; rainha <= 8; rainha++)
    {
        printf("%d. Esquerda\n", rainha);
    }

    /*Cabeçalho do Programa*/
    printf("\n>>> Cavalo <<<\n");

    /*Ação repetição aninhada do cavalo*/
    for (size_t cavalo = 1; cavalo <= 2; cavalo++)//cavalo inicia com 1 e no loop 2 ele tabém arealiza ação while.
    {
        printf("%d. Baixo\n", cavalo);

        while (cavalo == 2)//ocorrê apenas uma vez.
        {
            printf("%d. Esquerda\n", cavalo+1); //incremetado o valor 1 para diferenciar o indice.

            cavalo++;
        }
        
    }
    
    printf("\n");

    return 0;
}