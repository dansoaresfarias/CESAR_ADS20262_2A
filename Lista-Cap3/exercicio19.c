#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int n, i;
    long long int anterior = 0, atual = 1, proximo;

    printf("Digite o número do termo desejado: ");
    scanf("%d", &n);

    if (n < 1)
        printf("Erro: o termo deve ser maior ou igual a 1.\n");
    else
    {
        printf("Termos: ");
        for (i = 1; i <= n; i++)
        {
            printf("%lld ", atual);
            proximo = anterior + atual;
            anterior = atual;
            atual = proximo;
        }

        printf("\nO %dº termo é %lld\n", n, anterior);
    }

    return 0;
}
