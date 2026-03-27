#include <stdio.h>

int main(){

    /*Define a variavel que recebera o index da matriz*/
    int index;

    /*Base da Dados que guarda as notas*/
    char *nomes_alunos[3][3] = {//O * serve como ponteiro da matrix
        {"Aluno 0", "Português: 30", "Matematica: 80"},
        {"Aluno 1", "Português: 70", "Matematica: 60"},
        {"Aluno 2", "Português: 75", "Matematica: 90"}
    };

    /*Menu de informação do usuario*/
    printf(">>> MENU >>>\n\n");
    printf("Aluno 0 Digite 0\n");
    printf("Aluno 1 Digite 1\n");
    printf("Aluno 2 Digite 2\n");
    printf("Escolha o Aluno: ");

    /*Guarda o numero digitado na variave*/
    scanf("%d", &index);

    /*Imprime o resultado do banco de dados*/
    printf("\nA nota do %s é %s e %s\n", nomes_alunos[index][0], nomes_alunos[index][1], nomes_alunos[index][2]);

    return 0;
}