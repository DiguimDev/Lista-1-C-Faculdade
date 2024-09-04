#include <stdio.h>
int main(){
    float numero1, arredondamento1;
    int arredondamento;
    scanf("%f",&numero1);
        
        arredondamento1 = numero1*10 + 0.5;
        arredondamento = arredondamento1;
        arredondamento1 = arredondamento;
        printf("%f\n", arredondamento1 / 10);
        
        arredondamento1 = numero1*100 + 0.5;
        arredondamento = arredondamento1;
        arredondamento1 = arredondamento;
        printf("%f\n", arredondamento1 / 100);

        arredondamento1 = numero1*1000 + 0.5;
        arredondamento = arredondamento1;
        arredondamento1 = arredondamento;
        printf("%f\n", arredondamento1 / 1000);

    return 0;
}