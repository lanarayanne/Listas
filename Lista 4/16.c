/*Fac¸a um programa que leia um vetor de 5 posicoes para numeros reais e, depois, um
codigo inteiro. Se o codigo for zero, finalize o programa; se for 1, mostre o vetor na ordem ´
direta; se for 2, mostre o vetor na ordem inversa. Caso, o codigo for diferente de 1 e 2 ´
escreva uma mensagem informando que o codigo ´ e inv ´ alido.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  vetor[5] = {0};
    int codigo;
    
    printf ("Informe 5 valores:\n");
    
    for (int i=0; i<5; i++)
    {
        printf ("%d) ", i+1);
        scanf ("%f", &vetor[i]);
    }
    
    printf ("\n(0) para encerrar\n(1) Valores na forma direta\n(2) Valores na ordem inversa\n");
    scanf ("%d", &codigo);
    
    switch (codigo)
    {
        case 0:
        printf ("\nPrograma encerrado");
        break;
        
        case 1:
        for (int i=0; i<5; i++)
        {
            printf ("%.f ",vetor[i]);
        }
        break;
        
        case 2:
        for (int i=4; i>=0; i--)
        {
            printf ("%.f ", vetor[i]);
        }
        break;
        
        default:
        printf ("\nCodigo Invalido");
        break;
    }
    return 0;
}