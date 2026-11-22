#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int qtdNotas;
    char ch;

    do {
        system("cls");

        do{
            printf("Digite a quantidade de tentativas o aluno tem: ");
            scanf("%d", &qtdNotas);
            printf("\n");
        } while(qtdNotas < 1 || qtdNotas > 10);

        float notas[qtdNotas];
        float maior = 0.0;

        for (int i = 0; i < qtdNotas; i++){
            do{
                printf("Digite a nota %dª: ", i + 1);
                scanf("%f", &notas[i]);
                if(notas[i] < 0.0 || notas[i] > 10.0){
                    printf("Nota inválida! Digite uma nota entre 0 e 10.\n");
                }
            } while(notas[i] < 0.0 || notas[i] > 10.0);
        }

        for (int i = 0; i < qtdNotas; i++){
            printf("\nTentativa %dª o aluno tirou a nota: %.2f", i + 1, notas[i]);
        }

        for (int i = 0 ; i < qtdNotas; i++){
            if(notas[i] > maior){
                maior = notas[i];
            }
        }

        printf("\n\nA maior nota do aluno é: %.2f", maior);

        do {
            printf("\nDeseja repetir o programa? (s - sim / n - não): ");
            ch = getche();
            printf("\n");
        } while(ch != 's' && ch != 'S' && ch != 'n' && ch != 'N');

    } while (ch == 's' || ch == 'S');

    system("PAUSE");
    return 0;
}