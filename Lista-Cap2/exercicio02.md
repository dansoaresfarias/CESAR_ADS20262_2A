a. As funções de <conio.h> não fazem parte do padrão ANSI C, são específicas dos compiladores de DOS/Windows (como o da Borland). Por isso, programas que dependem delas não compilam em sistemas que seguem o padrão POSIX/ANSI, como Linux, macOS e a maioria dos servidores.

b. As funções portáveis e equivalentes da <stdio.h> são getchar() e putchar() (ou scanf("%c", ...) e printf("%c", ...) para o mesmo efeito).

c.
```c
int c = getchar();
while (getchar() != '\n'); // descarta o restante do buffer até a quebra de linha
```
