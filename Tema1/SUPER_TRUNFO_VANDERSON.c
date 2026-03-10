/*Bibliotecas do Programa*/
#include <stdio.h>
#include <string.h> //Necessário para utilização da função STRCPY

int main(){

    /*Definindo as variantes da carta 01*/
    char estado[30], cidade[30], carta1_alet[10]; // Use aspas simples para um único caractere
    int n_pontos_turisticos = 111, cod_carta = 0, escolha_comparacao = 0;
    unsigned long int populacao = 111;
    float area = 1.110, pib = 1.110, densidade_populacional = 1.110, pib_percapita = 1.110, super_poder_cart1 = 1.110;

    /*Definindo as variantes da carta 02*/
    char estado_2[30], cidade_2[30], carta2_alet[10]; // Use aspas simples para um único caractere
    int n_pontos_turisticos_2 = 111, cod_carta_2 = 0, escolha_comparacao_2;
    unsigned long int populacao_2 = 111;
    float area_2 = 1.11, pib_2 = 1.11, densidade_populacional_2 = 1.110, pib_percapita_2 = 1.110, super_poder_cart2 = 1.110;

    printf("**Super Trunfo - Cidades Brasileiras - Nordeste**\n\n");

    /*Menu interativo do jogo escolha comparação 1*/
    printf("Com o que Jogador 1 vai comparar?\n >> 1. Polulacao\n >> 2. Area\n >> 3. PIB\n >> 4. Pontos Turisticos\n >> 5. Super Poder\n >> 6. Desensidade\n");
    printf("#Escolha: ");
    scanf("%i", &escolha_comparacao);

    printf("\nCom o que Jogador 2 vai comparar?\n >> 1. Polulacao\n >> 2. Area\n >> 3. PIB\n >> 4. Pontos Turisticos\n >> 5. Super Poder\n >> 6. Desensidade\n");
    printf("#Escolha: ");
    scanf("%i", &escolha_comparacao_2);
    
    if (escolha_comparacao != escolha_comparacao_2)
    {
      
        /*Escolha da carta 01*/
        printf("\n\nCADASTRO CARTA 01\n");
        printf("DIGITE NUMERO QUE REPRESENTE SEU ESTADO CARTA 01\n");
        printf("1. ALAGOAS >> 2. BAHIA >> 3. CEARA >> 4. PERNAMBUCO\n5. SERGIPE >> 6. PARAIBA >> 7. PIAUI >> 8. MARANHÃO >> 9. RIO GRANDE NORTE\n");
        printf("#Escolha: ");
        scanf("%i", &cod_carta);

        /*Base de dados de cada estado*/
        switch (cod_carta)
        {
        case 1:
            /* COPIAR o nome do estado para a variável */
            strcpy(estado, "Alagoas");
            /*CADASTRAR AS CARACTERISTA ESTADO CARTA 01*/
            /*DADOS COLETADOS DO SITE: https://pt.wikipedia.org/wiki/Alagoas*/
            strcpy(carta1_alet, "A01");
            strcpy(cidade, "Maceio");
            populacao = 3127511;
            area = 27848.14;
            pib = 76266000000.00;
            n_pontos_turisticos = 102; //Baseado na quantidade de municipios.
            break;
        case 2:
            /* COPIAR o nome do estado para a variável */
            strcpy(estado, "Bahia");
            /*CADASTRAR AS CARACTERISTA ESTADO CARTA 01*/
            /*DADOS COLETADOS DO SITE: https://pt.wikipedia.org/wiki/Bahia*/
            strcpy(carta1_alet, "B02");
            strcpy(cidade, "Salvador");
            populacao = 14141626;
            area = 564760429.29;
            pib = 402646605640.00;
            n_pontos_turisticos = 417; //Baseado na quantidade de municipios.
            break;
        case 3:
            /* COPIAR o nome do estado para a variável */
            strcpy(estado, "Ceara");
            /*CADASTRAR AS CARACTERISTA ESTADO CARTA 01*/
            /*DADOS COLETADOS DO SITE: https://pt.wikipedia.org/wiki/Cear%C3%A1*/
            strcpy(carta1_alet, "C03");
            strcpy(cidade, "Fortaleza");
            populacao = 8794957;
            area = 148894442.02;
            pib = 213601000000.94;
            n_pontos_turisticos = 184; //Baseado na quantidade de municipios.
            break;
        case 4:
            /* COPIAR o nome do estado para a variável */
            strcpy(estado, "Pernambuco");
            /*CADASTRAR AS CARACTERISTA ESTADO CARTA 01*/
            /*DADOS COLETADOS DO SITE: https://pt.wikipedia.org/wiki/Pernambuco*/
            strcpy(carta1_alet, "P04");
            strcpy(cidade, "Recife");
            populacao = 9058155;
            area = 98067881.74;
            pib = 245828000000.64;
            n_pontos_turisticos = 184; //Baseado na quantidade de municipios.
            break;    
        case 5:
            /* COPIAR o nome do estado para a variável */
            strcpy(estado, "Sergipe");
            /*CADASTRAR AS CARACTERISTA ESTADO CARTA 01*/
            /*DADOS COLETADOS DO SITE: https://pt.wikipedia.org/wiki/Cear%C3%A1*/
            strcpy(carta1_alet, "S05");
            strcpy(cidade, "Aracaju");
            populacao = 2361657;
            area = 21915116.14;
            pib = 57372000000.64;
            n_pontos_turisticos = 75; //Baseado na quantidade de municipios.
            break;
        case 6:
            /* COPIAR o nome do estado para a variável */
            strcpy(estado, "Paraiba");
            /*CADASTRAR AS CARACTERISTA ESTADO CARTA 01*/
            /*DADOS COLETADOS DO SITE: https://pt.wikipedia.org/wiki/Para%C3%ADba*/
            strcpy(carta1_alet, "P06");
            strcpy(cidade, "João Pessoa");
            populacao = 3974495;
            area = 56467242.64;
            pib = 96963000000.77;
            n_pontos_turisticos = 223; //Baseado na quantidade de municipios.
            break;
        case 7:
            /* COPIAR o nome do estado para a variável */
            strcpy(estado, "Piaui");
            /*CADASTRAR AS CARACTERISTA ESTADO CARTA 01*/
            /*DADOS COLETADOS DO SITE: https://pt.wikipedia.org/wiki/Piau%C3%AD*/
            strcpy(carta1_alet, "P07");
            strcpy(cidade, "Teresina");
            populacao = 3271199;
            area = 251755485.24;
            pib = 64028000000.17;
            n_pontos_turisticos = 224; //Baseado na quantidade de municipios.
            break;
        case 8:
            /* COPIAR o nome do estado para a variável */
            strcpy(estado, "Maranhao");
            /*CADASTRAR AS CARACTERISTA ESTADO CARTA 01*/
            /*DADOS COLETADOS DO SITE: https://pt.wikipedia.org/wiki/Maranh%C3%A3o*/
            strcpy(carta1_alet, "M08");
            strcpy(cidade, "Sao Luis");
            populacao = 7010960;
            area = 329651496.44;
            pib = 139789000000.08;
            n_pontos_turisticos = 217; //Baseado na quantidade de municipios.
            break;
        case 9:
            /* COPIAR o nome do estado para a variável */
            strcpy(estado, "Rio Grande do Norte");
            /*CADASTRAR AS CARACTERISTA ESTADO CARTA 01*/
            /*DADOS COLETADOS DO SITE: https://pt.wikipedia.org/wiki/Rio_Grande_do_Norte*/
            strcpy(carta1_alet, "R09");
            strcpy(cidade, "Natal");
            populacao = 3302729;
            area = 52809601.03;
            pib = 80181000000.98;
            n_pontos_turisticos = 167; //Baseado na quantidade de municipios.
            break;     
        default:
            printf("Escolha Carta Valida\n");
            break;
        }

        /*Coleta de dados da carta 02*/
        printf("\nCADASTRO CARTA 02\n");
        printf("DIGITE NUMERO QUE REPRESENTE SEU ESTADO CARTA 02\n");
        printf("1. ALAGOAS >> 2. BAHIA >> 3. CEARA >> 4. PERNAMBUCO\n5. SERGIPE >> 6. PARAIBA >> 7. PIAUI >> 8. MARANHÃO >> 9. RIO GRANDE NORTE\n");
        printf("#Escolha: ");
        scanf("%i", &cod_carta_2);

        /*Base de dados de cada estado*/
        switch (cod_carta_2)
        {
        case 1:
            /* COPIAR o nome do estado para a variável */
            strcpy(estado_2, "Alagoas");
            /*CADASTRAR AS CARACTERISTA ESTADO CARTA 01*/
            /*DADOS COLETADOS DO SITE: https://pt.wikipedia.org/wiki/Alagoas*/
            strcpy(carta2_alet, "A01");
            strcpy(cidade_2, "Maceio");
            populacao_2 = 3127511;
            area_2 = 27848.14;
            pib_2 = 76266000000.00;
            n_pontos_turisticos_2 = 102; //Baseado na quantidade de municipios.
            break;
        case 2:
            /* COPIAR o nome do estado para a variável */
            strcpy(estado_2, "Bahia");
            /*CADASTRAR AS CARACTERISTA ESTADO CARTA 01*/
            /*DADOS COLETADOS DO SITE: https://pt.wikipedia.org/wiki/Bahia*/
            strcpy(carta2_alet, "B02");
            strcpy(cidade_2, "Salvador");
            populacao_2 = 14141626;
            area_2 = 564760429.29;
            pib_2 = 402646605640.00;
            n_pontos_turisticos_2 = 417; //Baseado na quantidade de municipios.
            break;
        case 3:
            /* COPIAR o nome do estado para a variável */
            strcpy(estado_2, "Ceara");
            /*CADASTRAR AS CARACTERISTA ESTADO CARTA 01*/
            /*DADOS COLETADOS DO SITE: https://pt.wikipedia.org/wiki/Cear%C3%A1*/
            strcpy(carta2_alet, "C03");
            strcpy(cidade_2, "Fortaleza");
            populacao_2 = 8794957;
            area_2 = 148894442.02;
            pib_2 = 213601000000.94;
            n_pontos_turisticos_2 = 184; //Baseado na quantidade de municipios.
            break;
        case 4:
            /* COPIAR o nome do estado para a variável */
            strcpy(estado_2, "Pernambuco");
            /*CADASTRAR AS CARACTERISTA ESTADO CARTA 01*/
            /*DADOS COLETADOS DO SITE: https://pt.wikipedia.org/wiki/Pernambuco*/
            strcpy(carta2_alet, "P04");
            strcpy(cidade_2, "Recife");
            populacao_2 = 9058155;
            area_2 = 98067881.74;
            pib_2 = 245828000000.64;
            n_pontos_turisticos_2 = 184; //Baseado na quantidade de municipios.
            break;    
        case 5:
            /* COPIAR o nome do estado para a variável */
            strcpy(estado_2, "Sergipe");
            /*CADASTRAR AS CARACTERISTA ESTADO CARTA 01*/
            /*DADOS COLETADOS DO SITE: https://pt.wikipedia.org/wiki/Cear%C3%A1*/
            strcpy(carta2_alet, "S05");
            strcpy(cidade_2, "Aracaju");
            populacao_2 = 2361657;
            area_2 = 21915116.14;
            pib_2 = 57372000000.64;
            n_pontos_turisticos_2 = 75; //Baseado na quantidade de municipios.
            break;
        case 6:
            /* COPIAR o nome do estado para a variável */
            strcpy(estado_2, "Paraiba");
            /*CADASTRAR AS CARACTERISTA ESTADO CARTA 01*/
            /*DADOS COLETADOS DO SITE: https://pt.wikipedia.org/wiki/Para%C3%ADba*/
            strcpy(carta2_alet, "P06");
            strcpy(cidade_2, "João Pessoa");
            populacao_2 = 3974495;
            area_2 = 56467242.64;
            pib_2 = 96963000000.77;
            n_pontos_turisticos_2 = 223; //Baseado na quantidade de municipios.
            break;
        case 7:
            /* COPIAR o nome do estado para a variável */
            strcpy(estado_2, "Piaui");
            /*CADASTRAR AS CARACTERISTA ESTADO CARTA 01*/
            /*DADOS COLETADOS DO SITE: https://pt.wikipedia.org/wiki/Piau%C3%AD*/
            strcpy(carta2_alet, "P07");
            strcpy(cidade_2, "Teresina");
            populacao_2 = 3271199;
            area_2 = 251755485.24;
            pib_2 = 64028000000.17;
            n_pontos_turisticos_2 = 224; //Baseado na quantidade de municipios.
            break;
        case 8:
            /* COPIAR o nome do estado para a variável */
            strcpy(estado_2, "Maranhao");
            /*CADASTRAR AS CARACTERISTA ESTADO CARTA 01*/
            /*DADOS COLETADOS DO SITE: https://pt.wikipedia.org/wiki/Maranh%C3%A3o*/
            strcpy(carta2_alet, "M08");
            strcpy(cidade_2, "Sao Luis");
            populacao_2 = 7010960;
            area_2 = 329651496.44;
            pib_2 = 139789000000.08;
            n_pontos_turisticos_2 = 217; //Baseado na quantidade de municipios.
            break;
        case 9:
            /* COPIAR o nome do estado para a variável */
            strcpy(estado_2, "Rio Grande do Norte");
            /*CADASTRAR AS CARACTERISTA ESTADO CARTA 01*/
            /*DADOS COLETADOS DO SITE: https://pt.wikipedia.org/wiki/Rio_Grande_do_Norte*/
            strcpy(carta2_alet, "R09");
            strcpy(cidade_2, "Natal");
            populacao_2 = 3302729;
            area_2 = 52809601.03;
            pib_2 = 80181000000.98;
            n_pontos_turisticos_2 = 167; //Baseado na quantidade de municipios.
            break;     
        default:
            printf("Escolha Carta Valida");
            break;
        }

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

        /*Trecho do código de visualização do resultado do cadastro carta 01*/

        printf("\n\n**Super Trunfo - Cidades Brasileiras - Nordeste**\n");
        printf("[[[ CARTAS ]]]\n\n");

        printf(">> CARTA: 01 << \n");
        printf("ESTADO: %s \n", estado);
        printf("CARTA: %s \n", carta1_alet);
        printf("NOME DO ESTADO: %s \n", cidade);
        printf("POPULAÇÃO: %lu hab.\n", populacao);
        printf("ÁREA: %.2f km²\n", area);
        printf("PIB ATUAL: %.2f \n", pib);
        printf("PONTOS TURISTÍCOS: %i \n", n_pontos_turisticos);
        printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidade_populacional);
        printf("PIB per Capita: %.2f reais\n", pib_percapita);
        printf("SUPER PODER: %.2f", super_poder_cart1);

        /*Trecho do código de visualização do resultado do cadastro carta 02*/
        printf(" \n\n>> CARTA: 02 << \n");
        printf("ESTADO: %s \n", estado_2);
        printf("CARTA: %s \n", carta2_alet);
        printf("NOME DO ESTADO: %s \n", cidade_2);
        printf("POPULAÇÃO: %lu \n", populacao_2);
        printf("ÁREA: %.2f km²\n", area_2);
        printf("PIB ATUAL: %.2f Reais\n", pib_2);
        printf("PONTOS TURISTÍCOS: %i \n", n_pontos_turisticos_2);
        printf("DENSIDADE POPULACIONAL: %.2f hab/km²\n", densidade_populacional_2);
        printf("PIB per Capita: %.2f reais\n", pib_percapita_2);
        printf("SUPER PODER: %.2f\n\n", super_poder_cart2);

        /*Trecho do código para comparação das cartas com estrutura de decisão*/
        /*Estrutura de comparação carta 1*/
        switch (escolha_comparacao)
        {
        case 1:
            printf("\nDisputa Populacao\n");
            printf("Carta 1 - %s : %lu\n", cidade, populacao);
            printf("Carta 2 - %s : %lu\n", cidade_2, populacao_2);

            if(populacao > populacao_2){

            printf("Resultado: Carta 1 ( %s ) venceu!\n", cidade);

            }else if (populacao < populacao_2)
            {
                printf("Resultado: Carta 2 ( %s ) venceu!\n", cidade_2);
            }else{
                printf("Empatou!!!");
            }
            break;
        case 2:
            printf("\nDisputa Area\n");
            printf("Carta 1 - %s : %.2f km²\n", cidade, area);
            printf("Carta 2 - %s : %.2f km²\n", cidade_2, area_2);

            if(area > area_2){

            printf("Resultado: Carta 1 ( %s ) venceu!\n", cidade);

            }else if (area < area_2)
            {
                printf("Resultado: Carta 2 ( %s ) venceu!\n", cidade_2);
            }else{
                printf("Empatou!!!");
            }
            break;
        case 3:
            printf("\nDisputa PIB\n");
            printf("Carta 1 - %s : %.2f Reais\n", cidade, pib);
            printf("Carta 2 - %s : %.2f Reais\n", cidade_2, pib_2);

            if(pib > pib_2){

            printf("Resultado: Carta 1 ( %s ) venceu!\n", cidade);

            }else if (pib < pib_2)
            {
                printf("Resultado: Carta 2 ( %s ) venceu!\n", cidade_2);
            }else{
                printf("Empatou!!!");
            }
            break;
        case 4:
            printf("\nDisputa Pontos Turisticos\n");
            printf("Carta 1 - %s : %i\n", cidade, n_pontos_turisticos);
            printf("Carta 2 - %s : %i\n", cidade_2, n_pontos_turisticos_2);

            if(n_pontos_turisticos > n_pontos_turisticos_2){

            printf("Resultado: Carta 1 ( %s ) venceu!\n", cidade);

            }else if (n_pontos_turisticos < n_pontos_turisticos_2)
            {
                printf("Resultado: Carta 2 ( %s ) venceu!\n", cidade_2);
            }else{
                printf("Empatou!!!");
            }
            break;
        case 5:
            printf("\nDisputa Super Poder\n");
            printf("Carta 1 - %s : %.2f\n", cidade, super_poder_cart1);
            printf("Carta 2 - %s : %.2f\n", cidade_2, super_poder_cart2);

            if(super_poder_cart1 > super_poder_cart2){

            printf("Resultado: Carta 1 ( %s ) venceu!\n", cidade);

            }else if (super_poder_cart1 < super_poder_cart2)
            {
                printf("Resultado: Carta 2 ( %s ) venceu!\n", cidade_2);
            }else{
                printf("Empatou!!!");
            }
            break;
        case 6:
            printf("\nDisputa Densidade\n");
            printf("Carta 1 - %s : %.2f\n", cidade, densidade_populacional);
            printf("Carta 2 - %s : %.2f\n", cidade_2, densidade_populacional_2);

            if(densidade_populacional < densidade_populacional_2){

            printf("Resultado: Carta 1 ( %s ) venceu!\n", cidade);

            }else if (densidade_populacional > densidade_populacional_2)
            {
                printf("Resultado: Carta 2 ( %s ) venceu!\n", cidade_2);
            }else{
                printf("Empatou!!!");
            }

            break;
        default:
            printf("Escolha opção valida!");
            break;
        }

        /*Estrutura de comparação carta 2*/
        switch (escolha_comparacao_2)
        {
        case 1:
            printf("\nDisputa Populacao\n");
            printf("Carta 1 - %s : %lu\n", cidade, populacao);
            printf("Carta 2 - %s : %lu\n", cidade_2, populacao_2);

            if(populacao > populacao_2){

            printf("Resultado: Carta 1 ( %s ) venceu!\n", cidade);

            }else if (populacao < populacao_2)
            {
                printf("Resultado: Carta 2 ( %s ) venceu!\n", cidade_2);
            }else{
                printf("Empatou!!!");
            }
            break;
            case 2:
            printf("\nDisputa Area\n");
            printf("Carta 1 - %s : %.2f km²\n", cidade, area);
            printf("Carta 2 - %s : %.2f km²\n", cidade_2, area_2);

            if(area > area_2){

            printf("Resultado: Carta 1 ( %s ) venceu!\n", cidade);

            }else if (area < area_2)
            {
                printf("Resultado: Carta 2 ( %s ) venceu!\n", cidade_2);
            }else{
                printf("Empatou!!!");
            }
            break;
            case 3:
            printf("\nDisputa PIB\n");
            printf("Carta 1 - %s : %.2f Reais\n", cidade, pib);
            printf("Carta 2 - %s : %.2f Reais\n", cidade_2, pib_2);

            if(pib > pib_2){

            printf("Resultado: Carta 1 ( %s ) venceu!\n", cidade);

            }else if (pib < pib_2)
            {
                printf("Resultado: Carta 2 ( %s ) venceu!\n", cidade_2);
            }else{
                printf("Empatou!!!");
            }
            break;
            case 4:
            printf("\nDisputa Pontos Turisticos\n");
            printf("Carta 1 - %s : %i\n", cidade, n_pontos_turisticos);
            printf("Carta 2 - %s : %i\n", cidade_2, n_pontos_turisticos_2);

            if(n_pontos_turisticos > n_pontos_turisticos_2){

            printf("Resultado: Carta 1 ( %s ) venceu!\n", cidade);

            }else if (n_pontos_turisticos < n_pontos_turisticos_2)
            {
                printf("Resultado: Carta 2 ( %s ) venceu!\n", cidade_2);
            }else{
                printf("Empatou!!!");
            }
            break;
            case 5:
            printf("\nDisputa Super Poder\n");
            printf("Carta 1 - %s : %.2f\n", cidade, super_poder_cart1);
            printf("Carta 2 - %s : %.2f\n", cidade_2, super_poder_cart2);

            if(super_poder_cart1 > super_poder_cart2){

            printf("Resultado: Carta 1 ( %s ) venceu!\n", cidade);

            }else if (super_poder_cart1 < super_poder_cart2)
            {
                printf("Resultado: Carta 2 ( %s ) venceu!\n", cidade_2);
            }else{
                printf("Empatou!!!");
            }
            break;
            case 6:
            printf("\nDisputa Densidade\n");
            printf("Carta 1 - %s : %.2f\n", cidade, densidade_populacional);
            printf("Carta 2 - %s : %.2f\n", cidade_2, densidade_populacional_2);

            if(densidade_populacional < densidade_populacional_2){

            printf("Resultado: Carta 1 ( %s ) venceu!\n", cidade);

            }else if (densidade_populacional > densidade_populacional_2)
            {
                printf("Resultado: Carta 2 ( %s ) venceu!\n", cidade_2);
            }else{
                printf("Empatou!!!");
            }

            break;
            default:
            printf("Escolha opção valida!");
            break;
        }
    }else{
        printf("Valores tem que ser diferentes");
    }    

    return 0;
}