#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int i;

    printf("Versão com for:\n");
    for (i = 0; i <= 100; i++)
        printf("%d ", i);
    printf("\n\n");

    printf("Versão com while:\n");
    i = 0;
    while (i <= 100)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");

    printf("Versão com do-while:\n");
    i = 0;
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n");

    return 0;
}

// O for é o mais adequado para este caso, porque o número de repetições é conhecido
// (de 0 a 100) e a inicialização, o teste e o incremento ficam juntos em uma única linha.
