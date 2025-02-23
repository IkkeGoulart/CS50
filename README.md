# CS50
## Índice
- [Introdução](#introdução)
- [Módulo 0: Scratch](#módulo-0-scratch)
- [Módulo 1: C](#módulo-1-c)
- [Módulo 2: Arrays](#módulo-2-arrays)
- [Módulo 3: Algoritmos](#módulo-3-algoritmos)
- [Módulo 4: Memória](#módulo-4-memória)
- [Módulo 5: Estrutura de Dados](#módulo-5-estrutura-de-dados)

  
## Introdução
<p align="justify">Este repositório foi criado para armazenar os códigos escritos durante as aulas do curso CS50, servindo como uma forma de documentar meu progresso ao longo do curso.</p>
<p align="justify">A versão que utilizei é o CC50, curso traduzido do CS50 2021 pela Fundação Estudar. O CC50 pode ser acessado pelo seguinte link: https://ead.estudar.org.br/c/cc50-o-curso-de-ciencia-da-computacao-de-harvard-no-brasil.</p>
<p align="justify">Desta forma, espero poder ajudar outros alunos com minhas soluções.</p>

## Módulo 0: Scratch
<p align="justify">O primeiro módulo do curso é uma introdução generalista. Nele, são abordados a linguagem binária - a forma em que o computador - e o início da construção de um algoritmo utilizando a plataforma Scratch, criada pelo MIT para ser um primeiro contato lúdico à programação.</p>
<p align="justify">O Scratch é uma plataforma on-line que pode ser acessada através do seguinte link: https://scratch.mit.edu/.</p>

## Módulo 1: C
<p align="justify">O segundo módulo do curso introduz sobre as linguagens de programação utilizando como base C. Os algoritmos produzidos nessas linguagens não são compreendidos pelos computadores. Desta forma, é necessário a utilização de um compilador, um tradutor de uma determinada linguagem para um arquivo em binário. Um código de programação é composto pelos seguintes elementos: </p>

### Tipagem
<p align="justify">A tipagem em linguagens de programação define os tipos de dados que podem ser armazenados e manipulados em variáveis. Os principais tipos de dados incluem:</p>
<table>
        <tr>
            <th>Tipo</th>
            <th>Descrição</th>
            <th>Exemplo</th>
        </tr>
        <tr>
            <td>int / long</td>
            <td>Números inteiros</td>
            <td>10, -5, 42</td>
        </tr>
        <tr>
            <td>float / double</td>
            <td>Números com ponto decimal</td>
            <td>3.14, -0.99, 2.718</td>
        </tr>
        <tr>
            <td>string</td>
            <td>Texto ou cadeia de caracteres</td>
            <td>"Olá, mundo!"</td>
        </tr>
            <td>char</td>
            <td>Um caracter</td>
            <td>'c'</td>
        <tr>
            <td>bool</td>
            <td>Valores lógicos (verdadeiro ou falso)</td>
            <td>true, false</td>
        </tr>
    </table>
    
### Função 
<p align="justify">Mini-Programas responsáveis por fazer algo no programa. Algumas funções podem aceitar dados, sendo esses chamados de argumentos da função. Além disso, elas podem retornar valores para o programa principal ou ter "efeitos secundários", como imprimir algo no terminal.</p>

```c
    int somar(int a, int b) {
      return a + b;
    }
```

### Condicionais
<p align="justify">As condicionais permitem que o programa tome decisões com base em expressões booleanas. As estruturas mais comuns são o if e else.</p>

```c
    if (idade >= 18) {
      printf("Maior de idade");
    } else {
      printf("Menor de idade");
    }
```

### Loops
<p align="justify"> Os loops permitem que um bloco de código seja executado repetidamente enquanto uma condição for verdadeira. Os principais tipos são:</p>

- for -> contagem explícita

```c
    for(int i = 0; i < 10; i++){
        printf("%i ovelhas", i);
      }
```

- while -> Executa se a condição for verdadeira.
```c
    int i = 0;
    while(i < 5) {
      printf("%i\n", i);
      i++;
    }
```

- do while -> Semelhante ao while, mas garante uma execução.
```c
    int i = 1;
    do{
      printf(%i, ovelhas", i);
    }
    while(i < 5);
```
## Módulo 2: Arrays
<p align = "justify">O terceiro módulo deste curso aborda sobre: estrutura de dados array; características do tipo char; argumentos da linha de comando; compilação.</p>

### Array
<p align = "justify">Os arrays são listas que armazenam múltiplos valores de um mesmo tipo na memória. Os valores contidos nos arrays são acessados a partir de índices, começando no índice 0.</p>

```c
  //Inicializando com o array preenchido
  int num[4] = {1, -42, 37, 109};

  //Inicializando vazio e adicionando elementos posteriormente
  int num[4];
  num[0] = 1;
  num[1] = -42;
  num[2] = 37;
  num[3] = 109;
```

<p align = "justify">Os arrays possuem um <strong>tamanho fixo</strong> definido na sua declaração. Cada elemento do array pode ser acessado usando seu índice correspondente.</p>
<p align = "justify">Os arrays são comumente utilizados em conjunto de laços de repetição com objetivo de realizar operações de busca, modificação e exibição.</p>

```c
  int nums[5];

  for(int i = 0; i < 5; i++;){
    printf("%i", nums[i]);
  } 
```

<p align = "justify">Em C, strings são implementadas como arrays do tipo char, cujo último elemento é o caractere nulo '\0'. Essa característica é essencial para a manipulação de strings, pois permite que funções identifiquem onde a string termina. Embora os arrays precisem ser inicializados com um tamanho pré-determinado, essa informação não é armazenada dentro do próprio array. Para lidar com esse problema, a função strlen(s), da biblioteca string.h, fornece um método para contar os caracteres da string, desconsiderando o caractere '\0'.</p>

### Trabalhando com char
<p align = "justify">Como explicando anteriormente, char é um tipo de dado capaz de armazenar um único caracter, limitando pelas aspas simples. O interessante desse tipo de dados é sua dicotomia com tipo inteiro através da tabela ASCII. Internamente, cada caracter é representado por seu código ASCII correspondente.
<br><br>
Por exemplo, o caracter 'A' apresenta o valor decimal 65, quanto o valor 'a' possui o valor 97. Com isso, é possível criar algoritmos que se baseiam em operações aritméticas com caracteres.</p>

```c
#include <stdio.h>

int main() {
    char letra = 'a';
    char maiuscula = letra - 32; // Convertendo para maiúscula

    printf("Letra minúscula: %c\n", letra);  // Saída: a
    printf("Letra maiúscula: %c\n", maiuscula); // Saída: A

}
```


### Argumentos na Linha de Comando

### Como funciona o compilador da linguagem C?

## Módulo 3: Algoritmos

### Notação Big(O)

### Algoritmos de Pesquisa

#### Pesquisa Linear

#### Pesquisa Binária

### Structs

### Algoritmos de Ordenação

### Complexidade dos Algoritmos de Ordenação e Pesquisa

## Módulo 4: Memória

### Base Hexadecimal / Base 16

### Operadores & e *

### Ponteiros

### funções malloc e free

## Módulo 5: Estrutura de Dados
  
