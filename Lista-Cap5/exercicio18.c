#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

long potencia(int base, int expoente);

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int base, expoente;

    printf("Digite a base e o expoente: ");
    scanf("%d %d", &base, &expoente);

    if (expoente < 0)
        printf("Erro: o expoente não pode ser negativo.\n");
    else
        printf("%d elevado a %d = %ld\n", base, expoente, potencia(base, expoente));

    return 0;
}

long potencia(int base, int expoente)
{
    // caso base: qualquer número elevado a 0 é 1
    if (expoente == 0)
        return 1;

    // passo recursivo: base * base elevado ao expoente - 1
    return base * potencia(base, expoente - 1);
}
