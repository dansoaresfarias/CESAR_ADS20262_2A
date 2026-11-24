#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif

    int horas, minutos, segundos, duracao, totalSegundos;

    printf("Digite o horário de início (h m s): ");
    scanf("%d %d %d", &horas, &minutos, &segundos);

    printf("Digite a duração do experimento em segundos: ");
    scanf("%d", &duracao);

    totalSegundos = horas * 3600 + minutos * 60 + segundos + duracao;

    horas = (totalSegundos / 3600) % 24;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;

    printf("Horário de término: %02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}
