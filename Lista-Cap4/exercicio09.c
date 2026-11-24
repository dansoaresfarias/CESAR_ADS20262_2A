#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float trabalho, avaliacao, exame, media;

    printf("Digite a nota do Trabalho de Laboratório: ");
    scanf("%f", &trabalho);
    printf("Digite a nota da Avaliação Semestral: ");
    scanf("%f", &avaliacao);
    printf("Digite a nota do Exame Final: ");
    scanf("%f", &exame);

    media = (trabalho * 2 + avaliacao * 3 + exame * 5) / 10.0f;

    printf("Média ponderada: %.1f\n", media);

    if (media <= 2.9f)
        printf("Situação: Reprovado\n");
    else if (media <= 4.9f)
        printf("Situação: Em Recuperação\n");
    else
        printf("Situação: Aprovado\n");

    return 0;
}
