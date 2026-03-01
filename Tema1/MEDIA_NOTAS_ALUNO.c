#include <stdio.h> //Inclusão da biblioteca : Padrão de entrada e saída, função printf.

int main(){ //Função principal : Começa a execução. Toda aplicação em C começa pela função main.

    char nome_aluno[20] = "Vanderson";//Para arrray utilizar "" aspas duplas.
    char turma = 'A'; // Sempre que for um caractere no char utilizar '' aspas simples.
    int matricula = 0;
    float nota_portugues = 0, nota_matematica = 0, nota_redacao = 0, nota_ciencia = 0;
    float soma_soma_notas = 0, resultado_notas = 0;

    printf("**CALCULADORA DE MEDIAS ENSINO MEDIO**\n");   //Saída de dados : printf(); imprime a mensagem. O \n adiciona uma nova linha ao final da mensagem.

    printf("INFORME SEU NOME:\n");
    scanf(" %s", nome_aluno); //Ao suar %s não a necessidade de colocar &
    printf ("QUAL SUA MATRICULA: \n");
    scanf("%i", &matricula);
    printf("QUAL SUA TURMA: \n");
    scanf(" %c", &turma); // Sempre lembrar que ao atribuir char um caractere deve usar & e tambem espçao entre antes %c
    printf("\n *****   *****\n");
    printf("DIGITE SUA NOTA PORTUGUÊS: \n");
    scanf("%f", &nota_portugues);
    printf("DIGITE SUA NOTA MATEMATICA: \n");
    scanf("%f", &nota_matematica);
    printf("DIGITE SUA NOTA REDAÇÃO: \n");
    scanf("%f", &nota_redacao);
    printf("DIGITE SUA NOTA CIÊNCIA: \n");
    scanf("%f", &nota_ciencia);

    soma_soma_notas = nota_portugues + nota_matematica + nota_redacao + nota_ciencia;
    resultado_notas = soma_soma_notas/4;

    if(resultado_notas >= 7){//Estruturas de decisão composta if-else, compara dois valores e reage ao código.
        /*Se Verdadeiro*/
        printf("*****   *****");
        printf("\n NOME: %s \n MATRICULA: %d \n TURMA: %c \n ", nome_aluno, matricula, turma);
        printf("SUMA MÉDIA: %.2f \n", resultado_notas);
        printf("Aprovado!!!\n");
        printf("*****   *****");
    }

    else{
        /*Se falso*/
        printf("*****   *****");
        printf("\n NOME: %s \n MATRICULA: %d \n TURMA: %c \n ", nome_aluno, matricula, turma);
        printf("SUMA MÉDIA: %.2f \n", resultado_notas);
        printf("Reprovado!!!\n");
        printf("*****   *****");

    }
    
    return 0; //Fim do programa : return 0; indica que o programa terminou com sucesso..

}