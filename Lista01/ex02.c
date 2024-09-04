#include <stdio.h>
int main(){
    double vFarenheit, vPolegadas;
    double conversaoCelso,conversaoMilimetro;
    scanf("%lf%lf",&vFarenheit,&vPolegadas);

    conversaoCelso = (5 * (vFarenheit -32))/9;
    conversaoMilimetro = vPolegadas * 25.4;

    printf("O VALOR EM CELSIUS = %.2lf\n", conversaoCelso);
    printf("A QUANTIDADE DE CHUVA E = %.2lf\n", conversaoMilimetro);
    return 0;
}