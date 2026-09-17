#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    // uma única chamada de printf(), tabulação em cascata
    printf("um\n\tdois\n\t\ttrês\n");

    return 0;
}
