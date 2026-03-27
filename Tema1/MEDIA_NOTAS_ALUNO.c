#include <stdio.h> //Inclusão da biblioteca : Padrão de entrada e saída, função printf.

/*Declaração de variaveis globais para utilizar em todas as fnções do código.*/
float nota_portugues = 0, nota_matematica = 0, nota_redacao = 0, nota_ciencia = 0;

/*Função para coletar as notas*/
float coleta_notas(int num){

            
        switch (num)
        {
        case 0:
            printf("DIGITE SUA NOTA PORTUGUÊS: \n");
            scanf("%f", &nota_portugues);
            if (nota_portugues <= 0 && nota_portugues > 10)
            {
                printf("Digite Valor valido!\n\n");
                num = 0;
            }else{

                num = 1;
            }
            break;
        case 1:
            printf("DIGITE SUA NOTA MATEMATICA: \n");
            scanf("%f", &nota_matematica);
            if (nota_matematica <= 0 && nota_matematica > 10)
            {
                printf("Digite Valor valido!\n");
                num = 1;
            }else{

                num = 2;
            }                           
            break;
        case 2:
            printf("DIGITE SUA NOTA REDAÇÃO: \n");
            scanf("%f", &nota_redacao);
            if (nota_redacao <= 0 && nota_redacao > 10)
            {
                printf("Digite Valor valido!\n\n");
                num = 2;
            }else{

                num = 3;
            }                
            break;
        case 3:
            printf("DIGITE SUA NOTA CIÊNCIA: \n");
            scanf("%f", &nota_ciencia);
            if (nota_ciencia <= 0 && nota_ciencia > 10)
            {
                printf("Digite Valor valido!\n\n");
                num = 3;
            }                
            break;
        default:
            printf("Refaça sua solicitacao!\n");
            break;
        }

    return 0;
    
}

/*Função estetica para colocar asteriscos*/
void asterisco(){
    printf("\n*****   *****\n");
}

/*Função que realiza o calculo matematico da função*/
float calculo_media(){

    float soma_soma_notas, resultado_notas;//Variaveis para guardar o resultado da media.

    soma_soma_notas = nota_portugues + nota_matematica + nota_redacao + nota_ciencia;
    resultado_notas = soma_soma_notas/4;
    
    return resultado_notas;

}

int main(){ //Função principal : Começa a execução. Toda aplicação em C começa pela função main.

    char nome_aluno[30] = "Vanderson";//Para arrray utilizar "" aspas duplas.
    char turma = 'A'; // Sempre que for um caractere no char utilizar '' aspas simples.
    int matricula = 0, opcao = 0;
    

    printf("**CALCULADORA DE MEDIAS ENSINO MEDIO**\n");   //Saída de dados : printf(); imprime a mensagem. O \n adiciona uma nova linha ao final da mensagem.

    printf("INFORME SEU NOME: ");
    scanf(" %s", &nome_aluno); //Ao suar %s não a necessidade de colocar &
    printf ("\nQUAL SUA MATRICULA: ");
    scanf("%i", &matricula);
    printf("\nQUAL SUA TURMA: ");
    scanf(" %c", &turma); // Sempre lembrar que ao atribuir char um caractere deve usar & e tambem espçao entre antes %c
    
    asterisco();
    
    /*Seletor de opções*/
    printf("1. Simulação Média Notas\n2. Resultado Final\n3. Sair\n\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
    case 1:

        /*Chama as diversas funções que coletaração as respostas e farão a logica do programa.*/
        coleta_notas(0);
        coleta_notas(1);
        coleta_notas(2);
        coleta_notas(3);

        calculo_media();

        /*Apressenta o resultado do calculo da media*/
        printf("\n NOME: %s \n MATRICULA: %d \n TURMA: %c \n ", nome_aluno, matricula, turma);
        printf("SUMA MÉDIA: %.2f \n", calculo_media());

        break;
    case 2:
        coleta_notas(0);
        coleta_notas(1);
        coleta_notas(2);
        coleta_notas(3);

        calculo_media();

        /*Estruturas de decisão composta if-else, compara dois valores e reage ao código.*/
        if(calculo_media() >= 7){
        /*Se Verdadeiro*/
            asterisco();
            printf("\n NOME: %s \n MATRICULA: %d \n TURMA: %c \n ", nome_aluno, matricula, turma);
            printf("SUMA MÉDIA: %.2f \n", calculo_media());
            printf("Aprovado!!!\n");
            asterisco();
        }else{
            /*Se falso*/
            asterisco();
            printf("\n NOME: %s \n MATRICULA: %d \n TURMA: %c \n ", nome_aluno, matricula, turma);
            printf("SUMA MÉDIA: %.2f \n", calculo_media());
            printf("Reprovado!!!\n");
            asterisco();
        }       

        break;
    case 3:
        asterisco();
        break;    
    default:
        break;
    }

    return 0; //Fim do programa : return 0; indica que o programa terminou com sucesso..

}