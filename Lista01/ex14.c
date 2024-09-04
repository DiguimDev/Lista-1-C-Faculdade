#include <stdio.h>
int main(){
    int x,n,x1,x2,x3;
    scanf("%d",&x);
    x1 = x/100;
    x2 = x%100/10;
    x3 = x%100%10;
    n = (x1 + x2*3 + x3*5)%7;
    x = x*10 + n;
    printf("O NOVO NUMERO E = %d\n",x);
    return 0;
}