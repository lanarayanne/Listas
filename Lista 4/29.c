/*29 ler 6 numeros, mostrar:
- os pares
- a soma dos pares
-os impares
-quantidade de impares*/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int vetor [6] = {0};
    int contimpar=0;
    int tamanho= 6;
    int soma=0;
    
    printf("Informe 6 valores\n");
    
    for (int i=0; i<tamanho; i++)
    {
        printf ("%d)", i+1);
        scanf ("%d", &vetor[i]);
    }
    
     printf ("\nNumeros pares: ");
    for (int i=0; i<tamanho; i++) // numeros pares
    {
        if (vetor[i]%2 == 0) 
        {
            printf ("%d ", vetor[i]);
            soma = soma+vetor[i];
        }
    }
    printf ("\nSoma dos numeros pares: %d\n", soma);
    
    printf ("\nNumeros impares: ");
    for (int i=0; i<tamanho; i++) // numeros impares
    {
        if (vetor[i]%2 != 0) 
        {
            printf ("%d ", vetor[i]);
            contimpar = contimpar+1;
        }
    }
    printf ("\nQuantidade de numeros impares: %d", contimpar);
    
    return 0;
}