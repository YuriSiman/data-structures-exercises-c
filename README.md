# c-projects

###### Aplicações de console em C para fins didáticos exercendo lógica de programação, manipulação de string, ponteiros, alocação dinâmica, declaração de novos tipos, diretivas de compilação, recursividade e listas lineares

## Projetos

[sequencias-matematica](https://github.com/YuriSiman/c-projects#sequencias-matematica)  
[manipulacao-de-string](https://github.com/YuriSiman/c-projects#manipulacao-de-string)  
[alocacao-dinamica](https://github.com/YuriSiman/c-projects#alocacao-dinamica)  
[passagem-de-parametro-por-referencia](https://github.com/YuriSiman/c-projects#passagem-de-parametro-por-referencia)  
[declaracao-de-novos-tipos](https://github.com/YuriSiman/c-projects#declaracao-de-novos-tipos)  

## sequencias-matematica
[Início](https://github.com/YuriSiman/c-projects#c-projects)  

Menu para calcular três sequências matemáticas enquanto o usuário permitir, o programa deverá ficar em loop eterno e ser finalizado pelo usuário quando o mesmo decidir finalizar, segue exemplo a seguir:

```
Opção A

1+0/1 
2+1/4
3+2/9
4+3/16
...

Opção B

1/1
8/10
27/100
64/1000
...

Opção C

1/3x2
2/3x4
3/3x6
4/3x8
...

Opção D

Finalizar o programa
```

A **opção A** será desenvolvida utilizando o comando **while**  
A **opção B** será desenvolvida utilizando o comando **do while**  
A **opção C** será desenvolvida utilizando o comando **for**  

## manipulacao-de-string
[Início](https://github.com/YuriSiman/c-projects#c-projects)  

Atividade para manipulação de string **com** e **sem** a utilização da biblioteca **string.h**

* O usuário deverá digitar duas strings

* Acrescentar a segunda string na primeira, formando uma única, e separando-as por espaço

```
Exemplo:

String 1 - Estrutura
String 2 - de Dados

Resultado String 1 - Estrutura de Dados
```

* Exibir as strings em ordem alfabética

* Substituir a segunda string com o valor da primeira

```
Exemplo:

String 1 - Estrutura de Dados 
String 2 - de Dados

Resultado String 2 - Estrutura de Dados
```

* O usuário deverá digitar um caracter, se o caracter existir na string 1, substitua-o por asterisco `*`

```
Exemplo:

Caracter - a
String 1 - Estrutura de Dados 

Resultado String 1 - Estrutur* de D*dos
```

* Exibir o tamanho da string 1

* Exibir o tamanho da string 2 **sem** utilizar nenhuma função da biblioteca **string.h**

* Copiar o valor da string 2 na string 1 **sem** utilizar nenhuma função da biblioteca **string.h**

## alocacao-dinamica
[Início](https://github.com/YuriSiman/c-projects#c-projects)  

Programa para alocar espaço de memória na Heap, o usuário deverá informar um tamanho inteiro e positivo para um vetor. O mesmo vetor deverá ser criado **dinamicamente**. Após a criação do vetor, o usuário deverá preencher todas as posições com valores inteiros e positivos. As posições devem ser alteradas conforme os seguintes itens abaixo:

* Para as posições pares do vetor: calcule o dobro do valor digitado

* Para as posições ímpares do vetor: calcule a metade do valor digitado

* Exibir o vetor criado, com seus valores calculados e alterados

* Exibir a soma dos itens

* Liberar o espaço de memória utilizado

## passagem-de-parametro-por-referencia
[Início](https://github.com/YuriSiman/c-projects#c-projects)  

Programa que implementa as práticas de passagem de parâmetro por valor, passagem de parâmetro por referência e passagem de vetores por parâmetro com aritmética de ponteiro. Construa um menu para o usuário escolher entre as opções A, B ou C, o programa deverá ficar em loop eterno e ser finalizado pelo usuário quando o mesmo decidir finalizar. Será criado um vetor para armazenar salários.

Mas antes, uma manipulação de strings:

* Copiar a palavra "Estrutura" presente numa variável de **origem** para uma variável de **destino** que esteja vazia, **sem** utilizar nenhuma função da biblioteca **string.h**

```
Exemplo:

Opação A - Minha Strcpy

Origem - Estrutura
Destino - 

Resultado Destino - Estrutura 
```

Criando o vetor para armazenar os salários:

* Função que recebe, **via parâmetro**, um vetor do tipo real e seu tamanho do tipo inteiro. O vetor deve ser criado **dinamicamente** e seu tamanho deve ser definido pelo usuário. 

* Criar uma função para validar o tamanho do vetor que será informado pelo usuário, o tamanho precisa ser um número **inteiro maior do que zero**

* Cada posição do vetor deve ser preenchida com um valor positivo, referente ao salário, utilizando **aritmética de ponteiros**

* Criar uma função para validar os salários que serão informados pelo usuário, a digitação deve ser de um número **real maior do que zero**. A função deverá retornar o número validado via **parâmetro por referência**

* Após preencher o valor do salário, o mesmo deve ser calculado conforme a tabela abaixo:

Salário | % de aumento
------------ | -------------
Se salário <= R$ 1.500,00 | 15% de aumento
R$ 1.500,00 > salário <= R$ 5.000,00 | 10% de aumento
salário > R$ 5.000,00 | Não haverá aumento

* Exibir vetor utilizando **aritmética de ponteiros**

```
Opção C

Finalizar o programa
```

## declaracao-de-novos-tipos
[Início](https://github.com/YuriSiman/c-projects#c-projects)  

Projeto para executar o cálculo da sequência de Fibonacci e o cálculo do fatorial de um número. 

**Importante**

Fatorial | Sequência de Fibonacci
------------ | -------------
Corresponde ao produto dos números inteiros positivos consecutivos de um número natural **n** maiores ou iguais a **n** | Corresponde a uma sequência de números inteiros, começando por 0 e 1, e cada termo subsequente equivale à soma dos dois anteriores
Para a representação utiliza-se a notação do fatorial de um número n é n!. Onde n é um número natural, portanto, o fatorial de n é definido por: **0! = 1** n! = n . (n – 1).(n – 2) . . . 3 . 2 . 1 | **Fn = Fn−1 + Fn−2**  Onde os valores iniciais são: F1 = 0 e F2 = 1

Sabendo disto, a execução do programa deverá seguir conforme as etapas:

* Criar os tipos conforme descrição a seguir, e para todos eles, deve ser aplicado typedef para novos tipos 

  * **Enum** para definir a escolha do menu, o usuário poderá escolher entre as opções para calcular a Sequência Fibonacci ou calcular o Fatorial de um número
  
```
Atenção - Se o cliente digitar 1 indica que ele quer calcular uma Sequência de Fibonacci, se digitar 2 indica que ele quer calcular o Fatorial de um número  

fibonacci = 1
fatorial = 2
```

  * **Union** para receber a escolha da execução (se fatorial ou fibonacci) e outro campo para receber a quantidade de execuções que serão realizadas
  
```
Atenção - Primeiro o cliente definirá se deseja calcular fibonacci ou fatorial (utilizar enum anterior), depois ele deverá informar o número de termos, se for fibonacci ou, caso seja selecionado fatorial, o número que será calculado

menu - int
numero - int
```

  * **Struct** para armazenar os campos do cálculo
  
```
Atenção - Primeiro o cliente definirá se deseja calcular fibonacci ou fatorial (utilizar enum anterior), depois ele deverá informar o número de termos, se for fibonacci ou, caso seja selecionado fatorial, o número que será calculado

resultado - int
termo - int
```

* Criar um menu para exibir as seguintes opções:

```
Menu

1 - Calcular Sequência de Fibonacci
2 - Calcular o Fatorial de um Número
3 - Finalizar
```

* Após a escolha de um tipo de cálculo do usuário, o valor deverá ser retornado para ser preenchido no Union

* Criar uma função que receba um número inteiro, positivo. Retorne-o, validado, via parâmetro por referência, para o campo numero da Union

```
Atenção 

Fibonacci - Para calcular a Sequência de Fibonacci, deve-se aceitar apenas valores positivos
Fatorial - Para calcular o Fatorial, deve-se aceitar valores positivos ou nulos
```

* Criar uma função que receba o número de termos e calcule a sequência de Fibonacci. Considerando a explicação anterior, e utilizando a Struct, que será passada via parâmetro, para preenchimento

* Criar uma função que receba o número de termos e calcule o Fatorial deste número. Considerando a explicação anterior, e utilizando a Struct, que será passada via parâmetro, para preenchimento






