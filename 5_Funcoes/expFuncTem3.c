#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
// 3ª declarar as funções em uma biblioteca de funções (arquivo .h) e definir as funções em um arquivo .c separado. O arquivo .h é incluído no arquivo principal com a diretiva #include.
#include "convTemp.h"

void main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float temp;
    char op, aux;

    do{
        system("cls");
        menu();
        do{
            if(scanf(" %c", &op) != 1 || (op < '1' || op > '6')){
                printf("Opção inválida.\nDigite novamente: ");
            }
        }while(op < '1' || op > '6');

        switch (op){
            case '1':
                printf("Informe a temperatura em Fahrenheit: ");
                scanf("%f", &temp);
                printf("%.2f°F Fahrenheit é igual a %.2f°C Celsius\n", temp, fahrenheitToCelsius(temp));
                break;
            case '2':
                printf("Informe a temperatura em Celsius: ");
                scanf("%f", &temp);
                printf("%.2f°C Celsius é igual a %.2f°F Fahrenheit\n", temp, celsiusToFahrenheit(temp));
                break;
            case '3':
                printf("Informe a temperatura em Celsius: ");
                scanf("%f", &temp);
                printf("%.2f°C Celsius é igual a %.2fK Kelvin\n", temp, celsiusToKelvin(temp));
                break;
            case '4':
                printf("Informe a temperatura em Kelvin: ");
                scanf("%f", &temp);
                printf("%.2fK Kelvin é igual a %.2f°C Celsius\n", temp, kelvinToCelsius(temp));
                break;
            case '5':
                printf("Informe a temperatura em Fahrenheit: ");
                scanf("%f", &temp);
                printf("%.2f°F Fahrenheit é igual a %.2fK Kelvin\n", temp, fahrenheitToKelvin(temp));
                break;
            case '6':
                printf("Informe a temperatura em Kelvin: ");
                scanf("%f", &temp);
                printf("%.2fK Kelvin é igual a %.2f°F Fahrenheit\n", temp, kelvinToFahrenheit(temp));
                break;
            default:
                printf("Opção inválida.\n");
        }

        printf("Deseja executar o programa novamente? (s-sim/n-não): ");
        aux = getche();
    }while(aux == 's' || aux == 'S');

    system("PAUSE");
}