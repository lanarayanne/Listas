/*32) Leia dois vetores de inteiros x e y, cada um com 5 elementos (assuma que o usuario nao
informa elementos repetidos). Calcule e mostre os vetores resultantes em cada caso
abaixo: */

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int vetorx [5] = {1,4,12,6,5};
    int vetory [5] = {9,6,4,8,7};
    int soma [5] = {0};
    int multi[5] = {0};
    int dif [10] = {0};
    int intersec [10] = {0};
    int uniao [10] = {0};
    int cont =0, cont2=0;
    int tamanho = 0;
    int l = 0;
    
   
    printf("Informe 5 valores para o primeiro vetor\nObs.: Não Repetir");
    
    printf ("\n1)");
    scanf ("%d", &vetorx[0]);
    
    for (int i=1; i<5; i++) //Preencher Vetor X
    {
        int num;
        printf ("%d)", i+1);
        scanf ("%d", &num);
        int j=0;
        cont=0;
        while (j<i)
        {
            if (num != vetorx [j]) 
            {
                cont = cont+1;
                j=j+1;
            }
            else {
                j=j+1;
                i=i-1;
                printf ("Nao Repetir!\n");
            }
        }
        if (cont == i) {vetorx [i] = num;}
    }
    
    printf("Informe 5 valores para o segundo vetor\nObs.: Não Repetir");
    
    printf ("\n1)");
    scanf ("%d", &vetory[0]);
    
    for (int i=1; i<5; i++) //Preencher Vetor Y
    {
        int num;
        printf ("%d)", i+1);
        scanf ("%d", &num);
        int j=0;
        cont=0;
        while (j<i)
        {
            if (num != vetory [j]) 
            {
                cont = cont+1;
                j=j+1;
            }
            else {
                j=j+1;
                i=i-1;
                printf ("Nao Repetir!\n");
            }
        }
        if (cont == i) {vetory [i] = num;}
    }
    

    
    printf("\nVetor X: "); //Imprimir Vetor X
    for (int i=0; i<5; i++)
    {
        printf ("%d ", vetorx[i]);
    }
    printf("\nVetor Y: "); //Imprimir Vetor Y
    for (int i=0; i<5; i++)
    {
        printf ("%d ", vetory[i]);
    }
    
    for (int i=0; i<=5; i++)
    {
        soma[i]=vetorx[i] + vetory[i]; //Soma
        multi[i]=vetorx[i] * vetory[i]; //Multiplicacao
    }
    
    //Diferenca entre X e Y:
    
    cont=0;
    tamanho = 1;
    l = 1;
    
    for (int i=0; i<1; i++) {
        dif[i] = vetorx[i];
    }
    
    for (int i=1; i<5; i++) //Valores de X que nao existem em Y
    {
        tamanho=1;
        for (int j=0; j<5; j++)
        {
            if (vetorx[i] != vetory[j]) {cont=cont+1;}
            if (cont == 5)
            {
                int k=tamanho;
                while (k>0 && k<=tamanho) 
                {
                    if (vetorx[i] != dif[k-1]) {
                        cont2 = cont2+1;
                    }
                    k=k-1;
                }
                if (cont2 == tamanho) {
                        dif[l] = vetorx [i]; 
                        l=l+1;
                    }
                tamanho = tamanho+1;
            } 
            cont2=0;
        }
        cont=0;
    }
    
    printf ("\nDiferenca entre X e Y: ");
    for (int i=0; i<l; i++)
    {
        printf ("%d ", dif[i]);
    }
    
     
    // Insercao: os que aparecem nos 2:
    
    cont=0;
    tamanho = 0;
    l = 0;
    
    for (int i=0; i<5; i++)
    {
        tamanho=0;
        for (int j=0; j<5; j++)
        {
            if (vetorx[i] == vetory[j]) {
                int k=tamanho;
                while (k>0 && k<=tamanho) 
                {
                    if (vetorx[i] != intersec[k-1]) {
                        cont2 = cont2+1;
                    }
                    k=k-1;
                }
                if (cont2 == tamanho) {
                        intersec[l] = vetorx [i]; 
                        l=l+1;
                    }
                tamanho = tamanho+1;
            } 
            cont2=0;
        }
        cont=0;
    }
    
    printf ("\nInsercao entre X e Y: ");
    for (int i=0; i<l; i++)
    {
        printf ("%d ", intersec[i]);
    }
    
    
    // Uniao: os que aparecem nos 2:
    
    tamanho = 5;
    l = 5;
    
    for (int i=0; i<5; i++){
        uniao[i] = vetorx[i];
    }
    
    for (int i=0; i<5; i++)
    {
        int k=tamanho;
        while (k>0 && k<=tamanho) 
        {
            if (vetory[i] != uniao[k-1]) {
                cont2 = cont2+1;
            }
            k=k-1;
        }
        if (cont2 == tamanho) {
                uniao[l] = vetory [i]; 
                l=l+1;
        }
        tamanho = tamanho+1;
        cont2=0;
    }
    
    printf ("\nUniao entre X e Y: ");
    for (int i=0; i<l; i++)
    {
        printf ("%d ", uniao[i]);
    }
    return 0;
}