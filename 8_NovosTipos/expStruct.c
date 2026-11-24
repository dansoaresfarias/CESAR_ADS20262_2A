#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

struct Aluno{
    int matricula;
    char nome[50];
    float notas[3];
    float media;
};

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    system("cls");

    struct Aluno aluno1;
   
    printf("Digite a matrícula do aluno: ");
    scanf("%d", &aluno1.matricula);
    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]s", aluno1.nome);

    for(int i = 0; i < 3; i++){
        printf("Digite a nota %dº do aluno: ", i + 1);
        scanf("%f", &aluno1.notas[i]);
    }

    aluno1.media = (aluno1.notas[0] + aluno1.notas[1] + aluno1.notas[2]) / 3.0;

    printf("\nMatrícula: %d\n", aluno1.matricula);
    printf("Nome: %s\n", aluno1.nome);
    printf("Notas: %.2f, %.2f, %.2f\n", aluno1.notas[0], aluno1.notas[1], aluno1.notas[2]);
    printf("Média: %.2f\n", aluno1.media);

    system("PAUSE");
    return 0;
}
