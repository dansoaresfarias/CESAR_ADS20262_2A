#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    char maiuscula, minuscula;

    printf("Digite uma letra maiúscula: ");
    scanf("%c", &maiuscula);

    minuscula = maiuscula + 32;

    printf("Letra minúscula: %c\n", minuscula);

    return 0;
}
