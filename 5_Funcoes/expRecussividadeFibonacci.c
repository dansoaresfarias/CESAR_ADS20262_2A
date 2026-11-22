#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int fibonacci(int n) {
    if (n == 0 ) {
        return 0;
    }else if (n == 1) {
        return 1;
    }else {
        return fibonacci(n - 1) + fibonacci(n - 2);
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
        printf(".:: Programa de Cálculo de Fibonacci ::.\n");
        printf("Informe um número inteiro não negativo: ");
        scanf("%d", &num);

        if (num < 0) {
            printf("Número inválido. Por favor, insira um número inteiro não negativo.\n");
        } else {
            resultado = fibonacci(num);
            printf("O fibonacci de %d é: %d\n", num, resultado);
        }

        printf("Deseja calcular outro fibonacci? (s-sim/n-não): ");
        aux = getche();
    }while(aux == 's' || aux == 'S');
}