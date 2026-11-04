#include <stdio.h>
#include <math.h>

#ifdef _WIN32
#include <windows.h>
#endif

// compilar com -lm (ex: gcc exercicio14.c -o exercicio14 -lm)

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float a, b, c, p, area;

    printf("Digite os três lados do triângulo: ");
    scanf("%f %f %f", &a, &b, &c);

    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Área do triângulo: %.2f\n", area);

    return 0;
}
