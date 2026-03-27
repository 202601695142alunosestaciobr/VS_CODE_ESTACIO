#include <stdio.h>


int main(){

    /*Definido as variaveis*/
    int matriz[3][3] = {{3,2,4},{5,7,9},{6,8,1}};//Matriz ou base dados.
    int buscador;//Variavel coleta do dado escolhido
    int verificador = 0; // Verificador booleano

    /*Interação com o usario e coletado do dado para pesquisa*/
    printf("Digite valor de 1 a 9 para localizar livro: ");
    scanf("%d", &buscador);

    /*Ação em Loop for para realizar varredura na matriz*/
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            if (buscador == matriz[i][j])//Realiza ação logica de busca por comparação.
            {
                printf("\n\nNumero %d localizado nas coordenas Matriz [%d] <-> [%d]\n", buscador, i, j);

                verificador = 1;//Torna a variavel verdadeira

                break;//saida do loop
            }
            
        }
        
        if (verificador)// se verdadeiro saída do segundo loop
        {
            break;
        }
        
    }
    
    if (!verificador)//Se não localizado retorna a informação para usuário.
        {
            printf("\n\nNumero %d não localizado na base de dados!", buscador);

        }

    return 0;
}