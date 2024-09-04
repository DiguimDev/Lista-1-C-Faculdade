#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
        printf("NOTAS DE 100 = %d\n",n/100);
        printf("NOTAS DE 50 = %d\n",n%100/50);
        printf("NOTAS DE 10 = %d\n",n%100%50/10);
        printf("MOEDAS DE 1 = %d\n",n%100%50%10/1); 
    return 0;
}