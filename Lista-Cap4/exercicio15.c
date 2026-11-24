#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int idade, tempoServico;

    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o tempo de serviço em anos: ");
    scanf("%d", &tempoServico);

    if (idade >= 65 || tempoServico >= 30 || (idade >= 60 && tempoServico >= 25))
        printf("O trabalhador pode se aposentar.\n");
    else
        printf("O trabalhador não pode se aposentar ainda.\n");

    return 0;
}
