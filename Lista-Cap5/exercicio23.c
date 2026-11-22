#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

#define DOBRO(x) x*2

int dobro(int x);

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    printf("Macro DOBRO(2+3): %d\n", DOBRO(2+3));
    printf("Função dobro(2+3): %d\n", dobro(2+3));

    /* Os resultados diferem porque a macro e so uma substituicao de texto:
     * DOBRO(2+3) vira 2+3*2, e como a multiplicacao tem precedencia maior que
     * a soma o resultado e 2+6 = 8. Na funcao, o argumento 2+3 e calculado
     * antes da chamada, entao x recebe 5 e o retorno e 5*2 = 10.
     */

#undef DOBRO
#define DOBRO(x) ((x)*2)

    printf("Macro corrigida DOBRO(2+3): %d\n", DOBRO(2+3));

    return 0;
}

int dobro(int x)
{
    return x * 2;
}
