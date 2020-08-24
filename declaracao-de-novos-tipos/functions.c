#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "library.h"

void menu(){
    escolha resultado;
    execucao valores;
    
    do{
        printf("\n\nDigite uma opção:\n[1] - Calcular Sequência de Fibonacci\n[2] - Calcular Fatorial\n\n[3] - Finalizar Programa\n");
        scanf("%d", &resultado.menu);
        switch(resultado.menu){
            case fibonacci:
                printf("\nSequência de Fibonacci");
                validaInteiro(&resultado);
                valores.termo = resultado.numero;
                calcularFibonacci(&valores);
                printf("\nO %dº termo de Fibonacci é %d", valores.termo, valores.resultado);
                break;
            case fatorial:
                printf("\nFatorial\n");
                validaInteiro(&resultado);
                valores.termo = resultado.numero;
                calcularFatorial(&valores);
                printf("\nO %d! = %d", valores.termo, valores.resultado);
                break;
            case sair:
                printf("\nPrograma Finalizado!");
                break;
            default:
                printf("\nOpção Inválida!");
                break;
        }
        
    }while(resultado.menu != sair);
}

int validaInteiro(escolha *num){
    int limiteInferior = (num->numero == 1) ? 1 : 0;
    
    do{
        printf("\nDigite um número inteiro:\n");
        scanf("%d\n", &num->numero); 
            if(num->numero < limiteInferior) printf("\nNúmero Inválido!");
    }while(num->numero < limiteInferior);
}

void calcularFibonacci(execucao *valor){
    int penultimo = 0, ultimo = 1;
        
    if (valor->termo <= 2) {
        valor->resultado = valor->termo - 1;
        printf("\n%d", valor->resultado);
    }else {
        valor->resultado = 1;
        printf("\n0, 1, 1");
        for (int i = 3; i < valor->termo; i++) {
            printf(", ");
            penultimo = ultimo;
            ultimo = valor->resultado;
            valor->resultado = penultimo + ultimo;
            printf("%d", valor->resultado);
        }
    }
}

void calcularFatorial(execucao *valor){
    int cont = valor->termo;
    valor->resultado = 1;
    for(int i = 2; i <= valor->termo; i++) {
        valor->resultado *= i;
        printf("%d x ", cont);
        cont--;
    }
        printf("1");
}













