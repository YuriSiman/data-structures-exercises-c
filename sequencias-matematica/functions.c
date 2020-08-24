#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include "library.h"

void menu(){
    char opcao;
    
    do{
        printf("\nDigite uma opção: [A] - [B] - [C]\n[D - Finalizar Programa]:\n");
        scanf(" %c", &opcao);
        
        switch(toupper(opcao)){
            case 'A':
                opcaoA();
                break;
            case 'B':
                opcaoB();
                break;
            case 'C':
                opcaoC();
                break;
            case 'D':
                printf("\nPrograma Finalizado!");
                break;
            default:
                printf("\nOpção Inválida!");
                break;
        }
    }while(toupper(opcao) != 'D');
}

void opcaoA(){
    int a = 1, b = 0, c = 1;
    char sair;

    while(1){
        printf("\n%i + %i / %i\n", a, b, c);
        printf("\nDeseja continuar? [S] - [N]");
        scanf(" %c", &sair);
        if(toupper(sair) == 'N') break;
        a++;
        b++;
        c += (a+b);
    }
}

void opcaoB(){
    int a = 1, b = 1, aux = 1;
    char sair;
    
    do{
        printf("\n%i / %i", aux, b);
        printf("\nDeseja continuar? [S] - [N]");
        scanf(" %c", &sair);
        if(toupper(sair) == 'N') break;
        a++;
        aux = pow(a, 3);
        b *= 10;
    }while(1);
}

void opcaoC(){
    int a = 1, b = 3, c = 2;
    char sair;
    
    for( ; ; ){
        printf("\n%i / %i x %i", a, b, c);
        printf("\nDeseja continuar? [S] - [N]");
        scanf(" %c", &sair);
        if(toupper(sair) == 'N') break;
        a++;
        c += 2;
    }
}