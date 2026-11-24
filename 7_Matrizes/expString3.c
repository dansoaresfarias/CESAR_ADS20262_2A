#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    system("cls");

    char nome[40];
    int idade;

    printf("Digite seu nome: ");
    gets(&nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("\nOlá %s, você tem %d anos de idade. E já viveu %d dias.\n", nome, idade, idade * 365);

    system("PAUSE");

    return 0;
}