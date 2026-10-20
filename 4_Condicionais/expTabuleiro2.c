#include <stdio.h>
#include <stdlib.h>

int main(){

    int numLinCol;
    printf("Digite o numero de linhas e colunas do tabuleiro: ");
    scanf("%d", &numLinCol);

    for(int lin = 0 ; lin < numLinCol; lin++){
        for(int col = 0; col < numLinCol; col++){
            if((lin + col) % 2 == 0){
                printf("%c%c", 219, 219);
            } else{
                printf("  ");
            }
        }
        printf("\n");
    }


    system("PAUSE");
    return 0;
}