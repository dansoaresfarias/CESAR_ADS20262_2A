#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int num, i, encontrou = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (encontrou)
        printf("\n");
    else
        printf("Nenhum número de 1 a %d é múltiplo de 3 e de 5 ao mesmo tempo.\n", num);

    return 0;
}
