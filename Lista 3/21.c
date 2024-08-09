/*Faca um programa que receba dois numeros. Calcule e mostre:
• a soma dos numeros pares desse intervalo de numeros, incluindo os numeros digitados;
• a multiplicacao dos numeros impares desse intervalo, incluindo os digitados;*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, cont, dif, soma=0, mult=1;
    
    printf("Informe o primeiro numero: ");
    scanf ("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf ("%d", &num2);
    
    if (num1 <= num2)
    {
        cont = num1;
        dif = num2 - num1;
        
        while (cont >= num1 && cont<= num2)
        {
            if (cont%2 == 0) {soma = soma + cont;}
            else {mult = mult * cont;}
            cont = cont + 1;
        }
        
        printf ("\nSoma dos numeros pares entre %d e %d = %d", num1, num2, soma);
        printf ("\nMultiplicacao dos numeros impares entre %d e %d = %d", num1, num2, mult);
    }
    else 
    {
        cont = num2;
        dif = num1 - num2;
        
        while (cont >= num2 && cont<= num1)
        {
            if (cont%2 == 0) {soma = soma + cont;}
            else {mult = mult * cont;}
            cont = cont + 1;
        }
        
        printf ("\nSoma dos numeros pares entre %d e %d = %d", num1, num2, soma);
        printf ("\nMultiplicacao dos numeros impares entre %d e %d = %d", num1, num2, mult);
    }
    return 0;
}