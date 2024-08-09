/*Fac¸a um programa que leia um valor N inteiro e positivo, calcule o mostre o valor E,
conforme a formula a seguir
E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont2;
    float num, multi=1.0, soma = 1.0;
    
    printf ("Informe um numero: ");
    scanf ("%f", &num);
    
    cont2 = num;

    while (cont2 >= 1) // cont2 começa sendo o numero e diminui 1 a cada ciclo
    {
        cont2 = num; // informar valor de cont2 para atualizar o segundo while
        multi = 1.0; // reiniciar o multiplicador antes de começar um ciclo com o proximo numero
        while (cont2 >= 1) 
        {
            multi = multi * cont2; // 1*num, depois 1*(num-1)... ate o num = 1. ex: 5*4*3*2*1 (para no 1)
            cont2 = cont2 - 1;
        }
        soma = soma + (1/multi); // a soma é 1 + 1/fatorial do numero, depois resultado + (1/fatorial de num-1)... ate o num==1
        num = num - 1; // a cada ciclo num diminui 1.
        cont2 = num; // informar valor de cont2 para atualizar o primeiro while
    } 
    printf ("Numero E = %.2f", soma);
    
return 0;
}