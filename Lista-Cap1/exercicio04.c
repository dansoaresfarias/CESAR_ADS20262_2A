// Questão 04, erros do código original:
// 1. O include stdlib.h termina com ponto e vírgula, isso não pode.
// 2. O nome da função está com M maiúsculo e com chaves no lugar de parênteses.
// 3. O corpo da função abre com parêntese em vez de chave.
// 4. A string do printf não está entre aspas.
// 5. A linha cout << endl é de C++, não existe em C.
// 6. O corpo da função fecha com parêntese em vez de chave.
// Corrigido abaixo.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Existem %d semanas no ano.\n", 52);
    system("PAUSE");
    return 0;
}
