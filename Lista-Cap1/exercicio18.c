#include <stdio.h>

int main()
{
    float lapis = 4.88f;
    float borrachas = 234.54f;
    float canetas = 42.04f;
    float cadernos = 8.00f;
    float fitas = 13.05f;

    printf("%-10s%12.2f\n", "Lapis", lapis);
    printf("%-10s%12.2f\n", "Borrachas", borrachas);
    printf("%-10s%12.2f\n", "Canetas", canetas);
    printf("%-10s%12.2f\n", "Cadernos", cadernos);
    printf("%-10s%12.2f\n", "Fitas", fitas);

    return 0;
}
