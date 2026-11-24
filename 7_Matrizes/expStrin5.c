/* Mostra a comparação entre strings */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    system("cls");
    char resposta[] = "BRANCO";
    char resp[10];
    printf("Qual é a cor do cavalo...");
    gets(resp);
    //while (resp != resposta) /* Erro! */
    while (strcmp(resp, resposta) != 0)
    {
        printf("Resposta errada...\n");
        printf("Tente novamente! %d\n", strcmp(resp, resposta));
        printf("Qual é a cor do cavalo...");
        gets(resp);
    }
    printf("Correto!\n");
    return 0;
}
