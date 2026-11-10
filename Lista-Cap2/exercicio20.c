#include <stdio.h>
#include <math.h>

// compilar com -lm (ex: gcc exercicio20.c -o exercicio20 -lm)

int main()
{
    float ladoA, ladoB, hipotenusa;

    printf("Digite os dois catetos: ");
    scanf("%f %f", &ladoA, &ladoB);

    hipotenusa = sqrt(pow(ladoA, 2) + pow(ladoB, 2));

    printf("Hipotenusa: %.2f\n", hipotenusa);

    return 0;
}
