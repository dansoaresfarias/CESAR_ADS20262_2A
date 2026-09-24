// Versão B: exatamente duas instruções de impressão independentes
#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    printf("Treinamento em programação.\n");
    printf("Linguagem C.\n");
    return 0;
}
