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

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    printf("Área da superfície: %.2f\n", 4 * PI * raio * raio);
    printf("Volume: %.2f\n", (4.0 / 3.0) * PI * raio * raio * raio);

    return 0;
}
