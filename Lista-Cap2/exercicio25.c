#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float salarioBase, liquido;

    printf("Digite o salário-base: ");
    scanf("%f", &salarioBase);

    // líquido = salário-base + 5% de gratificação - 7% de imposto, ambos sobre o salário-base
    liquido = salarioBase + (salarioBase * 0.05) - (salarioBase * 0.07);

    printf("Salário líquido: R$ %.2f\n", liquido);

    return 0;
}
