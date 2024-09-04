#include <stdio.h>
#include <math.h>

int main(){
    double lado1, lado2, lado3, T, areaTriangulo;
    scanf("%lf%lf%lf",&lado1,&lado2,&lado3);
    T = (lado1 + lado2 + lado3)/2;
    areaTriangulo = sqrt(T*(T-lado1)*(T-lado2)*(T-lado3));
    printf("A AREA DO TRIANGULO E = %.2lf\n", areaTriangulo);

    return 0;
}