#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    unsigned int escolha_jogador, escolha_comptador;

    printf(">>> Jogo JOQ-PO <<<\n\n");
    printf("Escolha sua arma!!!\n");
    printf("1. Pedra\n2. Papel\n3. Tesoura\n\n");
    scanf("%u", &escolha_jogador);

    srand(time(0));
    escolha_comptador = rand() % 3 + 1;

    switch (escolha_jogador)
    {
    case 1:
        printf("Jogador: 1. Pedra\n");
        break;
    case 2:
        printf("Jogador: 2. Papel\n");
        break;
    case 3:
        printf("Jogador: 3. Tesoura\n");
        break;
    
    default:
        printf("Escolha opção valida\n");
        break;
    }
    switch (escolha_comptador)
    {
    case 1:
        printf("Computador: 1. Pedra\n");
        break;
    case 2:
        printf("Computador: 2. Papel\n");
        break;
    case 3:
        printf("Computador: 3. Tesoura\n");
        break;
    }

    /*Pedra ganha Tesoura, tesoura ganha papel, papel ganha Pedra*/

    if (escolha_comptador == escolha_jogador)
    {
        printf("### Jogo Empatado ###\n\n");
        
    }else if ((escolha_jogador == 1) && (escolha_comptador == 3) || 
        (escolha_jogador == 3) && (escolha_comptador == 2) || 
        (escolha_jogador == 2) && (escolha_comptador == 1))
    {
        printf("### Parabens Você Ganhou!!! ###\n\n");
    }else{
        printf("### Você Perdeu!!! ###\n\n");
    }
    

    return 0;
}