#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char ch;

    do{
        system("cls");
        int diagPrincipal = 0;
        int diagSecundaria = 0;
        int soma = 0;
        printf(".:: Programa para Calcular a Soma das Diagonais de uma Matriz Quadrada ::.\n\n");

        int tamanho;

        do{
            printf("Digite o tamanho da matriz quadrada (entre 2 e 10): ");
            scanf("%d", &tamanho);
            printf("\n");
        } while(tamanho < 2 || tamanho > 10);

        int matriz[tamanho][tamanho];

        for (int l = 0 ; l < tamanho; l++){
            for (int c = 0; c < tamanho; c++){
                printf("Digite o elemento [%d][%d]: ", l + 1, c + 1);
                scanf("%d", &matriz[l][c]);
                if (l == c){
                    diagPrincipal += matriz[l][c];
                }
                soma += matriz[l][c];
                if (l + c == tamanho - 1){
                    diagSecundaria += matriz[l][c];
                }
            }
            printf("\n");
        }

        printf("\nMatriz digitada:\n");
        for (int l = 0 ; l < tamanho; l++){
            for (int c = 0; c < tamanho; c++){
                printf("%d ", matriz[l][c]);
            }
            printf("\n");
        }

        printf("\nDiagonal Principal: %d\n", diagPrincipal);
        printf("Diagonal Secundária: %d\n", diagSecundaria);
        printf("Soma de todos os elementos: %d\n", soma);

        do {
            printf("\nDeseja repetir o programa? (s - sim / n - não): ");
            ch = getche();
            printf("\n");
        } while(ch != 's' && ch != 'S' && ch != 'n' && ch != 'N');

    } while (ch == 's' || ch == 'S');

    system("PAUSE");
    return 0;
}