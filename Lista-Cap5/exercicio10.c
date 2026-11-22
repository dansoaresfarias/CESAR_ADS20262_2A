#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

#define PI 3.14159

float area(float r);

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    printf("Área da esfera: %.2f\n", area(raio));

    return 0;
}

float area(float r)
{
    return 4 * PI * r * r;
}
