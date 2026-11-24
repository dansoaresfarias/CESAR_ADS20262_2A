/* Mostra a comparação entre strings */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    system("cls");
    char resposta1[] = "BRANCO";
    char resposta2[] = "PRETO";
    strcpy(resposta1, resposta2);
    printf("Resposta 1: %s\n", resposta1);
    printf("Resposta 2: %s\n", resposta2);
    return 0;
}
