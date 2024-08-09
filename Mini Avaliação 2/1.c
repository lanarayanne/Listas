/* Receba do usuário um valor em Real e retorne o valor em Dólar. Use a taxa comercial do dia.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*declaracao variaveis*/
    float dolar= 5.03;
    printf ("A cotacao do dolar dia 19/03/2024 eh %.2f \n", dolar);
    float real;
    printf("Inserir valor em reais: ");
    /*entrada de dados*/
    scanf("%f", &real);
    /*processamento*/
    float conversao = real/dolar;
    /*saida de dados*/
    printf("%.2f reais eh igual a %.2f dolares", real, conversao);
    return 0;
}
