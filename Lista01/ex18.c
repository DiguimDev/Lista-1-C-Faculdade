#include<stdio.h>
int main (){
    int a,b,c,d,e,f;
    double x,y,conta1,conta2,conta3;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    conta1 = a*e - b*d;
    conta2 = c*e -b*f;
    conta3 = a*f - c*d;

    x = conta2/conta1;
    y = conta3/conta1;
    printf("O VALOR DE X E = %.2lf\n",x);
    printf("O VALOR DE Y E = %.2lf\n",y);
    
    return 0;
}