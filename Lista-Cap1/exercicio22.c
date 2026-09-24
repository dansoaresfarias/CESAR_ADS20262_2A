/* Desenho de um carro e uma caminhonete usando caracteres de bloco,
 * conforme pedido no enunciado (\xDB = bloco cheio, \xDC = meio bloco
 * inferior, \xDF = meio bloco superior). Codepage 850, compativel com
 * esses codigos de CP437. */
#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(850);
#endif

    // carro
    printf("\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC\n");
    printf("\xDFO\xDF\xDF\xDF\xDF\xDFO\xDF\n");

    // caminhonete
    printf(" \xDC\xDC\xDB \xDB\xDB\xDB\xDB\xDB\xDB\n");
    printf("\xDFO\xDF\xDF\xDF\xDF\xDFOO\xDF\n");

    return 0;
}
