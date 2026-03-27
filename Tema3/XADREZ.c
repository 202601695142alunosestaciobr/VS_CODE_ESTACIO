#include <stdio.h>


/*Funções recursivas movimentos peças xadrez*/
void torre_direita(int mov_torre_dir){

    if (mov_torre_dir > 0)
    {
        torre_direita(mov_torre_dir - 1);//Decrementar primeiro para que fique ordem decrescente.
        printf("Casa -> %d -> Direita\n", mov_torre_dir);

    }
}

void bispo_direita(int mov_bispo_dir){

    for (size_t i = 1; i < 6; i++)//Realiza ação entra loop for j sai loop incrementa.
    {
        printf("Casa -> %d -> Cima, ", i);

        for (size_t j = 0; j < 1; j++)//Entra no loop incrementa 1 sai do loop.
        {
            printf("Direita\n");
        }
    }
    
}

void rainha_esquerda(int mov_rainha_esq){

    for (size_t i = 0; i < mov_rainha_esq; i++)
    {
        printf("Casa -> %d -> Esquerda\n", i+1);
    }
}

void cavalo_L(int mov_cavalo_l){

    for (size_t i = 1; i <= 2; i++)//cavalo inicia com 1 e no loop 2 ele tabém arealiza ação while.
    {
        printf("Casa -> %d -> Baixo, ", i);

        while (i == 2)//ocorrê apenas uma vez.
        {
            printf("Esquerda"); //incremetado o valor 1 para diferenciar o indice.

            i++;
        }
        
        printf("\n");
    }


}

int main (){

    int torre = 5, bispo = 5, rainha = 2;

    /*Cabeçalho Programa*/
    printf("*** XADREZ - NIVEL AVENTUREIRO ***\n\n");
    printf(">>> Torre <<<\n");

    /*Chama função movimentação Torre, valor declarado variavel torre*/
    torre_direita(torre);

    /*Cabeçalho Programa*/
    printf("\n>>> Bispo <<<\n");

    /*Chama função movimentação Bispo, valor declarado variavel bispo*/
    bispo_direita(bispo);
   
    /*Cabeçalho do Programa*/
    printf("\n>>> Rainha <<<\n");
    
    /*Chama função movimentação Rainha, valor declarado variavel rainha*/
    rainha_esquerda(rainha);

    /*Cabeçalho do Programa*/
    printf("\n>>> Cavalo <<<\n");

    /*Chama função movimentação Cavalo, valor declarado variavel cavalo*/
    cavalo_L(1);

    return 0;
}