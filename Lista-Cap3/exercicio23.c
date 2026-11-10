#include <stdio.h>

int main()
{
    int lado, linha, coluna;

    do
    {
        printf("Digite o lado do quadrado (3 a 20): ");
        scanf("%d", &lado);
    } while (lado < 3 || lado > 20);

    for (linha = 1; linha <= lado; linha++)
    {
        for (coluna = 1; coluna <= lado; coluna++)
        {
            if (linha == 1 || linha == lado || coluna == 1 || coluna == lado)
                printf("X");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
