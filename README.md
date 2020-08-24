# c-projects

###### Aplicações de console em C para fins didáticos exercendo lógica de programação, manipulação de string, ponteiros, alocação dinâmica, declaração de novos tipos, diretivas de compilação, recursividade e listas lineares

## sequencias-matematica

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

Programa para alocar espaço de memória na Heap, o usuário deverá informar um tamanho inteiro e positivo para um vetor. O mesmo vetor deverá ser criado **dinamicamente**. Após a criação do vetor, o usuário deverá preencher todas as posições com valores inteiros e positivos. As posições devem ser alteradas conforme os seguintes itens abaixo:

* Para as posições pares do vetor: calcule o dobro do valor digitado

* Para as posições ímpares do vetor: calcule a metade do valor digitado

* Exibir o vetor criado, com seus valores calculados e alterados

* Exibir a soma dos itens

* Liberar o espaço de memória utilizado

## passagem-de-parametro-por-referencia

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










