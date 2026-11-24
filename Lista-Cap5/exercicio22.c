#include <stdio.h>
#include "areas.h"

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float raio, base, altura;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    printf("Área do círculo: %.2f\n", A_CIRC(raio));

    printf("Digite a base e a altura do retângulo: ");
    scanf("%f %f", &base, &altura);
    printf("Área do retângulo: %.2f\n", A_RET(base, altura));

    printf("Digite a base e a altura do triângulo: ");
    scanf("%f %f", &base, &altura);
    printf("Área do triângulo: %.2f\n", A_TRI(base, altura));

    return 0;
}
