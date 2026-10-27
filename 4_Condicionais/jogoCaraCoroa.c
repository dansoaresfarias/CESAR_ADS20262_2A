#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int ganhou, perdeu, qtdJogadas, resp;
    char ch;

    do{
        system("cls");
        ganhou = 0;
        perdeu = 0;
        printf(".:: Jogo Cara ou Coroa ::.\n");
        
        do{
            printf("Informe um número inteiro positivo e ímpar maior que 1: ");            
            scanf("%d", &qtdJogadas);
        }while(qtdJogadas < 2 || qtdJogadas % 2 == 0);

        for(int i = 0; i < qtdJogadas; i++){
            printf("Rodada %d de %d. Escolha 0 (Cara) ou 1 (Coroa): ", i+1, qtdJogadas);
            scanf("%d", &resp);
            if(resp == rand() % 2){
                ganhou++;
                printf(resp == 0 ? "Parabens! Voce ganhou com cara!\n" : "Parabens! Voce ganhou com coroa!\n");
            } else {
                perdeu++;
                printf(resp == 0 ? "Que pena! Voce perdeu com cara!\n" : "Que pena! Voce perdeu com coroa!\n");
            }
        }
        
        if(ganhou > perdeu){
            printf("\nVoce ganhou %d vezes e perdeu %d vezes, parabens!\n", ganhou, perdeu);
        } else{
            printf("\nVoce perdeu %d vezes e ganhou %d vezes, que pena!\n", perdeu, ganhou);
        }

        printf("Deseja jogar cara ou coroa novamente? (s-sim/n-não): ");
        ch = getche();
    }while(ch == 's' || ch == 'S');


    return 0;
}