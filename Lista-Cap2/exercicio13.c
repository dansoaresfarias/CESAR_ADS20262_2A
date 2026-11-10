#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float lado, base, altura;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);
    printf("Área do quadrado: %.2f\n", lado * lado);

    printf("Digite a base e a altura do retângulo: ");
    scanf("%f %f", &base, &altura);
    printf("Área do retângulo: %.2f\n", base * altura);

    printf("Digite a base e a altura do triângulo retângulo: ");
    scanf("%f %f", &base, &altura);
    printf("Área do triângulo: %.2f\n", (base * altura) / 2.0);

    return 0;
}
