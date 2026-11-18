#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int opcao;

    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferência\n");
    printf("4 - Falar com Atendente\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Direcionando para consulta de saldo.\n");
            break;
        case 2:
            printf("Direcionando para extrato da conta.\n");
            break;
        case 3:
            printf("Direcionando para transferência bancária.\n");
            break;
        case 4:
            printf("Direcionando para um atendente.\n");
            break;
        default:
            printf("Erro: Opção Inválida!\n");
    }

    return 0;
}
