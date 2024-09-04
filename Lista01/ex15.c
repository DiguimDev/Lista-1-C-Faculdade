#include <stdio.h>
int main(){
    int n,n1,n2,n3,n4,n5,n6,n7,n8;
    scanf("%d",&n);
    n1 = n%2;
    n2 = n/2%2;
    n3 = n/2/2%2;
    n4 = n/2/2/2%2;
    n5 = n/2/2/2/2%2;
    n6 = n/2/2/2/2/2%2;
    n7 = n/2/2/2/2/2/2%2;
    n8 = n/2/2/2/2/2/2/2%2;

    if(n < 0 || n > 255){
        printf("Numero invalido!\n");
    }else {
        printf("%d%d%d%d%d%d%d%d\n",n8,n7,n6,n5,n4,n3,n2,n1);
    }
    return 0;
}