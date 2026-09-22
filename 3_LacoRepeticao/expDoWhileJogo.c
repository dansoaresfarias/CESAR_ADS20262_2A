#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char ch;
    char resp, secreto;
    int tentativas;

    do {
        system("cls");
        tentativas = 0;
        secreto = rand() % 26 + 'a';
        printf("\nDigite uma letra (a - z): \n");
        while((resp = getche()) != secreto){
            printf("\nIncorreto tente novamente!");
            tentativas++;
            printf("\nDigite uma letra (a - z): \n");
        }

        printf("Correto, a letra foi %c! \nVocê acertou em %d tentativas.", secreto, tentativas);

        do {
            printf("\nDeseja jogar novamente? (s - sim / n - não): ");
            ch = getche();
            printf("\n");
        } while(ch != 's' && ch != 'S' && ch != 'n' && ch != 'N');

    } while (ch == 's' || ch == 'S');

    system("PAUSE");
    return 0;
}