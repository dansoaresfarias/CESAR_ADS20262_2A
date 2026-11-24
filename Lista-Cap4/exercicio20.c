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

    double a, b, c, delta;

    do {
        printf("Digite o coeficiente a (diferente de zero): ");
        scanf("%lf", &a);
    } while (a == 0);

    printf("Digite o coeficiente b: ");
    scanf("%lf", &b);
    printf("Digite o coeficiente c: ");
    scanf("%lf", &c);

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("A equação não possui raízes reais.\n");
    } else if (delta == 0) {
        double x = -b / (2 * a);
        printf("Raiz única: x = %.2f\n", x);
    } else {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raízes: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }

    return 0;
}
