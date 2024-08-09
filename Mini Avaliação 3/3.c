/*Receba um número do usuário e imprima uma mensagem informando se ele é par ou impar. (Dica: use o operador resto)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Inserir numero inteiro: ");
    scanf("%d", &numero);
    int resto = numero%2;
    
    if (resto==0)
    { 
        printf ("O numero inserido e par");
    }
    if (resto==1)
    {
        printf ("O numero inserido e impar");
    }
    return 0;
}
