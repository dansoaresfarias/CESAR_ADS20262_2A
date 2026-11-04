#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float valor, precoFinal;
    int estado;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("Estado de destino (1 = MG, 2 = SP, 3 = RJ, 4 = MS): ");
    scanf("%d", &estado);

    switch (estado) {
        case 1:
            precoFinal = valor * 1.07f;
            printf("Preço final com imposto de MG: %.2f\n", precoFinal);
            break;
        case 2:
            precoFinal = valor * 1.12f;
            printf("Preço final com imposto de SP: %.2f\n", precoFinal);
            break;
        case 3:
            precoFinal = valor * 1.15f;
            printf("Preço final com imposto de RJ: %.2f\n", precoFinal);
            break;
        case 4:
            precoFinal = valor * 1.08f;
            printf("Preço final com imposto de MS: %.2f\n", precoFinal);
            break;
        default:
            printf("Erro: Código de Estado Inválido!\n");
    }

    return 0;
}
