/*Faca um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
e imprima a media geral.*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float nota [15] = {0};
    float soma = 0, media=0;
    int i = 0;
    
    printf ("Insira as notas dos alunos: \n");
    
    while (i<15)
    {
        printf ("%d)", i+1);
        scanf ("%f", & nota[i]);
        if (nota[i]>=0 && nota[i]<=10) 
        {
            soma = soma + nota[i];
            i=i+1;
        } else {printf (" -> Nota Invalida <-\n");}
    }
    
    media = soma/15.0;
    
    printf ("Media geral = %.2f", media);
    
return 0;

}