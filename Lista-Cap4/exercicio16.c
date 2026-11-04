#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float distancia, litros, consumo;

    printf("Digite a distância percorrida em km: ");
    scanf("%f", &distancia);
    printf("Digite os litros de gasolina consumidos: ");
    scanf("%f", &litros);

    consumo = distancia / litros;

    printf("Consumo: %.2f km/l\n", consumo);

    if (consumo < 8.0f)
        printf("Venda o carro!\n");
    else if (consumo <= 14.0f)
        printf("Econômico!\n");
    else
        printf("Super econômico!\n");

    return 0;
}
