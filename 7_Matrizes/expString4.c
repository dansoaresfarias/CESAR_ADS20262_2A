#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    system("cls");

    char nome[40];
    char sobrenome[40];
    int idade;

    printf("Digite seu nome: ");
    gets(&nome);

    printf("Digite seu sobrenome: ");
    gets(&sobrenome);

    strcat(nome, " ");
    strcat(nome, sobrenome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("\nOlá %s, você tem %d anos de idade. E já viveu %d dias.\n", nome, idade, idade * 365);
    printf("\nSeu nome tem %d caracteres.\n", strlen(nome));

    system("PAUSE");

    return 0;
}