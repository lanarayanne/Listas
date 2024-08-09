/*Fac¸a um vetor de tamanho 50 preenchido com o seguinte valor: (i+ 5 ∗ i)%(i+ 1), sendo
i a posic¸ao do elemento no vetor. Em seguida imprima o vetor na tela*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  vetor[50] = {0};
    int num;
    
    for (int i=0; i<50; i++)
    {
        vetor[i]=(i+(5*i))%(i+1);
        printf ("%d ", vetor[i]);
    }
    
    return 0;
}