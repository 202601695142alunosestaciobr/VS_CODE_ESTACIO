#include <stdio.h>

int main(){

    /*Definindo as variantes da carta 01*/
    char estado = 'A', cod_carta[4] = "Bra", cidade[20] = "Brasil"; // Use aspas simples para um único caractere
    int n_pontos_turisticos = 111, comparacao_cartas = 0;
    unsigned long int populacao = 111;
    float area = 1.110, pib = 1.110, densidade_populacional = 1.110, pib_percapita = 1.110, super_poder_cart1 = 1.110;

    /*Definindo as variantes da carta 02*/
    char estado_2 = 'A', cod_carta_2[4] = "Bra", cidade_2[20] = "Brasil"; // Use aspas simples para um único caractere
    int n_pontos_turisticos_2 = 111, comparacao_cartas_2 = 0;;
    unsigned long int populacao_2 = 111;
    float area_2 = 1.11, pib_2 = 1.11, densidade_populacional_2 = 1.110, pib_percapita_2 = 1.110, super_poder_cart2 = 1.110;

    printf("**Super Trunfo - Cidades Brasileiras**\n\n");
    printf("CADASTRO CARTA 01\n");

    /*Coleta de dados da carta 01*/

    printf("DIGITE A LETRA QUE REPRESENTE SEU ESTADO CARTA 01\n");
    printf("A-ALAGOAS >> B-BAHIA >> C-CEARA >> D-PERNAMBUCO\nE-SERGIPE >> F-PARAIBA >> G-PIAUI >> H-MARANHÃO\n");
    scanf(" %c", &estado);
    printf("\n# AGORA VAMOS CADASTRAR AS CARACTERISTA ESTADO CARTA 01 #\n");
    printf("DIGITE A LETRA DO ESTADO ESCOLHIDO MAIS UM NÚMERO ALEATÓRIO: \n");
    scanf(" %s", &cod_carta);
    printf("DIGITE NOME DA CIDADE: \n");
    scanf(" %s", &cidade);
    printf("DIGITE A POPULAÇÃO ATUAL SEM PONTO: \n");
    scanf(" %lu", &populacao);
    printf("DIGITE AREA DO TERRITORIO DO SEU ESTADO COM PONTO: \n");
    while (getchar() != '\n'); //Limpa tudo que restou do buffer até enter, foi necessário devido erro ao saltar o valor do pib.
    scanf(" %f", &area);
    printf("DIGITE O PIB COM PONTO: \n");
    while (getchar() != '\n'); //Limpa tudo que restou do buffer até enter, foi necessário devido erro ao saltar o valor do pib.
    scanf(" %f", &pib);
    printf("DIGITE QUANTIDADE PONTOS TURÍSTICOS SEM PONTO: \n");
    scanf(" %i", &n_pontos_turisticos);

    printf("\n\n**Super Trunfo - Cidades Brasileiras**\n\n");
    printf("CADASTRO CARTA 02\n");

    /*Coleta de dados da carta 02*/

    printf("DIGITE A LETRA QUE REPRESENTE SEU ESTADO CARTA 02\n");
    printf("A-ALAGOAS >> B-BAHIA >> C-CEARA >> D-PERNAMBUCO\nE-SERGIPE >> F-PARAIBA >> G-PIAUI >> H-MARANHÃO\n");
    scanf(" %c", &estado_2);
    printf("\n# AGORA VAMOS CADASTRAR AS CARACTERISTA ESTADO CARTA 02 #\n");
    printf("DIGITE A LETRA DO ESTADO ESCOLHIDO MAIS UM NÚMERO ALEATÓRIO: \n");
    scanf(" %s", &cod_carta_2);
    printf("DIGITE NOME DA CIDADE: \n");
    scanf(" %s", &cidade_2);
    printf("DIGITE A POPULAÇÃO ATUAL SEM PONTO: \n");
    scanf(" %lu", &populacao_2);
    printf("DIGITE AREA DO TERRITORIO DO SEU ESTADO COM PONTO: \n");
    while (getchar() != '\n'); //Limpa tudo que restou do buffer até enter, foi necessário devido erro ao saltar o valor do pib.    
    scanf(" %f", &area_2);
    while (getchar() != '\n'); //Limpa tudo que restou do buffer até enter, foi necessário devido erro ao saltar o valor do pib.
    printf("DIGITE O PIB COM PONTO: \n");
    scanf(" %f", &pib_2);
    printf("DIGITE QUANTIDADE PONTOS TURÍSTICOS SEM PONTO: \n");
    scanf(" %i", &n_pontos_turisticos_2);

    /*Trecho do código de Calculo da Densidade Populacional*/

    densidade_populacional = (float) populacao/area; //Carta1
    densidade_populacional_2 = (float) populacao_2/area_2; //Carta2

    /*Trecho do código de Calculo do PIB Per capta*/

    pib_percapita = (float) pib/populacao;//Carta1
    pib_percapita_2 = (float) pib_2/populacao_2;//Carta2

    /*Trecho do código para calcular o Super Poder da Carta1*/

    super_poder_cart1 = (1/densidade_populacional)+(populacao+area+pib+n_pontos_turisticos+pib_percapita);

    /*Trecho do código para calcular o Super Poder da Carta2*/

    super_poder_cart2 = (1/densidade_populacional_2)+(populacao_2+area_2+pib_2+n_pontos_turisticos_2+pib_percapita_2);

    /*Trecho do código para comparação do Super Poder*/

    comparacao_cartas = super_poder_cart1 > super_poder_cart2;
    comparacao_cartas_2 = super_poder_cart2 > super_poder_cart1;

    /*Trecho do código de visualização do resultado do cadastro carta 01*/

    printf("\n\n**Super Trunfo - Cidades Brasileiras**\n");
    printf("__CARTAS__\n\n");

    printf(">> CARTA: 01 << \n");
    printf("ESTADO: %c \n", estado);
    printf("CARTA: %s \n", cod_carta);
    printf("NOME DO ESTADO: %s \n", cidade);
    printf("POPULAÇÃO: %lu \n", populacao);
    printf("ÁREA: %.2f km²\n", area);
    printf("PIB ATUAL: %.2f \n", pib);
    printf("PONTOS TURISTÍCOS: %i \n", n_pontos_turisticos);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_percapita);
    printf("SUPER PODER: %.2f\n", super_poder_cart1);

    /*Trecho do código de visualização do resultado do cadastro carta 02*/
    
    printf(" \n \n>> CARTA: 02 << \n");
    printf("ESTADO: %c \n", estado_2);
    printf("CARTA: %s \n", cod_carta_2);
    printf("NOME DO ESTADO: %s \n", cidade_2);
    printf("POPULAÇÃO: %lu \n", populacao_2);
    printf("ÁREA: %.2f \n", area_2);
    printf("PIB ATUAL: %.2f \n", pib_2);
    printf("PONTOS TURISTÍCOS: %i \n", n_pontos_turisticos_2);
    printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidade_populacional_2);
    printf("PIB per Capita: %.2f reais\n", pib_percapita_2);
    printf("SUPER PODER: %.2f\n\n", super_poder_cart2);

    /*Trecho do código para comparação das cartas com estrutura de decisão*/

    printf("**Super Trunfo - Cidades Brasileiras**\n\n");
    printf("Carta 1 - %s : %lu\n", cidade, populacao);
    printf("Carta 2 - %s : %lu\n", cidade_2, populacao_2);

    if(populacao > populacao_2){

        printf("Resultado: Carta 1 ( %s ) venceu!\n", cidade);

    } else{

        printf("Resultado: Carta 2 ( %s ) venceu!\n", cidade_2);

    }

    return 0;
}