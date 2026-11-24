#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

// Só para ganhar tempo, copiar e colar mudando o nome :)

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif
    system("cls");

    printf("teste do template\n");

    system("pause");
    return 0;
}
