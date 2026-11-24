#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

float mediaPonderada(float n1, float n2, float n3);
void exibeSituacao(float media);

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float n1, n2, n3, media;

    printf("Digite as três notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = mediaPonderada(n1, n2, n3);

    printf("Média ponderada: %.2f\n", media);
    exibeSituacao(media);

    return 0;
}

float mediaPonderada(float n1, float n2, float n3)
{
    return (n1 * 2 + n2 * 3 + n3 * 5) / 10;
}

void exibeSituacao(float media)
{
    if (media >= 5.0)
        printf("Aprovado\n");
    else if (media >= 3.0)
        printf("Em Recuperação\n");
    else
        printf("Reprovado\n");
}
