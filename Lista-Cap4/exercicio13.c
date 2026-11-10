#include <stdio.h>
#include <math.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    char operacao;
    double n1, n2, resultado;

    printf("Operações disponíveis: + - * / ^\n");
    printf("Digite a operação: ");
    scanf(" %c", &operacao);
    printf("Digite o primeiro operando: ");
    scanf("%lf", &n1);
    printf("Digite o segundo operando: ");
    scanf("%lf", &n2);

    switch (operacao) {
        case '+':
            resultado = n1 + n2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = n1 - n2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = n1 * n2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if (n2 == 0)
                printf("Erro: divisão por zero!\n");
            else {
                resultado = n1 / n2;
                printf("Resultado: %.2f\n", resultado);
            }
            break;
        case '^':
            resultado = pow(n1, n2);
            printf("Resultado: %.2f\n", resultado);
            break;
        default:
            printf("Erro: Operação Inválida!\n");
    }

    return 0;
}
