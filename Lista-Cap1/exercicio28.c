#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int n1, n2, n3;
    double media;

    printf("Digite três valores inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("A média aritmética dos valores é: %.2f\n", media);

    return 0;
}
