# Exercicio 04

Código da questão:

```c
long fatorial(int n) {
    return ((n == 0) ? (long)1 : (long)n * fatorial(n - 1));
}
```

a. O caso base é `n == 0`, que devolve 1 sem fazer nova chamada. O passo recursivo é `n * fatorial(n - 1)`, em que a função chama a si mesma com um valor menor. Se o caso base fosse removido, a função chamaria a si mesma indefinidamente (n - 1, n - 2, 0, -1, -2, ...), numa recursão infinita, até a memória da pilha acabar e o programa ser encerrado com erro.

b.

Empilhamento:

```
fatorial(4) = 4 * fatorial(3)
fatorial(3) = 3 * fatorial(2)
fatorial(2) = 2 * fatorial(1)
fatorial(1) = 1 * fatorial(0)
fatorial(0) = 1   (caso base)
```

Desempilhamento:

```
fatorial(0) devolve 1
fatorial(1) devolve 1 * 1 = 1
fatorial(2) devolve 2 * 1 = 2
fatorial(3) devolve 3 * 2 = 6
fatorial(4) devolve 4 * 6 = 24
```

Resultado: **fatorial(4) = 24**.

c. A cada chamada recursiva, um novo bloco é colocado na pilha de execução com o parâmetro n daquela chamada e o endereço de retorno, ou seja, o ponto para onde a execução volta quando ela terminar. Esses blocos ficam empilhados esperando a chamada seguinte terminar; quando o caso base é atingido, eles começam a ser retirados um a um, do último para o primeiro. Sem caso base os blocos nunca são retirados e continuam sendo empilhados até o espaço da pilha acabar (estouro de pilha, ou stack overflow), e o programa é encerrado com falha.
