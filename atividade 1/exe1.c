
#include<stdio.h>

int main(){

    //passo 1  - declaração das variaveis
    char nome[40];
    int idade;
    char matricula[20];
    char endereco[60];
    char curso[40];
    int periodo;
    char disciplinas[100];
    float mensalidade;

    //passo 2 - Receber e armazenar os dados nas variaveis
    printf("_______________________");
    printf("Cadastro de Aluno");
    printf("_______________________");

    printf("\nNome: \n");
    fgets(nome, 40, stdin);
    fflush(stdin);

    printf("\nIdade: ");
    scanf("%d", &idade);
    fflush(stdin);

    printf("\nMatricula: ");
    fgets(matricula, 20, stdin);
    fflush(stdin);

    printf("\nCurso: ");
    fgets(curso, 40, stdin);
    fflush(stdin);

    printf("\nEndereco: ");
    fgets(endereco, 60, stdin);
    fflush(stdin);

    printf("\nPeriodo: ");
    scanf("%d", &periodo);
    fflush(stdin);

    printf("\nDisciplinas: ");
    fgets(disciplinas, 100, stdin);
    fflush(stdin);

    printf("\nMensalidade: ");
    scanf("%f", &mensalidade);
    

    //passo 3 - apresentação dos dados
    printf("_______________________");
    printf("Dados registrados");
    printf("_______________________");

    printf("\nNome: %s", nome);
    printf("\nIdade: %d", idade);
    printf("\nMatricula: %s", matricula);
    printf("\nEndereco: %s", endereco);
    printf("\nCurso: %s", curso);
    printf("\nPeriodo: %d", periodo);
    printf("\nDisciplinas: %s", disciplinas);
    printf("\nMensalidade: %.2f", mensalidade);


}