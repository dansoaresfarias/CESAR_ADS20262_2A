#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

#define SENHA 2026

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int senha, tentativas;

    for (tentativas = 1; tentativas <= 3; tentativas++)
    {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha == SENHA)
            break;

        printf("Senha incorreta!\n");
    }

    if (tentativas <= 3)
        printf("Acesso Concedido!\n");
    else
        printf("Conta Bloqueada por Segurança!\n");

    return 0;
}
