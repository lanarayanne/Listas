/*4) (4 pontos) Faça uma função que receba como parâmetro as coordenadas de 2 pontos no plano e calcule a distância 
euclidiana bidimensional. Exemplo: P = (px:py) e Q = (qx:qy). Crie a função main para testes*/

//raiz (px-qx)^2 + (py-qy)^2 --- float

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float distancia_euclidiana_bidimensional (float px, float py, float qx, float qy){
    float quad_dif_x, quad_dif_y, soma_dos_quadrados, raiz;
    
    quad_dif_x = pow((px-qx), 2);
    quad_dif_y = pow((py-qy), 2);
    soma_dos_quadrados = quad_dif_x+quad_dif_y;
    raiz=sqrt(soma_dos_quadrados);
    
    return raiz;
}

int main(){
    
    float px, py, qx, qy, distancia;
    
    printf("Informe as coordenadas do primeiro ponto:\n");
    printf("x: ");
    scanf("%f", &px);
    printf("y: ");
    scanf("%f", &py);
    printf("Informe as coordenadas do segundo ponto:\n");
    printf("x: ");
    scanf("%f", &qx);
    printf("y: ");
    scanf("%f", &qy);
    
    distancia = distancia_euclidiana_bidimensional (px, py, qx, qy);
    printf("\nDistancia euclidiana bidimensional entre P1(%.2f,%.2f) e P2(%.2f,%.2f) = %.2f", px,py,qx,qy, distancia);
    
    return 0;
}