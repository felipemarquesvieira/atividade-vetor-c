# Atividade - Vetores em C

**Estudante:** FELIPE MARQUES VIEIRA  
**RGM:** 48114111

## Objetivo

Desenvolver um programa em linguagem C para aplicar conceitos de arrays (vetores), estruturas de repetição, estruturas condicionais, entrada de dados e operações matemáticas.

O programa recebe 20 números inteiros e realiza diferentes análises sobre os valores armazenados.

## Funcionalidades

O programa:

- Lê 20 números inteiros;
- Armazena os valores em um vetor de 20 posições;
- Calcula a soma dos números múltiplos de 3;
- Calcula a média dos números pares;
- Informa a quantidade de números positivos;
- Informa a quantidade de números negativos;
- Identifica o maior valor;
- Identifica o menor valor;
- Exibe todos os elementos armazenados no vetor;
- Trata o caso em que não existem números pares, evitando divisão por zero;
- Não considera o zero como positivo ou negativo.

## Lógica utilizada

Primeiramente, um `for` é utilizado para solicitar os 20 números ao usuário e armazená-los no vetor.

Depois, outro `for` percorre todas as posições do vetor. Durante essa etapa:

- O operador `%` verifica se o número é múltiplo de 3.
- O operador `%` também verifica se o número é par.
- Condições `if` e `else if` contabilizam os números positivos e negativos.
- Outras condições `if` identificam o maior e o menor valor.
- A média dos pares é calculada somente quando existe pelo menos um número par, evitando divisão por zero.

Ao final, um último `for` apresenta todos os elementos armazenados.

## Como compilar

### GCC

No terminal, dentro da pasta do projeto, execute:

```bash
gcc atividade_vetor.c -o atividade_vetor
```

### Windows

Depois da compilação:

```bash
atividade_vetor.exe
```

### Linux/macOS

Depois da compilação:

```bash
./atividade_vetor
```

## Exemplo de entrada

```text
1
2
3
4
5
6
7
8
9
10
11
12
-1
-2
-3
0
13
14
-4
15
```

## Exemplo de saída

Com os valores acima, o programa apresenta:

```text
Soma dos multiplos de 3: 42
Media dos numeros pares: 4.00
Quantidade de numeros positivos: 13
Quantidade de numeros negativos: 6
Maior valor: 15
Menor valor: -4

Elementos armazenados no vetor:
[0] = 1
[1] = 2
[2] = 3
[3] = 4
[4] = 5
[5] = 6
[6] = 7
[7] = 8
[8] = 9
[9] = 10
[10] = 11
[11] = 12
[12] = -1
[13] = -2
[14] = -3
[15] = 0
[16] = 13
[17] = 14
[18] = -4
[19] = 15
```

## Captura de tela

Para cumprir o requisito da atividade, execute o programa no computador e tire uma captura de tela mostrando:

1. A execução do programa;
2. Os 20 números digitados;
3. Os resultados apresentados;
4. A lista dos elementos do vetor.

Depois, coloque a imagem no repositório do GitHub. Uma sugestão é criar uma pasta chamada `screenshots` e adicionar nela o arquivo:

```text
screenshots/execucao.png
```

## Estrutura do repositório

```text
atividade-vetor-c/
├── atividade_vetor.c
├── README.md
└── screenshots/
    └── execucao.png
```
