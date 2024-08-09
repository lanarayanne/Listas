/* Ler 2 conjuntos de numeros reais, armazenar os produts e escalar eles. Conjunto de 5 
elementos. imprimir todos. o produto escalar é x1*y1 + x2*y2 + ...*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorA [5] = {0}; 
    int vetorB [5] = {0};
    int vetorC [5]={0};
    int soma = 0;
    
    printf ("Informe os valores de A:\n");
    
    for (int i=0; i<5; i++)
    {
        printf ("%d) ", i+1);
        scanf ("%d", &vetorA[i]);
    }
    
    printf ("Informe os valores de B:\n");
    
    for (int i=0; i<5; i++)
    {
        printf ("%d) ", i+1);
        scanf ("%d", &vetorB[i]);
    }
    
    for (int i=0; i<=5; i++)
    {
        vetorC [i] = vetorA [i] * vetorB [i];
        soma = soma + vetorC[i];
    }
    
    printf ("\nVetor A\n");
    for (int i=0; i<=5; i++) {
        printf ("%d ", vetorA [i]);}
    
    printf ("\nVetor B\n");
    for (int i=0; i<=5; i++) {
        printf ("%d ", vetorB [i]);}
    
    printf ("\nVetor C\n");
    for (int i=0; i<=5; i++) {
        printf ("%d ", vetorC [i]);}
    
    printf ("\nProduto escalar = %d", soma);
    
    return 0;
}