#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

float celsiusParaFahrenheit(float c);
float celsiusParaKelvin(float c);
float fahrenheitParaCelsius(float f);
float kelvinParaCelsius(float k);

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int opcao;
    float temperatura;

    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    switch (opcao) {
        case 1:
            printf("Resultado: %.2f °F\n", celsiusParaFahrenheit(temperatura));
            break;
        case 2:
            printf("Resultado: %.2f K\n", celsiusParaKelvin(temperatura));
            break;
        case 3:
            printf("Resultado: %.2f °C\n", fahrenheitParaCelsius(temperatura));
            break;
        case 4:
            printf("Resultado: %.2f °C\n", kelvinParaCelsius(temperatura));
            break;
        default:
            printf("Erro: Opção Inválida!\n");
    }

    return 0;
}

float celsiusParaFahrenheit(float c)
{
    return c * 9 / 5 + 32;
}

float celsiusParaKelvin(float c)
{
    return c + 273.15;
}

float fahrenheitParaCelsius(float f)
{
    return (f - 32) * 5 / 9;
}

float kelvinParaCelsius(float k)
{
    return k - 273.15;
}
