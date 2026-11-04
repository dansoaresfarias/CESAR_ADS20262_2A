#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int totalPagar, valorEntregue, trocoOriginal, troco;
    int notas100, notas50, notas20, notas10, notas5, notas2;

    printf("Digite o valor total a pagar: ");
    scanf("%d", &totalPagar);
    printf("Digite o valor entregue pelo cliente: ");
    scanf("%d", &valorEntregue);

    troco = valorEntregue - totalPagar;

    if (troco < 0) {
        printf("Erro: Valor Entregue Insuficiente!\n");
        return 0;
    }

    trocoOriginal = troco;

    /* so a nota de 5 e impar, entao se o troco for impar precisa reservar
     * uma nota de 5 antes pra sobrar um valor par pras outras notas */
    if (troco % 2 != 0) {
        if (troco < 5) {
            printf("Troco de R$ %d não dá pra formar exatamente com notas de R$100, R$50, R$20, R$10, R$5 e R$2.\n", troco);
            return 0;
        }
        notas5 = 1;
        troco -= 5;
    } else {
        notas5 = 0;
    }

    notas100 = troco / 100;
    troco = troco % 100;
    notas50 = troco / 50;
    troco = troco % 50;
    notas20 = troco / 20;
    troco = troco % 20;
    notas10 = troco / 10;
    troco = troco % 10;
    notas2 = troco / 2;

    printf("Troco: R$ %d\n", trocoOriginal);
    printf("Notas de R$100: %d\n", notas100);
    printf("Notas de R$50: %d\n", notas50);
    printf("Notas de R$20: %d\n", notas20);
    printf("Notas de R$10: %d\n", notas10);
    printf("Notas de R$5: %d\n", notas5);
    printf("Notas de R$2: %d\n", notas2);

    return 0;
}
