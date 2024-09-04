#include <stdio.h>
int main(){
    double salario,kw;
    double valorKw;

    scanf("%lf%lf",&salario,&kw);
    
    valorKw = salario * 0.7/100;

    printf("Custo por kW: R$ %.2lf\n", valorKw);
    printf("Custo do consumo: R$ %.2lf\n", valorKw * kw);
    printf("Custo com desconto: R$ %.2lf\n",valorKw * kw *0.9);

    return 0;
}