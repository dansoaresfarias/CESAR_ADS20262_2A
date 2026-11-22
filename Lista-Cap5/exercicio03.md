# Exercicio 03

Código da questão:

```c
void exibe_mensagem(char* msg);
int obter_codigo(void);
void limpar_tela(void);
```

a.
- `exibe_mensagem`: tem parâmetro de entrada (`char* msg`) e não tem valor de retorno (void).
- `obter_codigo`: não tem parâmetros de entrada (void) e tem valor de retorno (int).
- `limpar_tela`: não tem parâmetros de entrada nem valor de retorno.

b. Uma função com retorno devolve um valor para quem chamou, que pode ser usado numa expressão ou guardado numa variável. Um procedimento (função void) só executa ações, como imprimir algo na tela, e não devolve nada. Exemplo de função com retorno: calcular a área de um círculo, já que o resultado vai ser usado depois no programa. Exemplo de procedimento: exibir um menu de opções na tela.

c. Não é válida. limpar_tela() é do tipo void, ou seja, não devolve nenhum valor, então não existe nada para ser atribuído a x. O compilador acusa erro nessa linha.
