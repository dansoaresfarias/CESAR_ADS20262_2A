#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float nota;

    do
    {
        printf("Digite uma nota (0.0 a 10.0): ");
        scanf("%f", &nota);

        if (nota < 0.0 || nota > 10.0)
            printf("Nota inválida! Tente novamente.\n");
    } while (nota < 0.0 || nota > 10.0);

    printf("Nota registrada com sucesso!\n");

    return 0;
}
