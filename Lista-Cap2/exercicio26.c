#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float comprimento, largura, precoMetro, arame, custo;

    printf("Digite o comprimento e a largura do terreno (m): ");
    scanf("%f %f", &comprimento, &largura);

    printf("Digite o preço do metro do arame farpado: ");
    scanf("%f", &precoMetro);

    arame = 2 * (comprimento + largura) * 3;
    custo = arame * precoMetro;

    printf("Arame necessário: %.2f m\n", arame);
    printf("Custo total: R$ %.2f\n", custo);

    return 0;
}
