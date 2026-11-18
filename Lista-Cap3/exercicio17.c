#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float nota, soma = 0, maior = 0, menor = 0;
    int total = 0;

    printf("Digite a nota do aluno (-1 para encerrar): ");
    scanf("%f", &nota);

    while (nota != -1.0)
    {
        if (total == 0 || nota > maior)
            maior = nota;
        if (total == 0 || nota < menor)
            menor = nota;

        soma += nota;
        total++;

        printf("Digite a nota do aluno (-1 para encerrar): ");
        scanf("%f", &nota);
    }

    if (total > 0)
    {
        printf("Total de alunos avaliados: %d\n", total);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Média da turma: %.2f\n", soma / total);
    }
    else
        printf("Nenhuma nota foi digitada.\n");

    return 0;
}
