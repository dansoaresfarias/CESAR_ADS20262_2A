#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int horas;
    float valor;

    printf("Digite o número de horas que o carro permaneceu: ");
    scanf("%d", &horas);

    if (horas <= 2) {
        valor = horas * 2.00f;
    } else if (horas <= 4) {
        valor = 2 * 2.00f + (horas - 2) * 2.50f;
    } else {
        valor = 2 * 2.00f + 2 * 2.50f + (horas - 4) * 3.00f;
    }

    printf("Tempo total: %d hora(s)\n", horas);
    printf("Valor cobrado: %.2f\n", valor);

    return 0;
}
