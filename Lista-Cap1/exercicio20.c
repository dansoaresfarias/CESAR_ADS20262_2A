#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

/* moldura 4x4 usando os caracteres graficos da tabela ASCII estendida
 * indicados no enunciado: cantos \xC9 \xBB \xC8 \xBC, linha horizontal
 * \xCD, linha vertical \xBA. Codepage 850, compativel com esses codigos
 * de CP437 e com acentuacao em portugues. */

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(850);
#endif

    printf("\xC9\xCD\xCD\xBB\n");
    printf("\xBA  \xBA\n");
    printf("\xBA  \xBA\n");
    printf("\xC8\xCD\xCD\xBC\n");

    return 0;
}
