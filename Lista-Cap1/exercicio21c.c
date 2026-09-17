/* Versao C: frases emolduradas usando caracteres graficos de caixa,
 * mesmos codigos hexadecimais da Questao 20 (\xC9 \xBB \xC8 \xBC \xCD \xBA).
 * Codepage 850, compativel com esses codigos e com acentuacao em
 * portugues (\x87 = c cedilha, \xC6 = a til). */
#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(850);
#endif

    printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
    printf("\xBA Treinamento em programa\x87\xC6o. \xBA\n");
    printf("\xBA Linguagem C.                \xBA\n");
    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");

    return 0;
}
