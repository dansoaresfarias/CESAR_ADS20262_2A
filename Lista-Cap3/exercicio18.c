#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int numero, invertido = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    while (numero > 0)
    {
        invertido = invertido * 10 + numero % 10;
        numero /= 10;
    }

    printf("Número invertido: %d\n", invertido);

    return 0;
}
