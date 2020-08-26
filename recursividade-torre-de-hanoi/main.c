#include <stdio.h>

void hanoi(int n, char origem, char destino, char auxiliar);

int main(){
    int n;
    printf("\nInforme a quantidade de discos: ");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    return 0;
}

void hanoi(int n, char origem, char destino, char auxiliar){
    if(n > 1)
        hanoi(n-1, origem, auxiliar, destino);
    
    printf("\nMover disco %d de %c para %c", n, origem, destino);
    
    if(n > 1)
        hanoi(n-1, auxiliar, destino, origem);
}