#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float valor, valorFinal, comissao;
    int pagamento;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valor);
    printf("Forma de pagamento (1 = à vista, 2 = parcelado em 3x): ");
    scanf("%d", &pagamento);

    switch (pagamento) {
        case 1:
            valorFinal = valor * 0.9f;
            comissao = valorFinal * 0.05f;
            printf("Valor final à vista: %.2f\n", valorFinal);
            printf("Comissão do vendedor: %.2f\n", comissao);
            break;
        case 2:
            valorFinal = valor / 3.0f;
            comissao = valor * 0.05f;
            printf("Valor de cada parcela: %.2f\n", valorFinal);
            printf("Comissão do vendedor: %.2f\n", comissao);
            break;
        default:
            printf("Erro: Opção de Pagamento Inválida!\n");
    }

    return 0;
}
