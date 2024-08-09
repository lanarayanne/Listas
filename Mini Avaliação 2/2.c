/* Receba do usuário a temperatura em graus Celsius e retorne em Graus Kelvin.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*declaracao variaveis*/
    float celsius;
    printf ("Inserir valor de temperatura em graus Celsius: ");
    /*entrada de dados*/
    scanf ("%f", &celsius );
    float kelvin= celsius+273.15;
    /*saida de dados*/
    printf("A temperatura em Kelvin eh %.2f ", kelvin );
    return 0;
}
