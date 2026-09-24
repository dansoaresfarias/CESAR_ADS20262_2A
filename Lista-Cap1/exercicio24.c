#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    printf("%-10s%s\n", "ALUNO(A)", "NOTA");
    printf("%-10s%s\n", "=========", "=====");
    printf("%-10s%5.1f\n", "ALINE", 9.0);
    printf("%-10s%5s\n", "MÁRIO", "DEZ");
    printf("%-10s%5.1f\n", "SÉRGIO", 4.5);
    printf("%-10s%5.1f\n", "SHIRLEY", 7.0);

    return 0;
}
