/* Questao 03
 * a) A segunda linha usa o operador ternario: se media >= 7.0 for verdadeiro,
 *    situacao recebe 'A', senao recebe 'R'. Com media = 6.8 a condicao e
 *    falsa, entao situacao recebe 'R'.
 * c) O ternario nao substitui qualquer if-else. Ele serve so pra escolher
 *    entre dois valores numa atribuicao unica. Quando cada lado da decisao
 *    precisa rodar mais de um comando, ou um bloco inteiro de codigo, só o
 *    if-else resolve.
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

    float nota1 = 6.0f, nota2 = 7.6f; // exemplo que resulta em media 6.8
    float media;
    char situacao;

    media = (nota1 + nota2) / 2.0f;

    if (media >= 7.0f)
        situacao = 'A';
    else
        situacao = 'R';

    printf("Média: %.1f, situação: %c\n", media, situacao);

    return 0;
}
