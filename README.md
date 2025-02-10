# CS50
## Índice
- [Introdução](#introdução)
- [Módulo 0: Scratch](#módulo-0-scratch)
- [Módulo 1: C](#módulo-1-c)

  
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
  
