#include <stdio.h>

double potencia(double x, int n);

int main(){
    
    printf("\n%g", potencia(2, -7));
    
    return 0;
}

double potencia(double x, int n){
    if(n == 0) return 1.0;
    if(n < 0) return 1.0/potencia(x, -n);
    if(n % 2 == 1) return x * potencia(x, n-1);
    double d = potencia(x, n/2);
    return d * d;
}
