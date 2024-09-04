#include <stdio.h>
int main(){
    double ma, av, ta, v, e, t;
    scanf("%lf%lf%lf",&ma,&av,&ta);

    v = (av * ta);
    e = (av * (ta * ta))/2;
    t = ((ma * 1000) * (v * v))/2;

    printf("VELOCIDADE = %.2lf\n",v*3.6);
    printf("ESPACO PERCORRIDO = %.2lf\n",e);
    printf("TRABALHO REALIZADO = %.2lf\n",t);
    return 0;

}