/* Questao 02
 * a) Com x = 15 e y = 5, a saida do codigo original e "Opcao B". O else sem
 *    chaves se liga ao if mais proximo que ainda nao tem else, que e o
 *    if (y > 10), e nao o if (x > 10). Como x > 10 e verdadeiro a execucao
 *    entra no bloco, e como y > 10 e falso, o else interno roda e imprime
 *    Opcao B.
 * b) Regra oficial do C: um else sem chaves sempre se associa ao if mais
 *    proximo que ainda esta sem else, mesmo que a indentacao sugira outra
 *    coisa.
 * c) Reescrita abaixo usando chaves, pra garantir que Opcao B so apareca
 *    quando x <= 10. Com x = 15 o programa agora nao imprime nada, porque o
 *    else passa a pertencer ao if (x > 10) de fora.
 */

#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int x = 15, y = 5;

    if (x > 10) {
        if (y > 10)
            printf("Opção A\n");
    } else {
        printf("Opção B\n");
    }

    return 0;
}
