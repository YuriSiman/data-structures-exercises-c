#include <stdio.h>

int mdc(int a, int b);

int main()
{
   int a, b;
   
   printf("\nDigite o valor de a: ");
   scanf("%d", &a);
   printf("\nDigite o valor de b: ");
   scanf("%d", &b);
   
   printf("\nO MDC entre %d e %d é %d", a, b, mdc(a, b));
    return 0;
}

int mdc(int a, int b){
    return b == 0 ? a : mdc(b, a % b);
}