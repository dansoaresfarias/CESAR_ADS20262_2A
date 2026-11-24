#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int anguloA, anguloB, anguloC;

    printf("Digite os três ângulos internos do triângulo: ");
    scanf("%d %d %d", &anguloA, &anguloB, &anguloC);

    if (anguloA + anguloB + anguloC != 180) {
        printf("Erro: A soma dos ângulos precisa ser 180°!\n");
        return 0;
    }

    if (anguloA == 90 || anguloB == 90 || anguloC == 90)
        printf("Triângulo Retângulo\n");
    else if (anguloA > 90 || anguloB > 90 || anguloC > 90)
        printf("Triângulo Obtusângulo\n");
    else
        printf("Triângulo Acutângulo\n");

    return 0;
}
