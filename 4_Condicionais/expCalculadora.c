#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char ch;
    float num1, num2;
    char op;

    do{
        system("cls");
        printf(".:: Calculadora ::.\n");
        printf("Informe um número, um operador (+, -, *, /) e outro número: ");
        scanf("%f %c %f", &num1, &op, &num2);

        if(op == '+'){
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
        } else if(op == '-'){
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
        } else if(op == '*'){
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
        } else if(op == '/'){
            if(num2 != 0){
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            } else{
                printf("Erro: Divisão por zero não é permitida.\n");
            }
        } else{
            printf("Erro: Operador inválido.\n");
        }

        printf("Deseja executar o programa novamente? (s-sim/n-não): ");
        ch = getche();
    }while(ch == 's' || ch == 'S');

    return 0;
}