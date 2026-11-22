# Exercicio 01

Código da questão:

```c
#include <stdio.h>
float celsius(float);
int main() {
    float c, f = 100.0;
    c = celsius(f);
    printf("Celsius = %.2f\n", c);
    return 0;
}
float celsius(float fahr) {
    return (fahr - 32.0) * 5.0 / 9.0;
}
```

a.
- **Protótipo**: `float celsius(float);`, antes da main. Avisa o compilador que existe uma função celsius, que recebe um float e retorna um float, para que ela possa ser chamada antes de ser definida.
- **Chamada**: `c = celsius(f);`, dentro da main. Executa a função passando o valor de f como argumento, e o valor retornado é atribuído a c.
- **Definição**: `float celsius(float fahr) { ... }`, depois da main. É o código da função de fato: recebe o valor no parâmetro fahr, faz o cálculo e devolve o resultado com return.

b. O protótipo informa ao compilador o tipo de retorno e a quantidade e os tipos dos parâmetros da função. Com isso ele consegue verificar se cada chamada passa o número certo de argumentos, com os tipos certos, e fazer as conversões necessárias. Se o protótipo fosse omitido e a função fosse definida depois da main, o compilador encontraria a chamada sem conhecer a função, então não teria como verificar os parâmetros. Nos compiladores antigos ele assumiria que a função retorna int (declaração implícita), e o resultado sairia errado. Nos compiladores atuais isso gera erro de declaração implícita da função.

c. A função celsius() é do tipo float. O tipo de uma função é o tipo do valor que ela devolve com return, porque é esse valor que a chamada `celsius(f)` passa a valer no ponto onde é usada (por exemplo, na atribuição a c). Os parâmetros são só os dados de entrada; uma função pode receber vários parâmetros de tipos diferentes, mas devolve um único valor, de um único tipo.
