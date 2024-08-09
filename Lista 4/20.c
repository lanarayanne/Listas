/*Escreva um programa que leia numeros inteiros no intervalo [0,50] e os armazene em um ´
vetor com 10 posic¸oes. Preencha um segundo vetor apenas com os n ˜ umeros ´ ´ımpares
do primeiro vetor. Imprima os dois vetores, 2 elementos por linha.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  vetor[10] = {0};
    int impar[10] = {0};
    int num, cont=0;
    int i=0, j=0;
    
    printf ("Informe 10 números de 0 a 50\n");
    
    for (int i=0; i<10; i++) // Ler 10 numeros entre 0 e 50
    {
        printf ("%d) ", i+1);
        scanf ("%d", &num);
        if (num>=0 && num<=50) {vetor [i]=num;}
        else {printf ("> Número inválido <\n"); i=i-1;}
        if (vetor [i]%2 != 0) {cont=cont+1;} //conta quantos numeros impares
    }
    
    i=0;
    for (int j=0; j<cont; j++) //Preencher vetor de impares ate a quantidade de numeros impares
    {
        
        if (vetor [i]%2 != 0) {impar[j] = vetor[i];}
        else {j=j-1;}
        i=i+1;
 
    }
    
    printf ("\nPrimeiro vetor: \n");
    
    for (int i=0; i<10; i++) //imprimir primeiro vetor
    {
        printf ("%d ", vetor[i]);
        if ((i+1)%2 == 0) {printf ("\n");}
    }
    
    printf ("\nSegundo vetor: \n");
    
    for (int i=0; i<cont; i++) //imprimir segundo vetor
    {
        printf ("%d ", impar[i]);
        if ((i+1)%2 ==0) {printf ("\n");}
    }
    
    return 0;
}