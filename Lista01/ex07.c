#include <stdio.h>
int main(){
    double alturaPiramide, arestaHexagono,areaBase,volume;
    scanf("%lf%lf",&alturaPiramide,&arestaHexagono);
    
    areaBase = 3* (arestaHexagono * arestaHexagono) * 1.73205081/2;
    volume =  (areaBase * alturaPiramide)/3;

    printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n",volume);
    return 0;
}   