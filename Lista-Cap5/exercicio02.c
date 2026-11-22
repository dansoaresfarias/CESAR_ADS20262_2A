/* Questao 02
 * a) Uma funcao em C devolve apenas um valor por meio do return. O programador
 *    queria devolver a soma e a media ao mesmo tempo, mas return soma, media;
 *    usa o operador virgula: as duas expressoes sao avaliadas e so o valor da
 *    ultima (media) e devolvido. A soma e descartada.
 * b) O return; encerra a funcao void na hora e volta para quem chamou, sem
 *    devolver valor. Em imprime_mensagem(), se erro < 0 ela imprime
 *    "Erro invalido" e sai sem imprimir o codigo processado. Ele nao e
 *    obrigatorio no final de uma funcao void, porque ao chegar na chave de
 *    fechamento a funcao retorna sozinha.
 * c) Reescrita abaixo: calcular() retorna so a media e soma() retorna so a
 *    soma. Como o return devolve um unico valor, para obter dois resultados
 *    diferentes usando apenas o return e preciso uma funcao para cada um.
 */

#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int calcular(int a, int b, int c);
int soma(int a, int b, int c);

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int a, b, c;

    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Soma: %d\n", soma(a, b, c));
    printf("Média: %d\n", calcular(a, b, c));

    return 0;
}

int calcular(int a, int b, int c)
{
    return (a + b + c) / 3;
}

int soma(int a, int b, int c)
{
    return a + b + c;
}
