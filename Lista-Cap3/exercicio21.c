#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    char secreta, palpite;
    int tentativas = 0;

    srand(time(NULL));
    secreta = rand() % 26 + 'a';

    do
    {
        printf("Adivinhe a letra (a-z): ");
        scanf(" %c", &palpite);
        tentativas++;

        if (palpite < secreta)
            printf("A letra secreta vem depois de '%c'.\n", palpite);
        else if (palpite > secreta)
            printf("A letra secreta vem antes de '%c'.\n", palpite);
    } while (palpite != secreta);

    printf("Parabéns! Você acertou a letra '%c' em %d tentativas.\n", secreta, tentativas);

    return 0;
}
