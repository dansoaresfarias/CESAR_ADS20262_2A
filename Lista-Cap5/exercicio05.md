# Exercicio 05

Código da questão:

```c
#define PI 3.14
#define SQR(x) ((x)*(x))
#define DOBRO(x) x*2

int main() {
    printf("%d\n", SQR(2+3));
    printf("%d\n", DOBRO(2+3));
    return 0;
}
```

a. A saída é:

```
25
8
```

A macro é uma substituição de texto feita antes da compilação. `SQR(2+3)` vira `((2+3)*(2+3))`, e como cada x está entre parênteses, a soma é feita primeiro: 5 * 5 = 25. `DOBRO(2+3)` vira `2+3*2`, sem parênteses, então a multiplicação tem precedência sobre a soma: 2 + 6 = 8, e não 10 como era esperado. Para DOBRO funcionar certo, ela precisaria dos parênteses de proteção: `#define DOBRO(x) ((x)*2)`.

b. O #define não é uma instrução da linguagem C, é uma diretiva do pré-processador, que substitui o identificador pelo texto exatamente como foi escrito. Se tivesse ponto e vírgula, ele faria parte do texto substituído e seria colocado em todo lugar onde a macro fosse usada, causando erro (por exemplo, `printf("%d", SQR(2);)`). Os identificadores em maiúsculas são uma convenção para diferenciar constantes e macros das variáveis e funções, deixando claro no código que ali vai acontecer uma substituição do pré-processador.

c. Por causa do espaço entre PRN e (n), o pré-processador entende PRN como uma constante sem argumentos, cujo texto é `(n) printf("%d", n)`. A forma correta é sem espaço: `#define PRN(n) printf("%d", n)`. Diferença entre macro com argumentos e função: a macro é só substituição de texto antes da compilação, o código dela é copiado em cada lugar onde é usada e não há verificação de tipo dos argumentos; a função é compilada uma única vez, é chamada durante a execução e o compilador verifica os tipos dos parâmetros.
