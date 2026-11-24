#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int n, i;
    long long int fatorial = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Erro: não existe fatorial de número negativo.\n");
    else
    {
        for (i = 2; i <= n; i++)
            fatorial *= i;

        printf("%d! = %lld\n", n, fatorial);
    }

    return 0;
}
