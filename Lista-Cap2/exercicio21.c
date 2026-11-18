#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    // o valor exibido é o código ASCII do caractere digitado, ou seja,
    // a posição desse caractere na tabela de caracteres de 1 byte
    printf("Código ASCII: %d\n", caractere);

    return 0;
}
