#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float horasNormais, horasExtras, salarioBruto, imposto;

    printf("Digite as horas normais e as horas extras trabalhadas no ano: ");
    scanf("%f %f", &horasNormais, &horasExtras);

    salarioBruto = (horasNormais * 10.0) + (horasExtras * 15.0);
    imposto = salarioBruto > 12000.0 ? (salarioBruto - 12000.0) * 0.10 : 0.0;

    printf("Salário bruto anual: R$ %.2f\n", salarioBruto);
    printf("Imposto a pagar: R$ %.2f\n", imposto);

    return 0;
}
