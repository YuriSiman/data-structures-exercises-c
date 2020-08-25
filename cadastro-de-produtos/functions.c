#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"

void menu(){
    
   char opcao;
   int tamanho;
   produto *prod = NULL;
   
   do{
        printf("\n\n\nDigite uma opção:\n[A] - Criar Estrutura para Preenchimento"
                                      "\n[B] - Preencher Dados"
                                      "\n[C] - Exibir Produtos com Estoque Zerado"
                                      "\n[D] - Exibir Produtos em Estoque"
                                      "\n[E] - Finalizar Programa\n");
        scanf(" %c", &opcao);
        
        switch(toupper(opcao)){
            case 'A':
                printf("\n\nCriar Estrutura para Preenchimento");
                if(prod != NULL) free(prod);
                tamanho = totalProdutos();
                prod = (produto*) malloc (tamanho * sizeof(produto));
                printf("\n\nEstrutura Criada!");
                break;
            case 'B':
                printf("\n\nPreencher Dados");
                if(prod != NULL){
                    preencherDados(prod, tamanho);
                }else{
                    printf("\nEstrutura não criada!");
                }
                break;
            case 'C':
                printf("\n\nExibir Produtos com Estoque Zerado");
                if(prod != NULL){
                    produtosFaltandoNoEstoque(prod, tamanho);
                }else{
                    printf("\nEstrutura não criada!");
                }
                break;
            case 'D':
                printf("\n\nExibir Produtos em Estoque");
                if(prod != NULL){
                    listarProdutos(prod, tamanho);
                }else{
                    printf("\nEstrutura não criada!");
                }
                break;
            case 'E':
                printf("\n\nFinalizar Programa");
                break;
            default:
                printf("\n\nOpção Inválida");
                break;
        }
        
   }while(toupper(opcao) != 'E');
}

int totalProdutos(){
    int total;
    do{
        printf("\nInforme o total de produtos:");
        scanf("%d", &total);
            if(total <= 0) printf("\nQuantidade Inválida! Informe um número positivo!");
    }while(total <= 0);
        return total;
}

void preencherDados(produto *prod, int quantidade){
    for(int i = 0; i < quantidade; i++){
    cadastrarNomeProduto(prod, i);
    prod->codigo = RANDOMICO;
    cadastrarPrecoProduto(&prod->preco, i);
    cadastrarQuantidadeProduto(prod, i);
    prod++;
    }
}

void produtosFaltandoNoEstoque(produto *prod, int quantidade){
    printf("\nProdutos com Estoque Zerado");
    printf("\nCódigo\t\tNome\t\tPreço\t\tQuantidade");
    for(int i = 0; i < quantidade; i++){
        if(prod->quantidade == 0){
            printf("\n%d\t\t%s\t\t%.2f\t\t%d",
            prod->codigo, prod->nome, prod->preco, prod->quantidade);
        }
        prod++;
    }
}

void listarProdutos(produto *prod, int quantidade){
    printf("\nLista de Todos os Produtos Cadastrados");
    printf("\nCódigo\t\tNome\t\tPreço\t\tQuantidade");
    for(int i = 0; i < quantidade; i++){
        printf("\n%d\t\t%s\t\t%.2f\t\t%d",
        prod[i].codigo, prod[i].nome, prod[i].preco, prod[i].quantidade);
    }
}

void cadastrarNomeProduto(produto *prod, int i){
    do{
        printf("\nInforme o nome do %dº produto: ", (i+1));
        scanf("%s", &prod->nome);
            if(strlen(prod->nome) == 0) printf("\nNome Inválido!");
    }while(strlen(prod->nome) == 0);
    
}

void cadastrarPrecoProduto(float *valor, int i){
    do{
        printf("\nInforme o valor do %dº produto: ", (i+1));
        scanf("%f", valor);
            if(valor < 0) printf("\nValor Inválido!");
    }while(valor < 0);
}

void cadastrarQuantidadeProduto(produto *prod, int i){
    do{
        printf("\nInforme a quantidade do %dº produto: ", (i+1));
        scanf("%d", &prod->quantidade);
            if(prod->quantidade < 0) printf("\nQuantidade Inválida!");
    }while(prod->quantidade < 0);
}



