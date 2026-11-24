/* Questao 06
 * a) Para idade = 65, o codigo original imprime Idoso, Adulto e Jovem, as
 *    tres linhas. Isso acontece porque sao tres if independentes, cada um
 *    testado na sua vez sem relacao com o resultado dos outros, entao todos
 *    os que forem verdadeiros executam.
 * b) Numa sequencia de if independentes, cada condicao e checada do mesmo
 *    jeito, nao importa o que aconteceu nos if anteriores, entao mais de um
 *    bloco pode rodar. Numa cadeia else-if, assim que uma condicao bate a
 *    execucao para ali, as demais nem sao testadas, entao só um bloco roda.
 * c) Reescrita abaixo com else-if, garantindo que só uma categoria apareça.
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

    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 60)
        printf("Idoso\n");
    else if (idade >= 18)
        printf("Adulto\n");
    else if (idade >= 12)
        printf("Jovem\n");
    else
        printf("Criança\n");

    return 0;
}
