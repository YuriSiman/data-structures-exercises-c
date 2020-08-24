#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "library.h"

void menu(){
    char opcao, origem[20] = "Estrutura", destino[20] = "";
    int tamanho;

    do{
        printf("\n\n\nDigite uma opção: \n\n[A] - Minha Strcpy\n[B] - Criando o vetor\n\n[C] - Finalizar Programa:\n");
        scanf(" %c", &opcao);
        
        switch(toupper(opcao)){
            case 'A':
                printf("\nPalavra 'Estrutura'\n\nAntes da cópia\nOrigem: %s\nDestino: %s", origem, destino);
                minhaStrcpy(destino, origem);
                printf("\n\nDepois da cópia\nOrigem: %s\nDestino: %s", origem, destino);
                break;
            case 'B':
                tamanho = validaNumeroInteiro();
                double *vetorSalario = (double*) malloc(tamanho*(sizeof(double)));
                printf("\nMédia dos Salários: R$ %.2lf", preencherVetor(vetorSalario, tamanho));
                exibeVetor(vetorSalario, tamanho);
                break;
            case 'C':
                printf("\nPrograma Finalizado");
                break;
            default:
                printf("\nOpção Inválida!");
                break;
        }
        
    }while(toupper(opcao) != 'C');
}

int validaNumeroInteiro(){
    int numero;
    
    do{
        printf("\nDigite um número inteiro positivo para definir o tamanho do vetor:");
        scanf("%d", &numero);
        if(numero <= 0) printf("\nNúmero inválido!");
    }while(numero <= 0);
    
    return numero;
}

double validaNumeroReal(double *numero){
    do{
        printf("\nDigite um número real positivo para preencher o salário:");
        scanf("%lf", numero);
        if(*numero <= 0) printf("\nNúmero inválido!");
    }while(*numero <= 0);
}

void minhaStrcpy(char *destino, char *origem){
    for(; *origem != '\0';){
        *destino = *origem;
        destino++;
        origem++;
    }
    *destino = '\0';
}

double calcularSalario(double salario){
    if(salario <= 1500) return salario*1.15;
    if(salario <= 5000) return salario*1.1;
    return salario;
}

double preencherVetor(double *vetor, int tamanho){
    double soma;
    for(int i = 0; i < tamanho; i++){
        validaNumeroReal(vetor);
        *vetor = calcularSalario(*vetor);
        soma += *vetor;
        vetor++;
    }
    return soma/tamanho;
}

void exibeVetor(double *vetor, int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("\n%dª posição - Valor: R$ %.2lf", (i+1), *vetor);
        vetor++;
    }
}