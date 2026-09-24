Variáveis: int i = 1, j = 2, k = 3, n = 2; float x = 3.3, y = 4.4.

a. `i < j + 3` → j + 3 = 5; 1 < 5 é verdadeiro. **Resultado: 1**.

b. `2 * i - 7 <= j - 8` → 2*1-7 = -5; j-8 = -6; -5 <= -6 é falso. **Resultado: 0**.

c. `-x + y >= 2.0 * y` → -3.3+4.4 = 1.1; 2.0*4.4 = 8.8; 1.1 >= 8.8 é falso. **Resultado: 0**.

d. `x == y` → 3.3 == 4.4 é falso. **Resultado: 0**.

e. `!(n - j)` → n-j = 2-2 = 0; !0 é verdadeiro. **Resultado: 1**.

f. `!n - j` → o `!` tem precedência maior que a subtração, então primeiro !n = !2 = 0 (n é diferente de zero), depois 0 - j = 0 - 2 = -2. Como a expressão deixa de ser puramente lógica (o `!` só é aplicado a n, não ao resultado da subtração), o valor obtido é -2, e não 0 ou 1. **Resultado: -2** (um valor não-zero, portanto avaliado como verdadeiro caso usado numa condição).

g. `i && j && k` → 1, 2 e 3 são todos diferentes de zero. **Resultado: 1**.

h. `i || j - 3 && k` → precedência: `-` > `&&` > `||`. j-3 = -1; -1 && k = -1 && 3 = 1 (ambos diferentes de zero); i || 1 = 1 || 1 = 1. **Resultado: 1**.

i. `i < j && 2 >= k` → i<j = 1<2 = 1; 2>=k = 2>=3 = 0; 1 && 0 = 0. **Resultado: 0**.

j. `i == 2 || j == 4 || k == 5` → i==2 é falso, j==4 é falso, k==5 é falso; 0||0||0 = 0. **Resultado: 0**.
