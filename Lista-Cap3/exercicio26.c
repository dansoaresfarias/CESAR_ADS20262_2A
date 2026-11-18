#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int a, b, numero, i, divisores, soma = 0;

    do
    {
        printf("Digite dois números inteiros positivos A e B (A < B): ");
        scanf("%d %d", &a, &b);
    } while (a <= 0 || b <= 0 || a >= b);

    printf("Primos no intervalo [%d, %d]: ", a, b);

    for (numero = a; numero <= b; numero++)
    {
        divisores = 0;
        for (i = 1; i <= numero; i++)
            if (numero % i == 0)
                divisores++;

        if (divisores == 2)
        {
            printf("%d ", numero);
            soma += numero;
        }
    }

    printf("\nSoma dos primos: %d\n", soma);

    return 0;
}
