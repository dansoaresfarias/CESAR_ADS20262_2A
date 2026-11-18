# Exercicio 04

Código da questão:

```c
#include <stdio.h>
int main() {
    int codigo = 2;
    switch (codigo) {
        case 1:
            printf("Bronze\n");
        case 2:
            printf("Prata\n");
        case 3:
            printf("Ouro\n");
            break;
        default:
            printf("Sem Medalha\n");
    }
    return 0;
}
```

a. A saída é:

```
Prata
Ouro
```

codigo vale 2, então a execução entra direto no case 2. Como esse case não tem break, depois de imprimir Prata a execução continua pro case 3 de qualquer jeito, imprime Ouro, e só para porque o case 3 tem break.

b. O break encerra o switch na hora, sem deixar a execução continuar pros cases de baixo. Quando ele é omitido, a execução cai pro próximo case mesmo sem o valor bater, isso se chama efeito fall-through, ou efeito cascata.

c. O argumento do switch tem que ser um tipo inteiro, como int, char ou enum, e os valores dos case também precisam ser constantes inteiras. Float e double não são permitidos, o compilador C não aceita comparar ponto flutuante dessa forma no switch.
