#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float euler = 2.71828f; // número de Euler

    printf("O valor do número de Euler (e) é: %.3f\n", euler);

    return 0;
}
