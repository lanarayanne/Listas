/*Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
juntamente com o maior, o menor e a media dos valores*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  vetor[5] = {0};
    int i = 0, maior, menor, soma=0;
    float media=0;
    
    printf ("Informe 5 numeros:\n");
    printf ("%d) ", i+1);
    scanf ("%d", &vetor[0]);
    maior = vetor [0];
    menor = vetor [0];
    
    soma = soma + vetor[0];
    
    for (i=1; i<5; i++)
    {
        printf ("%d) ", i+1);
        scanf ("%d", &vetor[i]);
        if (vetor[i]>maior) {maior = vetor[i];}
        if (vetor[i]<menor) {menor = vetor[i];}
        soma = soma + vetor [i];
    }
    
    printf ("\n ");
    for (i=0; i<5; i++)
    {
        printf ("%d ", vetor [i]);
    }
    
    media = soma/5.0;
    
    printf ("\nMaior = %d", maior);
    printf ("\nMenor = %d", menor);
    printf ("\nMedia = %.2f", media);
    
    return 0;
}