#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    /*Define as variaveis do jogo*/

    unsigned int opcao, regra, numero_aleatorio, numero_palpite;

    /*Tras as opções de escolha do jogo*/

    printf(">>> JOGO DESCUBRA NUMERO SECRETO <<<\n\n");
    printf("1. Iniciar\n");
    printf("2. Regras\n");
    printf ("3. Sair\n");
    printf("\nDIGITE A OPÇÃO ESCOLHIDA: ");
    scanf("%u", &opcao);

    /*Cria a Logica do jogo*/

    switch (opcao) //Estrutura de descição encadeadas tipo switch
    {
    case 1:

        srand(time(0));
        numero_aleatorio = rand() % 10 + 1;

        printf("\n>>> VAMOS JOGAR!!!\n\n");
        printf("Advinhe o número aleatório de 1 a 10\n");
        printf("Digite o numero escolhido: ");
        scanf("%u", &numero_palpite);

        /*Cria a comparação do jogo*/
        if (numero_aleatorio == numero_palpite)
        {
            printf("\nVocê acertou!!!\n\n");
            printf("Palpite: %u >> Sorteado: %u\n", numero_palpite, numero_aleatorio);
        }else{
            printf("\nNão foi desta vez ): \n");
            printf("Palpite: %u >> Sorteado: %u\n", numero_palpite, numero_aleatorio);
        }     
        
        break;
    case 2:
        printf("\n>>> VAMOS AS REGRAS!!!\n");
        break;
    case 3:
        printf("\n>>> VOLTE SEMPRE\n");
        break;            
    default:
        printf("\nESCOLHA UMA OPÇÃO VALIDA\n");
        break;
    }


    return 0;
}