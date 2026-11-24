#include <stdio.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char textinho[] = "Olá Ana Rita,\n\nEspero que você esteja bem!\n";

    /*
    char textinho[][] = {
        "Olá Ana Rita,",
        "\n\n",
        "Espero que você esteja bem!"
    };
    */

    printf("%s", textinho);

    return 0;
}