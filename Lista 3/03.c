/*Faca um algoritmo utilizando o comando while que mostra uma contagem regressiva
na tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” apos a
contagem.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num = 10;

    printf ("Contagem Regressiva:\n");
    while (num >=1 && num <=10)
    {
        printf ("%d\n", num);
        num = num - 1;
    }
    printf ("FIM!");
    
return 0;
}