#include <stdio.h>

float celsius(float fahr);

int main()
{
    float fahr;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahr);

    printf("Celsius: %.2f\n", celsius(fahr));

    return 0;
}

float celsius(float fahr)
{
    return (fahr - 32) * 5 / 9;
}
