#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int qtdNotas;
    float media;
    char ch;

    do {
        system("cls");
        media = 0.0;

        do{
            printf("Digite a quantidade de notas: ");
            scanf("%d", &qtdNotas);
            printf("\n");
        } while(qtdNotas < 1 || qtdNotas > 10);

        float notas[qtdNotas];

        for (int i = 0; i < qtdNotas; i++){
            do{
                printf("Digite a nota %dª: ", i + 1);
                scanf("%f", &notas[i]);
                if(notas[i] < 0.0 || notas[i] > 10.0){
                    printf("Nota inválida! Digite uma nota entre 0 e 10.\n");
                }
            } while(notas[i] < 0.0 || notas[i] > 10.0);
            media += notas[i];
        }

        media /= qtdNotas;

        printf("A média das notas é: %.2f\n", media);

        for (int i = 0; i < qtdNotas; i++){
            printf("\nNota %dª: %.2f", i + 1, notas[i]);
        }

        do {
            printf("\nDeseja repetir o programa? (s - sim / n - não): ");
            ch = getche();
            printf("\n");
        } while(ch != 's' && ch != 'S' && ch != 'n' && ch != 'N');

    } while (ch == 's' || ch == 'S');

    system("PAUSE");
    return 0;
}