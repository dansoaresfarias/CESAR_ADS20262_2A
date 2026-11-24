#include <stdio.h>

int main()
{
    float nota;
    int faltas;
    char conceito;

    printf("Digite a nota final: ");
    scanf("%f", &nota);
    printf("Digite a quantidade de faltas: ");
    scanf("%d", &faltas);

    if (nota >= 9.0f && nota <= 10.0f)
        conceito = (faltas <= 20) ? 'A' : 'B';
    else if (nota >= 7.5f && nota <= 8.9f)
        conceito = (faltas <= 20) ? 'B' : 'C';
    else if (nota >= 5.0f && nota <= 7.4f)
        conceito = (faltas <= 20) ? 'C' : 'D';
    else if (nota >= 4.0f && nota <= 4.9f)
        conceito = (faltas <= 20) ? 'D' : 'E';
    else
        conceito = 'E';

    printf("Conceito: %c\n", conceito);

    return 0;
}
