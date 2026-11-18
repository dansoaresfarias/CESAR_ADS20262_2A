#include <stdio.h>

int main()
{
    int dia, mes, ano;

    printf("Digite uma data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("Data invertida: %d/%d/%d\n", ano, mes, dia);

    return 0;
}
