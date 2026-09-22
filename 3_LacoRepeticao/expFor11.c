#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    for(int i = 0, j = i; i <= 100 ; i++, j++){
        printf("%3d ", i + j);
    }

    system("PAUSE");
    return 0;
}