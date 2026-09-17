#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int numero, antecessor, sucessor;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    antecessor = numero;
    antecessor--;

    sucessor = numero;
    sucessor++;

    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

    return 0;
}
