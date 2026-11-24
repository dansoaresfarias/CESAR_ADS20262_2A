#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float preco, pago, subtotal, total;
    int quantidade, opcaoPagamento;

    printf("Digite o preço do produto: R$ ");
    scanf("%f", &preco);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    printf("1 - À vista (10%% de desconto)\n");
    printf("2 - A prazo\n");
    printf("Escolha a forma de pagamento: ");
    scanf("%d", &opcaoPagamento);

    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, opcaoPagamento);

    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);

    printf("Digite o valor pago: R$ ");
    scanf("%f", &pago);

    if (pago < total)
        printf("Erro: valor pago insuficiente.\n");
    else
        printf("Troco: R$ %.2f\n", calculaTroco(total, pago));

    return 0;
}

float calculaSubtotal(float preco, int quantidade)
{
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento)
{
    if (opcaoPagamento == 1)
        return valor * 0.9;
    else
        return valor;
}

float calculaTroco(float total, float pago)
{
    return pago - total;
}
