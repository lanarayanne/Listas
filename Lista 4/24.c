/* Fac ̧a um programa que leia dez conjuntos de dois valores, o primeiro representando o numero do aluno e o segundo representando a sua altura em metros. Encontre o aluno  ́
mais baixo e o mais alto. Mostre o numero do aluno mais baixo e do mais alto, juntamente  ́
com suas alturas.*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num [5] = {0};
    float altura [5] = {0};
    int cont = 0;
    int i=0;
    float maior, menor;
    
    printf ("\nNumero do aluno: ");
    scanf ("%d", &num [0]);
    
    printf ("Altura do aluno: ");
    scanf ("%f", &altura [0]);
    maior = altura [0];
    menor = altura [0];
    
    for (int i=1; i<5; i++)
    {
        printf ("\nNumero do aluno: ");
        scanf ("%d", &num [i]);
        
        printf ("Altura do aluno: ");
        scanf ("%f", &altura [i]);
        if (altura [i]>maior) {maior = altura[i];}
        if (altura [i]<menor) {menor = altura[i];}
    }
    
    printf ("\n---Maior aluno---");
    
    for (int i=0; i<5; i++)
    {
        if (altura[i]==maior) 
        {
            printf ("\nNumero do aluno: %d", num[i]);
            printf ("\nAltura do aluno: %.2f", altura[i]);
        }
    }
    
    printf ("\n\n---Menor aluno---");
    for (int i=0; i<5; i++)
    {
        if (altura[i]==menor) 
        {
            printf ("\nNumero do aluno: %d", num[i]);
            printf ("\nAltura do aluno: %.2f", altura[i]);
        }
    }
    
    return 0;
}