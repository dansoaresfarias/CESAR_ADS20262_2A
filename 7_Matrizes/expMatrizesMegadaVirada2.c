#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char ch;

    do {
        system("cls");

        int jogo[6];
        int qtdJogos;

        printf(".:: Programa de Sorteio da Mega Sena ::.\n\n");
        
        do{
            printf("Digite a quantidade de jogos que deseja gerar (entre 1 e 10): ");
            scanf("%d", &qtdJogos);
            printf("\n");
        } while(qtdJogos < 1 || qtdJogos > 50);


        for (int j = 0; j < qtdJogos; j++){
            for (int i = 0; i < 6; i++){
                int numero = rand() % 60 + 1;
                //verifica se o número já foi sorteado
                if(i > 0){
                    for(int v = 0; v < i; v++){
                        if(numero == jogo[v]){
                            do{
                                numero = rand() % 60 + 1;
                            } while(numero == jogo[v]);
                        }
                    }
                }
                jogo[i] = numero;
                printf("%d ", numero);
            }
            printf("\n");
        }


        do {
            printf("\nDeseja repetir o programa? (s - sim / n - não): ");
            ch = getche();
            printf("\n");
        } while(ch != 's' && ch != 'S' && ch != 'n' && ch != 'N');

    } while (ch == 's' || ch == 'S');

    system("PAUSE");
    return 0;
}