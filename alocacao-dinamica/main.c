#include <stdio.h>
#include <stdlib.h>

void validaValor(int valor);

int main()
{
    int tamanho, soma = 0, *vet;
    
    do{
        printf("\nInforme o tamanho do vetor: ");
        scanf("%d", &tamanho);
        validaValor(tamanho);
    }while(tamanho <= 0);
    
    vet = (int*) malloc(tamanho*sizeof(int));
    
    for(int i = 0; i < tamanho; i++){
        do{
            printf("\nDigite o valor da %dª posição do vetor:", (i+1));
            scanf("%d", vet);
            validaValor(*vet);
        }while(*vet <= 0);
        (i % 2 == 0) ? (*vet *= 2) : (*vet /= 2); 
        vet++;
    }
    
    vet -= tamanho;
    
    for(int i = 0; i < tamanho; i++){
        printf("\n%dª posição: %d", (i+1), *vet);
        soma += *vet;
        vet++;
    }
    
    printf("\nSoma dos itens: %d", soma);
    vet -= tamanho;
    free(vet);
    
    return 0;
}

void validaValor(int valor){
    valor <= 0 ? printf("\nValor inválido!") : valor;
}

