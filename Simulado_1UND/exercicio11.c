#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int dias;
    float bruto, gratificacao, imposto, liquido;

    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &dias);

    bruto = dias * 45.0;
    gratificacao = bruto * 0.05;
    imposto = bruto * 0.08;
    liquido = bruto + gratificacao - imposto;

    printf("===== Holerite =====\n");
    printf("Dias trabalhados: %d\n", dias);
    printf("Salário bruto: R$ %.2f\n", bruto);
    printf("Gratificação (5%%): R$ %.2f\n", gratificacao);
    printf("Imposto de renda (8%%): R$ %.2f\n", imposto);
    printf("Salário líquido: R$ %.2f\n", liquido);

    return 0;
}
