#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int somaDigitos(int n);

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int n;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    printf("Soma dos dígitos: %d\n", somaDigitos(n));

    return 0;
}

int somaDigitos(int n)
{
    // caso base: número com um único dígito, a soma é o próprio número
    if (n < 10)
        return n;

    // passo recursivo: último dígito + soma dos dígitos do restante do número
    return n % 10 + somaDigitos(n / 10);
}
