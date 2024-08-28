/*1)  (2,0 pontos) Escreva um programa que leia as 
coordenadas x e y de dois pontos distintos (P1 e P2) 
no R² e calcule a distância entre eles.  .*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float p1x, p1y, p2x, p2y;
    float soma_dos_quadrados, distancia;
    
    printf("Informe as coordenadas do ponto P1");
    printf("\nX: ");
    scanf("%f", &p1x);
    printf("Y: ");
    scanf("%f", &p1y);
    printf("\nInforme as coordenadas do ponto P2");
    printf("\nX: ");
    scanf("%f", &p2x);
    printf("Y: ");
    scanf("%f", &p2y);
    
    soma_dos_quadrados = pow((p1x - p2x),2) + pow((p1y - p2y),2);
    distancia = sqrt(soma_dos_quadrados);
    
    printf("\nDistância entre os pontos P1 (%.2f, %.2f) e P2 (%.2f, %.2f) = %.2f", p1x, p1y, p2x, p2y, distancia);

    return 0;
}