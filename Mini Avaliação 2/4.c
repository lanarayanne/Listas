/* Receba do usuário um valor para o raio de uma circunferência e calcule sua área.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*declarar variavel*/
    float raio;
    /*valor de pi*/
    float pi = M_PI;
    printf ("pi eh igual a %.2f \n" , pi);
    printf("Inserir valor do raio do círculo: ");
    /*entrada de dados*/
    scanf("%f", &raio); 
    float area= pi*(raio*raio);
    /*saida de dados*/
    printf("A area do circulo eh igual a %.2f", area);
    return 0;
}
