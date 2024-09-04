#include <stdio.h>

int main(){
    double newCar, fabCar, impostCar, impostFabCar;
    scanf("%lf%lf%lf", &fabCar, &impostFabCar, &impostCar);

    newCar = fabCar + (fabCar * (impostFabCar / 100)) + (fabCar * (impostCar /100));

    printf("O VALOR DO CARRO E = %.2lf\n",newCar);
    return 0;
}