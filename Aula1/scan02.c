#include <stdio.h>

int main(){
    double n1,n2;

    printf("Digite sua idade");
    
    scanf("%lf",&n1);
    
    n2 = 18 - n1;

    if(n2<=0){
        printf("Você é maior de idade\n");
    } else {
        printf("Você é menor de idade\n");
    }

    return 0;
}