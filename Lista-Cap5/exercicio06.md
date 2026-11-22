# Exercicio 06

Código da questão:

```c
#include <stdio.h>
#include "areas.h"

#define SOMA(x,y) ((x)+(y))
#undef SOMA

#ifdef DEBUG
    printf("Modo de depuracao\n");
#else
    printf("Modo normal\n");
#endif
```

a. Com `#include <stdio.h>`, entre sinais de menor e maior, o pré-processador procura o arquivo nas pastas padrão do compilador; usamos essa forma para os arquivos de cabeçalho da biblioteca padrão. Com `#include "areas.h"`, entre aspas, ele procura primeiro na pasta do próprio programa e só depois nas pastas padrão; usamos essa forma para os arquivos de cabeçalho criados por nós.

b. O `#undef SOMA` remove a definição da macro SOMA. A partir dessa linha SOMA deixa de existir e não pode mais ser usada, a não ser que seja definida de novo. A forma `#undef SOMA(x,y)` está incorreta porque o #undef recebe apenas o nome da macro, sem a lista de parâmetros.

c. Será impresso `Modo normal`. Essa decisão é tomada no pré-processamento, antes da compilação: o pré-processador verifica se DEBUG foi definido e mantém só o código do bloco correspondente, descartando o outro. As diretivas são processadas e removidas pelo pré-processador, e o compilador recebe apenas o código C resultante, por isso elas não aparecem no executável final.
