#include <stdio.h>

int main()
{
    float kmh;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh);

    printf("Velocidade em m/s: %.2f\n", kmh / 3.6);

    return 0;
}
