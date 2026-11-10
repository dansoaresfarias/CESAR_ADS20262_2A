#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>


long int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
} 

void main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num;
    long int resultado;
    char aux;

    do{
        system("cls");
        printf(".:: Programa de Cálculo de Fatorial ::.\n");
        printf("Informe um número inteiro não negativo: ");
        scanf("%d", &num);

        if (num < 0) {
            printf("Número inválido. Por favor, insira um número inteiro não negativo.\n");
        } else {
            resultado = fatorial(num);
            printf("O fatorial de %d é: %d\n", num, resultado);
        }

        printf("Deseja calcular outro fatorial? (s-sim/n-não): ");
        aux = getche();
    }while(aux == 's' || aux == 'S');
}