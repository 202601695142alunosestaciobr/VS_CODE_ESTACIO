#include <stdio.h>

/*Função para varias chamadas de forma recursivas*/
void recursividade(int num){

    if (num > 0)
    {
        printf("%d ", num);

        recursividade(num-1);
    }
    
}

/*Função pricipal*/
int main(){

    int valor = 10;

    recursividade(valor);

    return 0;
}