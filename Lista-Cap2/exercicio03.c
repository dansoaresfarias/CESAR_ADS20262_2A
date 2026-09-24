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

    printf("Decimal: %d, Hexadecimal: %x, Octal: %o, Caractere: %c\n",
           numero, numero, numero, numero);

    return 0;
}
