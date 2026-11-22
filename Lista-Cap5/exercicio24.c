/* Com o #define DEBUG, o programa imprime dentro do laco a soma parcial a cada
 * iteracao e, no final, a soma total. Sem o #define DEBUG (apagando ou
 * comentando a linha), o pre-processador descarta o printf de dentro do laco
 * antes da compilacao, e o programa mostra apenas a soma total.
 */

#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

#define DEBUG

int somaAteN(int n);

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int n;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    printf("Soma de 1 até %d: %d\n", n, somaAteN(n));

    return 0;
}

int somaAteN(int n)
{
    int i, soma = 0;

    for (i = 1; i <= n; i++) {
        soma += i;
#ifdef DEBUG
        printf("Soma parcial (i = %d): %d\n", i, soma);
#endif
    }

    return soma;
}
