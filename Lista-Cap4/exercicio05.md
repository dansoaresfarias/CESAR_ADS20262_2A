# Exercicio 05

Código da questão:

```c
int a = 0, b = 5, c = 10;
if (a != 0 && ++b > 5)
    c += 10;
else
    c -= 2;
printf("a = %d, b = %d, c = %d\n", a, b, c);
```

a. A saída é:

```
a = 0, b = 5, c = 8
```

O incremento ++b não é executado. Como a != 0 já é falso, o && nem chega a avaliar o lado direito, então b continua valendo 5. A condição inteira fica falsa, entra no else, e c vira 10 - 2 = 8.

b. No &&, se o lado esquerdo já é falso, o resultado da expressão inteira já está decidido, então o lado direito nem é avaliado. No ||, se o lado esquerdo já é verdadeiro, a expressão inteira já é verdadeira, então o lado direito também não é avaliado. Essa economia de avaliação é o curto-circuito.

c. Com a condição trocada pra (a == 0 || ++b > 5), a == 0 já é verdadeiro, então o || para ali mesmo e ++b não executa, b continua 5. A condição fica verdadeira, entra no if, e c vira 10 + 10 = 20. No final, b fica 5 e c fica 20.
