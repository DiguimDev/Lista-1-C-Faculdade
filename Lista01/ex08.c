#include <stdio.h>
int main(){
    int horas, minutos, segundos, segundosTotais;
    scanf("%d%d%d",&horas,&minutos,&segundos);
    segundosTotais = (horas * 3600) + (minutos * 60) + segundos;
    printf("O TEMPO EM SEGUNDOS E = %d\n",segundosTotais);
    return 0;
}