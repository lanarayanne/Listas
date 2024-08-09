/* Faça um programa em linguagem C que receba do teclado o peso (KG) e a altura (m) de um usuário, calcule e imprima no console, com duas casas decimais, o IMC deste usuário.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, altura;
    printf("Inserir valor do peso (KG): ");
    scanf("%f", &peso);
    printf("Inserir valor da altura (m): ");
    scanf("%f", &altura); 
    float IMC = peso/(altura*altura);
    printf("O IMC e igual a %.2f", IMC);
    return 0;
}

