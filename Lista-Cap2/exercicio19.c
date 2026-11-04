#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    const float TAXA_DIARIA = 30.0;
    int dias;
    float bruto, liquido;

    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &dias);

    bruto = dias * TAXA_DIARIA;
    liquido = bruto - (bruto * 0.08);

    printf("Valor bruto: R$ %.2f\n", bruto);
    printf("Valor líquido: R$ %.2f\n", liquido);

    return 0;
}
