#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct{
    int dia;
    char mes[10];
    int ano;
} Data;

typedef struct{
    int matricula;
    char nome[50];
    Data dataMatricula;
    float notas[3];
    float media;
} AlunoCesar;

typedef struct{
    AlunoCesar alunos[30];
    char disciplina[50];
    char professor[50];
    int qtdAlunos;
} Turma;


int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    system("cls");

    AlunoCesar aluno1;
   
    printf("Digite a matrícula do aluno: ");
    scanf("%d", &aluno1.matricula);
    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]s", aluno1.nome);
    printf("Digite o dia da matrícula do aluno: ");
    scanf("%d", &aluno1.dataMatricula.dia);
    printf("Digite o mês da matrícula do aluno: ");
    scanf(" %[^\n]s", aluno1.dataMatricula.mes);
    printf("Digite o ano da matrícula do aluno: ");
    scanf("%d", &aluno1.dataMatricula.ano);

    for(int i = 0; i < 3; i++){
        printf("Digite a nota %dº do aluno: ", i + 1);
        scanf("%f", &aluno1.notas[i]);
    }

    aluno1.media = (aluno1.notas[0] + aluno1.notas[1] + aluno1.notas[2]) / 3.0;

    printf("\nMatrícula: %d\n", aluno1.matricula);
    printf("Nome: %s\n", aluno1.nome);
    printf("Data de matrícula: %02d, %s, %d\n", aluno1.dataMatricula.dia, aluno1.dataMatricula.mes, aluno1.dataMatricula.ano);
    printf("Notas: %.2f, %.2f, %.2f\n", aluno1.notas[0], aluno1.notas[1], aluno1.notas[2]);
    printf("Média: %.2f\n", aluno1.media);

    system("PAUSE");
    return 0;
}
