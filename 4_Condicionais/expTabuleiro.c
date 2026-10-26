#include <stdio.h>
#include <stdlib.h>

int main(){

    for(int lin = 0 ; lin < 8; lin++){
        for(int col = 0; col < 8; col++){
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