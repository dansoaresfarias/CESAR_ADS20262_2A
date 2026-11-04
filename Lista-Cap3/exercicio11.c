#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int a, b, i;

    printf("Digite dois números inteiros (A e B): ");
    scanf("%d %d", &a, &b);

    if (a <= b)
        for (i = a; i <= b; i++)
            printf("%d ", i);
    else
        for (i = a; i >= b; i--)
            printf("%d ", i);

    printf("\n");

    return 0;
}
