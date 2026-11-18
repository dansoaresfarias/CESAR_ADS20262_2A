# Exercicio 01

a. O while testa a condição antes de executar o bloco, então o bloco pode ser executado zero vezes (se a condição já começar falsa). O do-while executa o bloco primeiro e só testa a condição no final, então o bloco é executado pelo menos uma vez.

b.
- **for**: quando o número de repetições é conhecido, com contador que tem início, fim e incremento definidos (ex: imprimir os números de 1 a 100).
- **while**: quando o número de repetições não é conhecido e depende de uma condição (ex: ler valores até o usuário digitar um valor de parada).
- **do-while**: quando o bloco precisa ser executado pelo menos uma vez antes do teste (ex: menus e validação de entrada de dados).

c. Não é erro de compilação, é erro de lógica. O ponto e vírgula vira o corpo do laço (uma instrução vazia). Se condicao for verdadeira, como nada dentro do laço altera condicao, o programa fica preso em um laço infinito testando a condição sem fazer nada. O bloco que vem logo depois, que parecia ser o corpo do laço, nunca é executado.

# Exercicio 02

Código da questão:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    for (i = 1; i < 10; i++) {
        int soma = 0;
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}
```

a. A variável soma foi declarada dentro do bloco do for, então ela só existe dentro desse bloco. No printf, que está fora do bloco, o identificador soma não está declarado, e o compilador acusa o erro `'soma' undeclared`.

b. Porque a declaração `int soma = 0;` está dentro do bloco, a cada iteração a variável é criada de novo e zerada. Assim, soma teria apenas o valor `i * i` da iteração atual, e não o acumulado das iterações anteriores.

c. Código corrigido:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;
    for (i = 1; i < 10; i++) {
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}
```

Saída: `Soma final = 285`.

- **Visibilidade (escopo)**: é a região do código onde um identificador pode ser usado.
- **Escopo de bloco**: uma variável declarada dentro de um bloco `{ }` só é visível dentro desse bloco (e dos blocos internos a ele).
- **Tempo de vida**: é o período em que a variável existe na memória. Uma variável de bloco é criada quando a execução entra no bloco e destruída quando sai dele. Por isso, no código original, soma era recriada e zerada a cada iteração.

# Exercicio 03

Código da questão:

```c
// Trecho A: Incremento por divisão
for (a = 36; a > 0; a /= 2)
    printf("%d\t", a);

// Trecho B: Omissão de inicialização e incremento
for (; (ch = getch()) != 'X' ;)
    printf("%c", ch + 1);

// Trecho C: Omissão completa de expressões
for (;;)
    printf("Laço Infinito\n");
```

a. `36	18	9	4	2	1` (separados por tabulação). Como a é inteiro, 9 / 2 = 4 e 1 / 2 = 0, e com a = 0 o teste a > 0 é falso.

b. O laço lê caracteres do teclado com getch() (sem mostrar na tela) até o usuário digitar 'X'. Para cada caractere lido, imprime o caractere seguinte da tabela ASCII, porque `ch + 1` soma 1 ao código do caractere (ex: digitando 'a' é impresso 'b'). Os parênteses são necessários porque o operador `!=` tem precedência maior que o `=`. Sem eles, a expressão seria `ch = (getch() != 'X')`, e ch receberia o resultado da comparação (0 ou 1) em vez do caractere digitado.

c. Usando o comando break dentro do laço junto com uma condição. Exemplo:

```c
for (;;) {
    printf("Laço Infinito\n");
    if (getch() == 's')
        break;
}
```

# Exercicio 04

a. O break encerra o laço imediatamente, sem executar o resto do corpo e sem testar a condição de novo. A execução continua na primeira instrução depois do laço.

b. O continue pula o resto das instruções do corpo do laço e vai direto para a próxima iteração. No for, a expressão executada logo após o continue é a de incremento, e depois dela vem o teste.

c. Apenas o laço interno é interrompido. O laço externo continua normalmente com a sua próxima iteração.

# Exercicio 05

Código da questão:

```c
int i, j;
for (i = 0, j = 10; i < j; i++, j--) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
}
```

a. 5 iterações. Na sexta verificação i = 5 e j = 5, então i < j é falso e o laço termina.

b.
```
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10
```

c.
```c
int i, j;
i = 0;
j = 10;
while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}
```

# Exercicio 06

Código da questão:

```c
int x = 0;
while (x++ < 5);
printf("Valor final de x = %d\n", x);
```

a. `Valor final de x = 6`.

b. Como o incremento é pós-fixado, primeiro o valor atual de x é comparado com 5 e só depois x é incrementado:

1. 0 < 5 é verdadeiro, x passa a 1.
2. 1 < 5 é verdadeiro, x passa a 2.
3. 2 < 5 é verdadeiro, x passa a 3.
4. 3 < 5 é verdadeiro, x passa a 4.
5. 4 < 5 é verdadeiro, x passa a 5.
6. 5 < 5 é falso, mas o incremento acontece mesmo assim e x passa a 6. O laço termina.

c.
```c
int x = 0;
while (x < 5) {
    x++;
}
x++;
printf("Valor final de x = %d\n", x);
```
