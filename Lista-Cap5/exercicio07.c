#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int soma(int a, int b);

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int a, b;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Soma: %d\n", soma(a, b));

    return 0;
}

int soma(int a, int b)
{
    return a + b;
}
