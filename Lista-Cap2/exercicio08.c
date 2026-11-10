#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Quadrado: %d\n", numero * numero);
    printf("Décima parte: %.2f\n", numero / 10.0);

    return 0;
}
