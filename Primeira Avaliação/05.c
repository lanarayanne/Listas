/*5) (2,0) Implemente uma função (com uma respectiva função main para teste), 
com a seguinte característica (protótipo ou assinatura).

float areaQuadrado (float lado);*/

#include <stdio.h>
#include <stdlib.h>

float areaQuadrado (float lado)
{
    float area = lado*lado;
    return area;
    
}

int main() {
    
    float lado_quadrado;
    
    printf("Informe o tamanho do lado do quadrado (cm): ");
    scanf("%f", &lado_quadrado);
    
    printf("Area do quadrado de lado %.2f cm = %.2f cm2", lado_quadrado, areaQuadrado(lado_quadrado));
    
    return 0;
}

