#include <stdio.h>
int main(){
    int numero1, numero2;
    double soma, resultado;
    scanf("%d%d",&numero1, &numero2);
    soma = numero1 + numero2;;
    resultado = soma/2;
    printf("%.3lf\n", resultado);
    return 0;
}