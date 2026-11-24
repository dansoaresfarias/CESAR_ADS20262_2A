# Exercicio 05

Código da questão:

```c
main()
{
    printf("Linguagem C");
    system("pause");
}
```

O código não compila certo em C ANSI. Faltam:

1. O include stdio.h, que é onde fica o printf.
2. O include stdlib.h, que é onde fica o system.
3. O int antes de main.
4. O return 0 no final da função.

# Exercicio 06

Código da questão:

```c
main()
{
    int a=1; b=2; c=3:
    printf("0s números são: %d%d%d\n, a, b, c, d);
    system("pause");
}
```

Erros de sintaxe:

1. Faltam o include stdio.h e o include stdlib.h.
2. Falta o int antes de main.
3. Só a variável a foi declarada com tipo. b e c ficaram sem tipo nenhum.
4. O trecho c=3 termina com dois pontos, e não com ponto e vírgula.
5. A string do printf não foi fechada com aspas.
6. Tem 3 especificadores %d mas 4 argumentos. A variável d nem existe.

Erro de lógica:

7. Está escrito 0s no lugar da letra O.

# Exercicio 07

a.
```c
printf("\n\tBom dia! Shirley.");
```
Pula uma linha, dá um tab e escreve Bom dia! Shirley.

b.
```c
printf("Você já tomou café? \n");
```
Escreve Você já tomou café? e pula linha.

c.
```c
printf("\n\nA solução não existe!\nNão insista.");
```
Pula duas linhas, escreve A solução não existe!, pula linha, escreve Não insista.

d.
```c
printf("Duas\tlinhas\tde\tsaída\nou\tuma?");
```
Escreve Duas, tab, linhas, tab, de, tab, saída, pula linha, escreve ou, tab, uma?

e.
```c
printf("%s\n%s\n%s\n", "um", "dois", "três");
```
Escreve um, pula linha, escreve dois, pula linha, escreve três, pula linha.

# Exercicio 08

Código da questão:

```c
printf("\n\t\"Primeiro programa\"");
```

Pula uma linha, dá um tab, escreve aspas, escreve Primeiro programa e escreve aspas de novo.
As aspas aparecem porque estão escapadas com barra invertida, senão o compilador ia achar que a string tinha acabado ali.

# Exercicio 09

Código da questão:

```c
printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
printf("%c", "\"");
```

Na primeira linha, quebra de linha, tab e aspas são constantes de caractere, então o %c imprime cada uma normal, e depois escreve Primeiro programa.

Na segunda linha, a aspa entre aspas duplas é uma string, não uma constante de caractere. Passar uma string pro %c é erro de tipo. O compilador avisa, e o que sai na tela não é a aspa esperada, e sim um valor sem sentido. O certo era usar aspa simples.

# Exercicio 10

A alternativa certa é a letra b, verdadeiro.

C diferencia maiúscula de minúscula. peso, Peso e PESO são três nomes diferentes, cada um é uma variável própria na memória.

# Exercicio 11

| Constante | Classificação | Tipo base |
|---|---|---|
| \r | sequência de escape | char |
| 2130 | inteira decimal | int |
| -123 | inteira decimal | int |
| 33.28 | ponto flutuante | double |
| 0XFA | inteira hexadecimal | int |
| 0101 | inteira octal | int |
| 2.0e30 | ponto flutuante | double |
| \xDC | sequência de escape | char |
| '\"' | caractere | char |
| '\\' | caractere | char |
| 'F' | caractere | char |
| 0 | inteira decimal | int |
| '\0' | caractere | char |
| "F" | string | char |
| -4567.89 | ponto flutuante | double |

# Exercicio 12

Código da questão:

```c
a) int a;
b) float b;
c) double float c;
d) unsigned char d;
e) unsigned e;
f) long float f;
g) long g;
h) long double h;
```

int a; está correto.
float b; está correto.
double float c; está incorreto. São dois tipos diferentes juntos, tem que usar só um.
unsigned char d; está correto.
unsigned e; está correto, unsigned sozinho quer dizer unsigned int.
long float f; está incorreto, long não existe junto com float.
long g; está correto, long sozinho quer dizer long int.
long double h; está correto.

# Exercicio 13

A alternativa certa é a letra c. Arquivo de cabeçalho é um arquivo de texto comum, com protótipo de função, constante, macro e tipo.

# Exercicio 14

A alternativa certa é a letra a. O include serve pra avisar o compilador pra carregar as funções da biblioteca padrão antes de compilar o código.

# Exercicio 15

A alternativa certa é a letra c. O include é uma diretiva do pré-processador, que roda antes da compilação.

# Exercicio 16

A alternativa certa é a letra c. As diretivas de pré-processador são lidas pelo pré-processador, que roda antes da compilação.

# Exercicio 17

Código da questão:

```c
a) printf ( "Primeiro programa" );
b) printf( "Primeiro programa" );
c) printf("Primeiro programa");
d) printf "Primeiro programa" ;
```

As opções a, b e c estão certas. Espaço a mais entre os parênteses e o texto não muda nada pro compilador.
A opção d está errada porque falta os parênteses do printf.
