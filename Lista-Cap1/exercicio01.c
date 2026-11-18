#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int anoLetivo = 2026; // ano letivo corrente

    printf("O ano letivo corrente é: %d\n", anoLetivo);

    return 0;
}
