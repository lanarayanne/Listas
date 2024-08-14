/*2) (2 pontos) Faça um programa que receba 8 valores nas variáveis a1, a2, a3, ..., a8. Calcule sua média. 
Em seguida calcule os módulos dos desvios de cada um dos valores lidos, isto é desvio_1 = || a1 - Média||. 
Calcule a média dos 8 desvios calculados.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){
    
    float a1, a2, a3, a4, a5, a6, a7, a8, a9, soma=0, media;
    float desvio_1, desvio_2, desvio_3, desvio_4, desvio_5, desvio_6, desvio_7, desvio_8, soma_desvio=0, media_desvio;
    
    printf("Informe o valor:\na1:");
    scanf("%f", &a1);
    soma = soma+a1;
    printf("a2: ");
    scanf("%f", &a2);
    soma = soma+a2;
    printf("a3: ");
    scanf("%f", &a3);
    soma = soma+a3;
    printf("a4: ");
    scanf("%f", &a4);
    soma = soma+a4;
    printf("a5: ");
    scanf("%f", &a5);
    soma = soma+a5;
    printf("a6: ");
    scanf("%f", &a6);
    soma = soma+a6;
    printf("a7: ");
    scanf("%f", &a7);
    soma = soma+a7;
    printf("a8: ");
    scanf("%f", &a8);
    soma = soma+a8;
    
    media = soma/8;
    
    desvio_1 = fabs(a1-media);
    soma_desvio = soma_desvio + desvio_1;
    desvio_2 = fabs(a2-media);
    soma_desvio = soma_desvio + desvio_2;
    desvio_3 = fabs(a3-media);
    soma_desvio = soma_desvio + desvio_3;
    desvio_4 = fabs(a4-media);
    soma_desvio = soma_desvio + desvio_4;
    desvio_5 = fabs(a5-media);
    soma_desvio = soma_desvio + desvio_5;
    desvio_6 = fabs(a6-media);
    soma_desvio = soma_desvio + desvio_6;
    desvio_7 = fabs(a7-media);
    soma_desvio = soma_desvio + desvio_7;
    desvio_8 = fabs(a8-media);
    soma_desvio = soma_desvio + desvio_8;
    
    media_desvio=soma_desvio/8;
    
    printf ("\nMedia = %.2f\nMedia do desvio = %.2f", media, media_desvio);
    
    return 0;
}