#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int n, i, divisores = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        if (n % i == 0)
            divisores++;

    printf("Quantidade de divisores: %d\n", divisores);

    if (divisores == 2)
        printf("%d é primo.\n", n);
    else
        printf("%d não é primo.\n", n);

    return 0;
}
