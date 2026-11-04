#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
// 2ª forma de declarar funções em C, utilizando protótipos. As funções são declaradas antes do main() e definidas depois do main().
// Protótipos das funções
float fahrenheitToCelsius(float fahrenheit);
float celsiusToFahrenheit(float celsius);
float celsiusToKelvin(float celsius);
float kelvinToCelsius(float kelvin);
float fahrenheitToKelvin(float fahrenheit);
float kelvinToFahrenheit(float kelvin);

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float temp;
    char op, aux;

    do{
        system("cls");
        printf(".:: Programa de Conversão de Temperatura ::.\n");
        printf("Escolha a conversão de temperatura:\n");
        printf("\t1. Fahrenheit para Celsius\n");
        printf("\t2. Celsius para Fahrenheit\n");
        printf("\t3. Celsius para Kelvin\n");
        printf("\t4. Kelvin para Celsius\n");
        printf("\t5. Fahrenheit para Kelvin\n");
        printf("\t6. Kelvin para Fahrenheit\n");
        printf("Opção: ");

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
    return 0;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

float kelvinToCelsius(float kelvin) {
    return kelvin - 273.15;
}

float fahrenheitToKelvin(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0 + 273.15;
}

float kelvinToFahrenheit(float kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32;
}