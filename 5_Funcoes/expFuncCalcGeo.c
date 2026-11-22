#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include "calcFormasGeometricas.h"

void main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float raio, altura, lado;
    char op, aux;

    do{
        system("cls");
        menu();
        do{
            op = getche();
            if(op < '1' || op > '8'){
                printf("\nOpção inválida.\nDigite novamente: ");
            }
        }while(op < '1' || op > '8');

        switch (op){
            case '1':
                printf("\nInforme o raio da esfera: ");
                scanf("%f", &raio);
                printf("Área da esfera: %.2f\n", areaEsfera(raio));
                break;
            case '2':
                printf("\nInforme o raio da esfera: ");
                scanf("%f", &raio);
                printf("Volume da esfera: %.2f\n", volumeEsfera(raio));
                break;
            case '3':
                printf("\nInforme o lado do cubo: ");
                scanf("%f", &lado);
                printf("Área do cubo: %.2f\n", areaCubo(lado));
                break;
            case '4':
                printf("\nInforme o lado do cubo: ");
                scanf("%f", &lado);
                printf("Volume do cubo: %.2f\n", volumeCubo(lado));
                break;
            case '5':
                printf("\nInforme o raio do cilindro: ");
                scanf("%f", &raio);
                printf("Informe a altura do cilindro: ");
                scanf("%f", &altura);
                printf("Área do cilindro: %.2f\n", areaCilindro(raio, altura));
                break;
            case '6':
                printf("\nInforme o raio do cilindro: ");
                scanf("%f", &raio);
                printf("Informe a altura do cilindro: ");
                scanf("%f", &altura);
                printf("Volume do cilindro: %.2f\n", volumeCilindro(raio, altura));
                break;
            case '7':
                printf("\nInforme o raio do cone: ");
                scanf("%f", &raio);
                printf("Informe a altura do cone: ");
                scanf("%f", &altura);
                printf("Área do cone: %.2f\n", areaCone(raio, altura));
                break;
            case '8':
                printf("\nInforme o raio do cone: ");
                scanf("%f", &raio);
                printf("Informe a altura do cone: ");
                scanf("%f", &altura);
                printf("Volume do cone: %.2f\n", volumeCone(raio, altura));
                break;
            default:
                printf("\nOpção inválida.\n");
        }
        printf("Deseja executar o programa novamente? (s-sim/n-não): ");
        aux = getche();
    }while(aux == 's' || aux == 'S');
}