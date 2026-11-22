#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

void contagem(int n);
void contagemCrescente(int n);

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int n;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: o número deve ser positivo.\n");
    } else {
        printf("Contagem regressiva:\n");
        contagem(n);

        printf("Contagem crescente:\n");
        contagemCrescente(n);
    }

    return 0;
}

void contagem(int n)
{
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }

    printf("%d\n", n);
    contagem(n - 1);
}

/* Na contagem regressiva o printf vem antes da chamada recursiva, entao cada
 * numero e impresso na ida (empilhamento), de n ate 1. Na versao crescente a
 * chamada recursiva vem antes do printf, entao os numeros so sao impressos na
 * volta (desempilhamento), comecando pela chamada mais profunda (1) ate n.
 */
void contagemCrescente(int n)
{
    if (n == 0)
        return;

    contagemCrescente(n - 1);
    printf("%d\n", n);
}
