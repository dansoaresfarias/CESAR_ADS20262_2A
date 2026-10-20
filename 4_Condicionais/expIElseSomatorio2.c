#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    char ch;

    do{
        int soma = 0;
        system("cls");
        do{
            printf("Digite um número inteiro positivo: ");
            scanf("%d", &n);
            if (n < 0){
                printf("Número %d inválido. Digite novamente.\n", n);
            }
        } while (n < 0);

        for (int i = 0; i < n; i++){
            soma += (2 * i + 1);
        }

        printf("O valor de %d² = %d\n\n", n, soma);

        printf("Deseja rodar o programa novamente? (s-sim/n-não): ");
        scanf(" %c", &ch);
    } while (ch == 's' || ch == 'S');

    system("PAUSE");
    return 0;
}
