#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float salario, aumento, novoSalario;
    int cargo;

    printf("Digite o salário atual: ");
    scanf("%f", &salario);
    printf("Código do cargo (1 = Técnico, 2 = Gerente, 3 = Demais Cargos): ");
    scanf("%d", &cargo);

    switch (cargo) {
        case 1:
            aumento = (salario <= 3000) ? salario * 0.15f : salario * 0.10f;
            break;
        case 2:
            aumento = (salario <= 5000) ? salario * 0.10f : salario * 0.05f;
            break;
        case 3:
            aumento = salario * 0.08f;
            break;
        default:
            printf("Erro: Código de Cargo Inválido!\n");
            return 0;
    }

    novoSalario = salario + aumento;

    printf("Valor do aumento: %.2f\n", aumento);
    printf("Novo salário: %.2f\n", novoSalario);

    return 0;
}
