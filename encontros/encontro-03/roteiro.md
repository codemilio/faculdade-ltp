# Lista de Atividades - Roteiro de Prática (Encontro 03)

## Orientações gerais

- Desenvolver as soluções em linguagem C.
- Incluir `stdio.h` e `locale.h`.
- Configurar `setlocale(LC_ALL, "Portuguese_Brazil.1252");` na função `main()`.
- Lembrar que os índices dos arrays em C começam em zero.
- Utilizar estruturas de repetição para leitura, processamento e apresentação dos elementos.
- Validar os valores informados conforme os limites de cada enunciado.
- Quando uma entrada for inválida, solicitar novamente o valor para a mesma posição.
- Não utilizar funções próprias, ponteiros ou alocação dinâmica.
- Entregar os scripts sem comentários.

---

## Atividade 1 - Controle de estoque de produtos

**Objetivo:** Armazenar quantidades em um vetor e processar seus elementos com estruturas de repetição.

**Enunciado:** Uma pequena loja de informática deseja realizar o controle da quantidade disponível de seus produtos. Para isso, será necessário armazenar a quantidade em estoque de oito produtos diferentes. Desenvolva um programa que utilize um vetor de inteiros para armazenar as quantidades disponíveis de cada produto. O programa deverá solicitar ao usuário a quantidade em estoque de cada um dos oito produtos. Após o preenchimento do vetor, deverá apresentar todas as quantidades cadastradas, a quantidade total de unidades armazenadas e a maior quantidade encontrada entre os produtos.

**Requisitos e validações:**

- Declarar um vetor capaz de armazenar oito valores inteiros.
- Utilizar uma estrutura de repetição para preencher o vetor.
- Aceitar somente quantidades entre 0 e 500.
- Caso seja informada uma quantidade inválida, solicitar novamente o valor para a mesma posição.
- Percorrer o vetor para apresentar os valores armazenados.
- Calcular a quantidade total de unidades em estoque.
- Identificar a maior quantidade registrada.

**Conceitos trabalhados:** vetor, índices, `for`, validação de faixa, acumulador e comparação para identificar o maior valor.

---

## Atividade 2 - Análise das notas de uma turma

**Objetivo:** Armazenar notas em um vetor e calcular estatísticas da turma.

**Enunciado:** Um professor deseja realizar uma análise das notas obtidas por dez estudantes em uma avaliação. Para facilitar o processamento, será necessário armazenar todas as notas em um vetor. Desenvolva um programa que solicite as notas dos dez estudantes e, após o preenchimento do vetor, apresente as notas cadastradas, a média da turma, a maior nota e a menor nota. O programa também deverá informar quantos estudantes obtiveram nota igual ou superior a 6,0.

**Requisitos e validações:**

- Declarar um vetor capaz de armazenar dez notas.
- Utilizar uma estrutura de repetição para realizar a leitura das notas.
- Aceitar somente notas entre 0,0 e 10,0.
- Caso uma nota seja inválida, solicitar novamente sua digitação.
- Calcular a média da turma.
- Identificar a maior e a menor nota.
- Contabilizar quantos estudantes obtiveram nota igual ou superior a 6,0.

**Conceitos trabalhados:** vetor, `for`, validação de faixa, acumulador, média, maior valor, menor valor e contador condicional.

---

## Atividade 3 - Controle de vendas mensais

**Objetivo:** Organizar dados em uma matriz e percorrê-la com laços aninhados.

**Enunciado:** Uma loja comercializa quatro produtos diferentes e deseja acompanhar as vendas realizadas durante três meses consecutivos. Desenvolva um programa que utilize uma matriz para armazenar a quantidade vendida de cada produto em cada mês. Cada linha deverá representar um produto, enquanto cada coluna representará um mês. O programa deverá solicitar os dados referentes aos quatro produtos e aos três meses. Após o preenchimento da matriz, deverá apresentar os valores registrados e calcular o total vendido de cada produto durante os três meses. Ao final, deverá apresentar também o total geral de unidades comercializadas pela loja.

**Requisitos e validações:**

- Declarar uma matriz de inteiros com quatro linhas e três colunas.
- Utilizar laços de repetição aninhados para preencher a matriz.
- Aceitar somente quantidades entre 0 e 1.000.
- Validar cada entrada antes de armazená-la na matriz.
- Apresentar os valores organizados em linhas e colunas.
- Calcular o total vendido de cada produto.
- Calcular o total geral de unidades comercializadas.

**Conceitos trabalhados:** matriz, índices de linha e coluna, laços `for` aninhados, validação de faixa, acumuladores e totalização por linha.

---

## Atividade 4 - Análise de desempenho acadêmico

**Objetivo:** Armazenar notas em uma matriz e calcular médias individuais e gerais.

**Enunciado:** Uma instituição de ensino deseja armazenar as notas de cinco estudantes em três avaliações realizadas durante o semestre. Desenvolva um programa que utilize uma matriz para armazenar as notas. Cada linha deverá representar um estudante, enquanto cada coluna representará uma avaliação. Após o preenchimento da matriz, o programa deverá apresentar as notas de cada estudante, calcular a média individual e identificar a média geral da turma. Além disso, deverá informar quantos estudantes obtiveram média individual igual ou superior a 7,0.

**Requisitos e validações:**

- Declarar uma matriz capaz de armazenar cinco estudantes e três avaliações.
- Utilizar laços aninhados para realizar a leitura das notas.
- Aceitar somente notas entre 0,0 e 10,0.
- Caso uma nota seja inválida, solicitar novamente o valor correspondente.
- Calcular e apresentar a média de cada estudante.
- Calcular a média geral da turma.
- Contabilizar quantos estudantes obtiveram média igual ou superior a 7,0.

**Conceitos trabalhados:** matriz, laços `for` aninhados, validação de faixa, acumulador por linha, média e contador condicional.
