#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int n;
    long iterativo, recursivo;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erro: não existe fatorial de número negativo.\n");
    } else {
        iterativo = fatorialIterativo(n);
        recursivo = fatorialRecursivo(n);

        printf("Fatorial iterativo: %ld\n", iterativo);
        printf("Fatorial recursivo: %ld\n", recursivo);

        if (iterativo == recursivo)
            printf("Os resultados coincidem.\n");
        else
            printf("Os resultados não coincidem.\n");
    }

    return 0;
}

long fatorialIterativo(int n)
{
    long fatorial = 1;
    int i;

    for (i = 2; i <= n; i++)
        fatorial *= i;

    return fatorial;
}

long fatorialRecursivo(int n)
{
    if (n == 0)
        return 1;

    return n * fatorialRecursivo(n - 1);
}
