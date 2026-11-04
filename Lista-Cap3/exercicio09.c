#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    float valor, soma = 0;
    int quantidade = 0;

    printf("Digite um valor (negativo para parar): ");
    scanf("%f", &valor);

    while (valor >= 0)
    {
        soma += valor;
        quantidade++;

        printf("Digite um valor (negativo para parar): ");
        scanf("%f", &valor);
    }

    printf("Quantidade de valores: %d\n", quantidade);
    printf("Soma: %.2f\n", soma);

    if (quantidade > 0)
        printf("Média: %.2f\n", soma / quantidade);
    else
        printf("Nenhum valor válido foi digitado.\n");

    return 0;
}
