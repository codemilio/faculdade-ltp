# Lista de Atividades - Roteiro de Prática (Encontro 02)

## Orientações gerais

- Desenvolver as soluções em linguagem C.
- Incluir `stdio.h` e `locale.h`.
- Configurar `setlocale(LC_ALL, "Portuguese_Brazil.1252");` na função `main()`.
- Validar os valores conforme os limites de cada enunciado.
- Quando o enunciado solicitar nova tentativa, repetir a leitura até que o valor seja válido.
- Conferir o retorno de `scanf()` para identificar falhas de conversão.
- Não utilizar vetores, matrizes, funções próprias ou ponteiros.
- Entregar os scripts sem comentários.

---

## Atividade 1 - Soma dos números de 1 até N

**Objetivo:** Utilizar `while`, contador e acumulador para realizar uma soma progressiva.

**Enunciado:** Desenvolver um programa que solicite ao usuário um número inteiro N e calcule a soma de todos os números inteiros de 1 até N. Ao final, apresentar o valor informado e a soma calculada.

**Requisitos e validações:**

- N deve ser um número inteiro maior que zero e menor ou igual a 100.
- Se o valor estiver fora do intervalo, solicitar uma nova entrada.
- Utilizar `while` para controlar a repetição.
- Utilizar uma variável acumuladora para armazenar a soma.

**Conceitos trabalhados:** `while`, contador, acumulador, validação de faixa e operação de soma.

---

## Atividade 2 - Calculadora com menu repetitivo

**Objetivo:** Aplicar `do while` para manter um menu em execução até que o usuário escolha encerrá-lo.

**Enunciado:** Elaborar uma calculadora simples que apresente repetidamente o menu: 1 - Adição; 2 - Subtração; 3 - Multiplicação; 4 - Divisão; 0 - Encerrar. Para as operações de 1 a 4, solicitar dois números e apresentar o resultado correspondente. O programa deverá continuar exibindo o menu até que a opção 0 seja selecionada.

**Requisitos e validações:**

- A opção deve ser um número inteiro entre 0 e 4.
- Opções inválidas devem gerar uma mensagem e o menu deve ser apresentado novamente.
- Para cada operação válida, solicitar dois valores numéricos.
- Na divisão, não permitir que o segundo valor seja igual a zero.
- Utilizar `do while` para repetir o menu.
- Utilizar `switch` para selecionar a operação.

**Conceitos trabalhados:** `do while`, `switch`, seleção de operações, validação e condição de encerramento.

---

## Atividade 3 - Média de uma turma

**Objetivo:** Utilizar `for` para processar uma quantidade previamente definida de notas.

**Enunciado:** Desenvolver um programa que solicite a quantidade de estudantes de uma turma e, em seguida, leia a nota de cada estudante. Ao término, apresentar a soma das notas e a média da turma.

**Requisitos e validações:**

- A quantidade de estudantes deve ser um inteiro entre 1 e 50.
- Cada nota deve estar no intervalo de 0 a 10.
- Se uma nota estiver fora do intervalo, solicitar sua digitação novamente antes de avançar para o próximo estudante.
- Utilizar `for` para controlar a quantidade de leituras.
- Utilizar um acumulador para somar as notas e calcular a média ao final.

**Conceitos trabalhados:** `for`, contador, acumulador, validação de faixa e cálculo de média.

---

## Atividade 4 - Tabuada personalizada

**Objetivo:** Construir uma repetição com `for` para gerar uma sequência de cálculos.

**Enunciado:** Criar um programa que solicite um número inteiro e apresente sua tabuada de multiplicação, do 1 ao 10. Cada linha deverá mostrar a operação completa e o resultado, por exemplo: `5 x 3 = 15`.

**Requisitos e validações:**

- O número informado deve ser um inteiro entre 1 e 100.
- Se o valor estiver fora do intervalo, solicitar uma nova entrada.
- Utilizar `for` para gerar os multiplicadores de 1 a 10.

**Desafio adicional:** permitir que o usuário informe o multiplicador inicial e o final, validando se o inicial é menor ou igual ao final.

**Conceitos trabalhados:** `for`, variável de controle, expressão aritmética e formatação de saída.

---

## Atividade 5 - Registro de vendas com valor sentinela

**Objetivo:** Utilizar `while` com valor sentinela, contador e acumuladores para processar uma quantidade não definida de dados.

**Enunciado:** Uma loja deseja registrar os valores de suas vendas. Desenvolver um programa que leia o valor de cada venda e continue recebendo valores até que o usuário digite -1. Ao encerrar, apresentar a quantidade de vendas registradas, o valor total vendido, a média das vendas e o maior valor registrado.

**Requisitos e validações:**

- Valores de venda devem ser maiores que zero.
- O valor -1 será utilizado exclusivamente para encerrar a entrada de dados.
- Outros valores negativos devem ser rejeitados, sem encerrar o registro.
- Utilizar `while` para repetir a leitura até o valor sentinela.
- Tratar a situação em que nenhuma venda tenha sido registrada, evitando divisão por zero.

**Conceitos trabalhados:** `while`, valor sentinela, contador, acumulador, média e comparação para identificar o maior valor.

---

## Atividade 6 - Tabuadas em sequência

**Objetivo:** Combinar dois laços `for`, compreendendo o funcionamento de estruturas aninhadas.

**Enunciado:** Desenvolver um programa que solicite ao usuário dois números inteiros: um valor inicial e um valor final. O programa deverá apresentar a tabuada de cada número do intervalo informado, considerando os multiplicadores de 1 a 10. Por exemplo, se o intervalo informado for de 2 a 4, deverão ser apresentadas as tabuadas do 2, do 3 e do 4.
