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
    float graus, radianos;

    printf("Digite o ângulo em graus: ");
    scanf("%f", &graus);

    radianos = graus * (PI / 180.0);

    printf("Radianos: %.4f\n", radianos);

    return 0;
}
