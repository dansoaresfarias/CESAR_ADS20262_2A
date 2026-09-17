// Versão A: uma única chamada de printf()
#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    printf("Treinamento em programação.\nLinguagem C.\n");
    return 0;
}
