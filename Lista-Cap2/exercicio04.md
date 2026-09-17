Código da questão:

```c
int a = 1, b = 2, c = 3, d = 4;
a += b + c;             // Valor final de a = ?
b *= c = d + 2;          // Valores finais de b e c = ?
d %= a + a + a;          // Valor final de d = ?
d -= c -= b -= a;        // Valor final de d, c e b = ?
a += b += c += 7;        // Valor final de a, b e c = ?
```

Estado inicial: a=1, b=2, c=3, d=4.

1. `a += b + c;` → a = a + (b + c) = 1 + (2 + 3) = 6. **a = 6**.

2. `b *= c = d + 2;` → o operador `=` é avaliado primeiro (associatividade à direita): c = d + 2 = 4 + 2 = 6, então **c = 6**. Em seguida b *= c → b = b * c = 2 * 6 = 12, então **b = 12**.

3. `d %= a + a + a;` → a + a + a = 6 + 6 + 6 = 18. d %= 18 → d = d % 18 = 4 % 18 = 4 (o valor não muda pois 4 < 18). **d = 4**.

4. `d -= c -= b -= a;` → associatividade à direita, resolve-se de dentro para fora: primeiro b -= a → b = 12 - 6 = 6 (**b = 6**); depois c -= b → c = 6 - 6 = 0 (**c = 0**); por fim d -= c → d = 4 - 0 = 4 (**d = 4**).

5. `a += b += c += 7;` → primeiro c += 7 → c = 0 + 7 = 7 (**c = 7**); depois b += c → b = 6 + 7 = 13 (**b = 13**); por fim a += b → a = 6 + 13 = 19 (**a = 19**).

Valores finais: **a = 19, b = 13, c = 7, d = 4**.
