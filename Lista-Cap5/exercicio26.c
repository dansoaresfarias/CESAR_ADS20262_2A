#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

long fibonacci(int n);

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int quantidade, i;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &quantidade);

    for (i = 0; i < quantidade; i++)
        printf("%ld ", fibonacci(i));
    printf("\n");

    return 0;
}

/* A versao recursiva fica lenta para valores grandes de n porque cada chamada
 * faz outras duas chamadas, e os mesmos termos sao recalculados varias vezes
 * (fibonacci(n - 2) e calculado dentro de fibonacci(n - 1) e de novo
 * separadamente). O numero de chamadas cresce de forma exponencial com n.
 */
long fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}
