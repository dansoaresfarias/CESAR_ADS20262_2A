#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int n, linha, coluna, numero = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    for (linha = 1; linha <= n; linha++)
    {
        for (coluna = 1; coluna <= linha; coluna++)
        {
            printf("%d ", numero);
            numero++;
        }
        printf("\n");
    }

    return 0;
}
