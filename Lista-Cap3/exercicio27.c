#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int valor, notas100 = 0, notas50 = 0, notas20 = 0, notas10 = 0, notas5 = 0, notas2 = 0;

    printf("Digite o valor do saque: R$ ");
    scanf("%d", &valor);

    if (valor % 2 != 0 && valor >= 5)
    {
        valor -= 5;
        notas5++;
    }

    while (valor >= 100)
    {
        valor -= 100;
        notas100++;
    }
    while (valor >= 50)
    {
        valor -= 50;
        notas50++;
    }
    while (valor >= 20)
    {
        valor -= 20;
        notas20++;
    }
    while (valor >= 10)
    {
        valor -= 10;
        notas10++;
    }
    while (valor >= 2)
    {
        valor -= 2;
        notas2++;
    }

    if (valor > 0)
        printf("Não é possível sacar esse valor com as cédulas disponíveis.\n");
    else
    {
        printf("Cédulas de R$ 100: %d\n", notas100);
        printf("Cédulas de R$ 50: %d\n", notas50);
        printf("Cédulas de R$ 20: %d\n", notas20);
        printf("Cédulas de R$ 10: %d\n", notas10);
        printf("Cédulas de R$ 5: %d\n", notas5);
        printf("Cédulas de R$ 2: %d\n", notas2);
    }

    return 0;
}
