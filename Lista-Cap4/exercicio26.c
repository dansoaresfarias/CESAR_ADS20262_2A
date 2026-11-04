#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int mes, ano, dias, bissexto;
    const char *nome;

    printf("Digite o número do mês (1 a 12): ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    bissexto = (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0));

    switch (mes) {
        case 1:  nome = "Janeiro";   dias = 31; break;
        case 2:  nome = "Fevereiro"; dias = bissexto ? 29 : 28; break;
        case 3:  nome = "Março";     dias = 31; break;
        case 4:  nome = "Abril";     dias = 30; break;
        case 5:  nome = "Maio";      dias = 31; break;
        case 6:  nome = "Junho";     dias = 30; break;
        case 7:  nome = "Julho";     dias = 31; break;
        case 8:  nome = "Agosto";    dias = 31; break;
        case 9:  nome = "Setembro";  dias = 30; break;
        case 10: nome = "Outubro";   dias = 31; break;
        case 11: nome = "Novembro";  dias = 30; break;
        case 12: nome = "Dezembro";  dias = 31; break;
        default:
            printf("Erro: Mês Inválido!\n");
            return 0;
    }

    printf("%s tem %d dias\n", nome, dias);

    return 0;
}
