Código da questão:

```c
int valor_inteiro;
valor_inteiro = 2.97;
printf("O valor armazenado eh: %d\n", valor_inteiro);
```

a. O valor exibido no console é 2.

b. Isso ocorre porque 2.97 é um double e valor_inteiro é um int. Na atribuição, o compilador converte o double para int descartando a parte fracionária, sem arredondar. O nome desse fenômeno é truncamento por conversão implícita de tipo (coerção implícita, ou narrowing conversion).

c. Para arredondar em vez de truncar, o programador pode usar a função round() da <math.h> antes de atribuir, por exemplo `valor_inteiro = (int) round(2.97);`. Caso ele precise manter a precisão do valor, a solução é simplesmente não usar uma variável int, e sim uma variável float ou double para armazenar o resultado.
