#include <stdio.h>

int main()
{
    int a, b, c, menor, meio, maior;

    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c) {
        menor = a;
        if (b <= c) {
            meio = b;
            maior = c;
        } else {
            meio = c;
            maior = b;
        }
    } else if (b <= a && b <= c) {
        menor = b;
        if (a <= c) {
            meio = a;
            maior = c;
        } else {
            meio = c;
            maior = a;
        }
    } else {
        menor = c;
        if (a <= b) {
            meio = a;
            maior = b;
        } else {
            meio = b;
            maior = a;
        }
    }

    printf("Ordem crescente: %d, %d, %d\n", menor, meio, maior);

    return 0;
}
