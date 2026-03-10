#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    /*Declarado as variaveis*/
    char opcao;
    unsigned int escolha_jogador, escolha_computador, resultado;

    /*Criado layout + coleta de dados*/
    printf("### JOGO MAIOR IGUAL MENOR ###\n\n");
    printf("*** Escolha o jogo ***\n");
    printf(">>> M. Maior\n>>> N. Menor\n>>> G. Igual\n\nEscolha: ");
    scanf("%c", &opcao);
    printf("\nDigite um número inteiro: ");
    scanf("%i", &escolha_jogador);

    /*Definido a função para geração do numero aleatório*/
    srand(time(0));
    escolha_computador = rand() % 100 + 1;

    /*Definido a logica de decisão com switch, if e else*/
    switch (opcao)
    {
    case 'M':
    case 'm':
        
        resultado = escolha_jogador > escolha_computador ? 1 : 0; //Operador Ternário para simplificação de IF
        
        printf("\n\nVocê escolheu: %i e Sorteado foi: %i\n", escolha_jogador, escolha_computador);

        if (resultado == 1)
        {
            printf("Parabens, você venceu!!!\n");
        }else{
            printf("Não foi desta vez!!!\n");
        }
        
        break;
    
    case 'N':
    case 'n':
        
        resultado = escolha_jogador < escolha_computador ? 1 : 0;
        
        printf("\n\nVocê escolheu: %i e Sorteado foi: %i\n", escolha_jogador, escolha_computador);

        if (resultado == 1)
        {
            printf("Parabens, você venceu!!!\n");
        }else{
            printf("Não foi desta vez!!!\n");
        }
        
        break;
 
    case 'G':
    case 'g':
        
        resultado = escolha_jogador == escolha_computador ? 1 : 0;

        printf("\n\nVocê escolheu: %i e Sorteado foi: %i\n", escolha_jogador, escolha_computador);
        
        if (resultado == 1)
        {
            printf("Parabens, você venceu!!!\n");
        }else{
            printf("Não foi desta vez!!!\n");
        }
        
        break;
            
    default:

        printf("Escolha opção valida!\n");

        break;
    }
    return 0;
}