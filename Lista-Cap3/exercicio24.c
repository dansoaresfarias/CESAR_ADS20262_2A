#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int n, linha, coluna;

    do
    {
        printf("Digite uma dimensão ímpar (3 a 19): ");
        scanf("%d", &n);
    } while (n < 3 || n > 19 || n % 2 == 0);

    for (linha = 0; linha < n; linha++)
    {
        for (coluna = 0; coluna < n; coluna++)
        {
            if (coluna == linha || coluna == n - 1 - linha)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
