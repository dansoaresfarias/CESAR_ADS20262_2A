#include <stdio.h>

int main()
{
    int total, horas, minutos, segundos;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &total);

    horas = total / 3600;
    minutos = (total % 3600) / 60;
    segundos = total % 60;

    printf("%d segundos correspondem a %d hora(s), %d minuto(s) e %d segundo(s)\n",
           total, horas, minutos, segundos);

    return 0;
}
