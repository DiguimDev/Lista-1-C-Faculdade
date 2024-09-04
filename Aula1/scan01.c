#include <stdio.h>

int main(){
    double n1,n2;

    printf("Digite o Valor da Primeira Nota");
    
    scanf("%lf",&n1);
    
    n2 = 120.0 - n1;

    printf("Falta para você %.2lf\n", n2);

    return 0;
}