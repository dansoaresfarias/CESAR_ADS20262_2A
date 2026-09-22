#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int qtdNotas;
    float nota, media;
    char ch;

    do {
        system("cls");
        media = 0.0;

        do{
            printf("Digite a quantidade de notas: ");
            scanf("%d", &qtdNotas);
            printf("\n");
        } while(qtdNotas < 1 || qtdNotas > 100);

        for (int i = 0; i < qtdNotas; i++){
            do{
                printf("Digite a nota %dª: ", i + 1);
                scanf("%f", &nota);
                if(nota < 0.0 || nota > 10.0){
                    printf("Nota inválida! Digite uma nota entre 0 e 10.\n");
                }
            } while(nota < 0.0 || nota > 10.0);
            media += nota;
        }

        media /= qtdNotas;

        printf("A média das notas é: %.2f\n", media);

        do {
            printf("\nDeseja repetir o programa? (s - sim / n - não): ");
            ch = getche();
            printf("\n");
        } while(ch != 's' && ch != 'S' && ch != 'n' && ch != 'N');

    } while (ch == 's' || ch == 'S');

    system("PAUSE");
    return 0;
}