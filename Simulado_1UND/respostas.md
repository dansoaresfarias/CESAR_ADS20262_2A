# Exercicio 01

Alternativa correta: **c**.

Como a linguagem C diferencia letras maiúsculas de minúsculas, 'valor'/'VALOR', 'peso'/'Peso' e 'taxa'/'TAXA' são identificadores totalmente distintos para o compilador.

# Exercicio 02

Código da questão:

```c
#include <stdio.h>
#include <stdlib.h>;

int Main()
{
    int idade = 20;
    printf( A idade do aluno eh: %d anos.. , idade);
    cout << endl;
    system("PAUSE");
    return 0;
}
```

Erros:

1. `int Main()` está com 'M' maiúsculo. O compilador não reconhece como a função principal, e o programa não tem main (erro na ligação: `undefined reference to main`). O correto é `int main()`.
2. A string do printf não está entre aspas duplas. O correto é `printf("A idade do aluno eh: %d anos.\n", idade);`.
3. `cout << endl;` é da linguagem C++, não existe em C. Para quebrar a linha em C usa-se `printf("\n");` (ou o `\n` dentro da própria string do printf).

Além disso, o `#include <stdlib.h>;` não deve ter ponto e vírgula no final, porque diretivas de pré-processador não terminam com `;`.

# Exercicio 03

Código da questão:

```c
int a = 2, b = 4, c = 5, d = 10;
a += b + c;          // Valor final de a = ?
b *= c = d - 2;      // Valores finais de b e c = ?
d %= a + 3;          // Valor final de d = ?
a += b += c += 5;    // Valores finais de a, b e c = ?
```

Estado inicial: a=2, b=4, c=5, d=10.

1. `a += b + c;` → a = a + (b + c) = 2 + (4 + 5) = 11. **a = 11**.

2. `b *= c = d - 2;` → o operador `=` é avaliado primeiro (associatividade à direita): c = d - 2 = 10 - 2 = 8, então **c = 8**. Em seguida b *= c → b = 4 * 8 = 32, então **b = 32**.

3. `d %= a + 3;` → a + 3 = 11 + 3 = 14. d = d % 14 = 10 % 14 = 10 (o valor não muda pois 10 < 14). **d = 10**.

4. `a += b += c += 5;` → primeiro c += 5 → c = 8 + 5 = 13 (**c = 13**); depois b += c → b = 32 + 13 = 45 (**b = 45**); por fim a += b → a = 11 + 45 = 56 (**a = 56**).

Valores finais: **a = 56, b = 45, c = 13, d = 10**.

# Exercicio 04

Variáveis: int i = 2, j = 3, k = 0; float x = 2.5, y = 5.0.

a. `i < j + 2` → j + 2 = 5; 2 < 5 é verdadeiro. **Resultado: 1**.

b. `2 * i - 5 <= j - 4` → 2*2-5 = -1; j-4 = -1; -1 <= -1 é verdadeiro. **Resultado: 1**.

c. `!k && (x + y >= 7.5)` → !k = !0 = 1; x+y = 7.5 e 7.5 >= 7.5 é verdadeiro; 1 && 1 = 1. **Resultado: 1**.

d. `!(i == j) || (y / x == 2.0)` → i==j = 2==3 = 0; !0 = 1; como o lado esquerdo do `||` já é verdadeiro, o resultado é 1 (e y/x = 5.0/2.5 = 2.0 também seria verdadeiro). **Resultado: 1**.

e. `i == 2 && j == 4 || k == 0` → precedência: `==` > `&&` > `||`. i==2 = 1; j==4 = 0; 1 && 0 = 0; k==0 = 1; 0 || 1 = 1. **Resultado: 1**.

# Exercicio 05

a. O while testa a condição antes de executar o bloco, então o bloco pode ser executado zero vezes (se a condição já começar falsa). O do-while executa o bloco primeiro e só testa a condição no final, então o bloco é executado pelo menos uma vez.

b. O for é mais elegante quando o número de repetições é conhecido e o laço é controlado por um contador (ex: percorrer de 1 a 100). Ele reúne a inicialização, o teste e o incremento em uma única linha, o que deixa o controle do laço visível de uma vez. No while, essas três partes ficam espalhadas pelo código.

c. Não é erro de compilação, é erro de lógica. O ponto e vírgula vira o corpo do laço (uma instrução vazia). Se condicao for verdadeira, como nada dentro do laço altera condicao, o programa fica preso em um laço infinito testando a condição sem fazer nada. O bloco que vem logo depois, que parecia ser o corpo do laço, nunca é executado.

# Exercicio 06

Código da questão:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        int soma = 0;
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}
```

a. A variável soma foi declarada dentro do bloco do for, então ela só existe dentro desse bloco. No printf, que está fora do bloco, o identificador soma não está declarado, e o compilador acusa o erro `'soma' undeclared`.

b. As iterações com i = 1, 2, 3, 4, 6 e 7 são executadas por completo. Quando i = 5, o continue pula o resto do corpo e vai direto para o incremento (i++), então o quadrado de 5 não é somado. Quando i = 8, o break encerra o laço imediatamente, então as iterações 8, 9 e 10 nunca chegam a somar nada.

c. Código corrigido:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;
    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}
```

Soma: 1 + 4 + 9 + 16 + 36 + 49 = 115.

Saída: `Soma final = 115`.
