#include <stdio.h>

int main(){

    char ProdutoA[8] = "BomBril", ProdutoB[8] = "Assolan";
    
    unsigned int EstoqueA = 1000; //unsigned aceita valores positivos apenas
    unsigned int EstoqueB = 2000;
    
    float ValorA = 10.50; //pois necessita apenas de ponto flutante menos preciso.
    float ValorB = 20.40;

    unsigned int Estoq_minA = 500;
    unsigned int Estoq_minB = 2500;

    double Valor_totalA, Valor_totalB;

    int resultadoA, resultadoB;

    /*Exibir informações do produto*/

    printf("Produto %s tem estoque %u é o valor unitário de R$ %.2f\n", ProdutoA, EstoqueA, ValorA);
    printf("Produto %s tem estoque %u é o valor unitário de R$ %.2f\n\n", ProdutoB, EstoqueB, ValorB);

    /*Comparações entre estoque*/

    resultadoA = EstoqueA < Estoq_minA;
    resultadoB = EstoqueB < Estoq_minB;

    printf("O produto %s tem estoque minimo %u, o estoque está abaixo do minimo %i\n", ProdutoA, Estoq_minA, resultadoA);
    printf("O produto %s tem estoque minimo %u, o estoque está abaixo do minimo %i\n\n", ProdutoB, Estoq_minB, resultadoB);

    /*Comparação entre valores totais*/

    Valor_totalA = EstoqueA*ValorA;
    Valor_totalB = EstoqueB*ValorB;

    printf("O valor Total R$ %.2f do produto %s\n", Valor_totalA, ProdutoA);
    printf("O valor Total R$ %.2f do produto %s\n", Valor_totalB, ProdutoB);

    return 0;
}