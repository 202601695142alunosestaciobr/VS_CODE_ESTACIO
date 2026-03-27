#include<stdio.h>

    /*Define um array com 4 elementos do tipo inteiro*/
    int num[4] = {3879,29,758,51};
    char letra[3] = {'A','H','Y'};
    char *palavras[] = {"casa", "carro", "Barco"};

void num_array(){

    /*Imprime o valor do array do tipo inteiro*/
    printf("O Array do indice zero vale: %d\n", num[0]);//informar entre bloco o endereço que encontra-se o valor.
    printf("O Array do indice um vale: %d\n", num[1]);
    printf("O Array do indice dois vale: %d\n", num[2]);
    printf("O Array do indice três vale: %d\n", num[3]);
}

void letras_array(){

    /*Imprime o valor do array do tipo inteiro*/
    printf("\nO Array do indice zero vale: %c\n", letra[0]);//informar entre bloco o endereço que encontra-se o valor.
    printf("O Array do indice um vale: %c\n", letra[1]);
    printf("O Array do indice dois vale: %c\n\n", letra[2]);

}

void ponteiro_frases_array(){

    /*Faz varedura de acordo com a quantidades de elementos em cada endereço*/
    for (size_t i = 0; i < 3; i++)
    {
        printf("A palavra no endereço %d é:  %s\n", i, palavras[i]);
    }
    


}

int main(){
    
    /*chama as funções*/
    num_array();
    letras_array();
    ponteiro_frases_array();

    return 0;


}