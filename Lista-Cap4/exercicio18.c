#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int opcao;
    double temperatura, resultado;

    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("Digite a temperatura: ");
    scanf("%lf", &temperatura);

    switch (opcao) {
        case 1:
            resultado = temperatura * 1.8 + 32;
            printf("Resultado: %.2f °F\n", resultado);
            break;
        case 2:
            resultado = temperatura + 273.15;
            printf("Resultado: %.2f K\n", resultado);
            break;
        case 3:
            resultado = (temperatura - 32) / 1.8;
            printf("Resultado: %.2f °C\n", resultado);
            break;
        case 4:
            resultado = temperatura - 273.15;
            printf("Resultado: %.2f °C\n", resultado);
            break;
        default:
            printf("Erro: Opção Inválida!\n");
    }

    return 0;
}
