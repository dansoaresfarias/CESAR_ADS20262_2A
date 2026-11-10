#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    const float PI = 3.141593;
    float raio;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    printf("Área: %.2f\n", PI * raio * raio);
    printf("Circunferência: %.2f\n", 2 * PI * raio);

    return 0;
}
