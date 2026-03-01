#include <stdio.h>

int main(){

    /*ESTRUTURA ENCADEADA*/

    unsigned int idade;

    printf("Digite a Idade: \n");
    scanf("%u", &idade);

    if (idade >= 60 && idade <= 150)
    {
        printf("Idoso!\n\n");

    }else if (idade < 60 && idade >= 18)
    {
        printf("Adulto!\n\n");

    }else if (idade < 18 && idade >= 12)
    {
        printf("Adolecente!\n\n");

    }else if (idade > 0 && idade < 12)
    {
        printf("Criança!\n\n");
        
    }else{

        printf("Digite Idade Valida!\n\n");
    }
        
    return 0;
}