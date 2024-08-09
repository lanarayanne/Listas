/* Fac ̧a um programa que preencha um vetor de tamanho 100 com os 100 primeiros natu-
rais que nao s  ̃ ao m  ̃ ultiplos de 7 ou que terminam com 7.  ́*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vetor [100] = {0};
    int numero = 0;
    int num=numero;
    double tamanho=0;
    int divisor = 1;
    int resto=0;
    double potencia;
    
    for (int i=0; i<100; i++)
    {
        tamanho = 0;
        divisor = 1;
        num=numero;
        
        while (num/divisor > 0)
        {
            tamanho = tamanho+1;
            divisor = divisor * 10;
        }
        
        resto = num;
        
        while (tamanho > 1)
        {
            potencia = pow(10.0, tamanho-1);
            resto=resto%(int)potencia;
            tamanho = tamanho-1;
            
        }
        
        if (numero%7==0 || resto==7)
        {
            vetor[i] = numero;
            numero = numero+1;
        } 
        else 
        {
            i=i-1;
            numero = numero+1;
        }
    }
    
    printf ("\n");
     
    for (int i=0; i<100; i++)
    {
        printf ("%d ", vetor[i]);
    }
    
    return 0;
}