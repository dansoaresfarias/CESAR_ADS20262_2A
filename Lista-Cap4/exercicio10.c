#include <stdio.h>

int main()
{
    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d é PAR\n", n);
    else
        printf("%d é ÍMPAR\n", n);

    if (n > 0)
        printf("%d é POSITIVO\n", n);
    else if (n < 0)
        printf("%d é NEGATIVO\n", n);
    else
        printf("%d é ZERO\n", n);

    return 0;
}
