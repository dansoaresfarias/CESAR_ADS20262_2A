#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float alturaDegrau, alturaTotal;
    int degraus;

    printf("Digite a altura de cada degrau (cm): ");
    scanf("%f", &alturaDegrau);

    printf("Digite a altura total a subir (m): ");
    scanf("%f", &alturaTotal);

    degraus = (alturaTotal * 100) / alturaDegrau;

    printf("Número mínimo de degraus: %d\n", degraus);

    return 0;
}
