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
    float salario;

    do
    {
        printf("\n=== Folha de Pagamento ===\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retenção de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o salário: R$ ");
            scanf("%f", &salario);
            if (salario <= 2000.0)
                printf("Novo salário: R$ %.2f\n", salario * 1.15);
            else
                printf("Novo salário: R$ %.2f\n", salario * 1.10);
            break;
        case 2:
            printf("Digite o salário: R$ ");
            scanf("%f", &salario);
            if (salario <= 3000.0)
                printf("Desconto de IR: R$ %.2f\n", salario * 0.08);
            else
                printf("Desconto de IR: R$ %.2f\n", salario * 0.15);
            break;
        case 3:
            printf("Encerrando o programa...\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
