#include <stdio.h>

int main(){

    /*ESTRUTURA ANINHADA*/

    unsigned int material, epi, mat_tecnico;

    printf("Digite 1 Se formaterial Técnico ou Digite 0 Se EPI's: \n");
    scanf("%u", &material);

    if (material > 0){

        printf("Digite código Material Técnico: \n");
        scanf(" %u", &mat_tecnico);

        if (mat_tecnico < 50000)
        {
            printf("Você Cadastrou a Ferragem!\n");

        }else{

            printf("você Cadastrou um Cabo!\n");

        }
        
    }else{

        printf("Digite código Material EPI: \n");
        scanf(" %u", &epi);

        if (epi > 10000)
        {
            printf("Você Cadastrou uma Vestimenta!\n");

        }else{

            printf("você Cadastrou uma Bota!\n");

        }


    }

    return 0;
}