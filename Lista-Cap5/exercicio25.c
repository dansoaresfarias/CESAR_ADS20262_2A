#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int mdc(int a, int b);
void simplifica(int num, int den);

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int a, b;

    printf("Digite dois números inteiros positivos: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Erro: os números devem ser positivos.\n");
    } else {
        printf("MDC(%d, %d) = %d\n", a, b, mdc(a, b));
        simplifica(a, b);
    }

    return 0;
}

int mdc(int a, int b)
{
    if (b == 0)
        return a;

    return mdc(b, a % b);
}

void simplifica(int num, int den)
{
    int divisor = mdc(num, den);

    printf("Fração %d/%d simplificada: %d/%d\n", num, den, num / divisor, den / divisor);
}
