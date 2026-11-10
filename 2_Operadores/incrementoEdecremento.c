#include <stdio.h>
#include <stdlib.h>

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
    int n= 5;

    printf("\n%d | %d | %d", --n, n+1, ++n);

    int m= 5;

    printf("\n%d", ++m);
    printf("\n%d", m+1);
    printf("\n%d", --m);

    int i = 3, z;

    z = i * (i+1)+(++i);
    printf("\n\t i=%d | z= %d \n", i, z);

    system("pause");
    return 0;
}
