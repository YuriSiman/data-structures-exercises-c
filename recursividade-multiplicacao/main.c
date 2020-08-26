#include <stdio.h>

int multiplicacao(int a, int b);

int main(){
    int a, b;
    printf("\nDigite o primeiro número: ");
    scanf("%d", &a);
    printf("\nDigite o segundo número: ");
    scanf("%d", &b);
    printf("\n%d x %d = %d", a, b, multiplicacao(a, b));
    return 0;
}

int multiplicacao(int a, int b){
    if(a == 0 || b == 0) return 0;
    if(a == 1) return b;
    if(b == 1) return a;
    return a + multiplicacao(a, b-1);
}
