#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int ehPar(int n);

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (ehPar(n))
        printf("%d é par.\n", n);
    else
        printf("%d é ímpar.\n", n);

    return 0;
}

int ehPar(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}
