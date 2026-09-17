#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int a, b;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Soma: %d\n", a + b);
    printf("Subtração: %d\n", a - b);
    printf("Multiplicação: %d\n", a * b);
    // para evitar a divisão por zero, bastaria checar "b != 0" antes de dividir
    printf("Divisão: %.2f\n", (float)a / b);

    return 0;
}
