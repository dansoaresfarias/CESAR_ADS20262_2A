#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float nota1, nota2, nota3, nota4;

    printf("Digite as quatro notas: ");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    printf("Média simples: %.2f\n", (nota1 + nota2 + nota3 + nota4) / 4.0);
    printf("Média ponderada: %.2f\n", (nota1 * 1 + nota2 * 1 + nota3 * 2 + nota4 * 2) / 6.0);

    return 0;
}
