#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    system("cls");
    int diagPrincipal = 0;
    int diagSecundaria = 0;
    int soma = 0;

    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int l = 0 ; l < 3; l++){
        for (int c = 0; c < 3; c++){
            printf("%d ", matriz[l][c]);
            if (l == c){
                diagPrincipal += matriz[l][c];
            }
            soma += matriz[l][c];
            if (l + c == 2){
                diagSecundaria += matriz[l][c];
            }
        }
        printf("\n");
    }

    printf("\nDiagonal Principal: %d\n", diagPrincipal);
    printf("Diagonal Secundária: %d\n", diagSecundaria);
    printf("Soma de todos os elementos: %d\n", soma);

    system("PAUSE");
    return 0;
}