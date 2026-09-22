#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    for(;;){
        printf("%d ", rand() % 2);
    }

    system("PAUSE");
    return 0;
}