#include <stdio.h>
int main(){
    int x,n,x1,x2,x3;
    scanf("%d",&x);
    x1 = x/100;
    x2 = x%100/10;
    x3 = x%100%10;
    n = 1000 + (x3 * 100) + (x2*10) + x1;
    printf("%d\n",n-1000);
    return 0;
}