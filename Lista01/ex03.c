#include <stdio.h>
int main(){
    float raio, altura;
    float area, pi, valorMetroQuadrado,resultado;
    scanf("%f%f", &raio,&altura);
    
    valorMetroQuadrado = 100;
    pi = 3.14159;
    area = 2.0*(pi*raio*raio)+(2*pi*raio*altura);
    resultado = area * valorMetroQuadrado;

    printf("O VALOR DO CUSTO E = %.2f\n", resultado);

    return 0;
}