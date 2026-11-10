#include <stdio.h>
#include <math.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    double x;

    printf("Digite um número real: ");
    scanf("%lf", &x);

    if (x >= 0)
        printf("A raiz quadrada de %.2f é %.2f\n", x, sqrt(x));
    else
        printf("O quadrado de %.2f é %.2f\n", x, x * x);

    return 0;
}
