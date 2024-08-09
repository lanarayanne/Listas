/* Crie um algoritmo que imprima o gênero de uma pessoa utilizando um dos caracteres (M ou F) como entrada.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    printf ("Digite M para Masculino ou F para Feminino: ");
    scanf("%c", &letra);

    switch (letra) 
    {
    case 77:
        printf ("O genero e Masculino");
        break;
    case 109:
        printf ("O genero e Masculino");
        break;
    case 70:
        printf ("O genero e Feminino");
        break;
    case 102:
        printf ("O genero e Feminino");
        break;
    default:
        printf ("Opção Invalida");
        break;
    }
    
return 0;
}