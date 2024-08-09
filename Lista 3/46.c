/* Faca um programa que gera um numero aleatorio de 1 a 1000. O usuario deve tentar
acertar qual o numero foi gerado, a cada tentativa o programa devera informar se o
chute e menor ou maior que o numero gerado. O programa acaba quando o usuario
acerta o numero gerado. O programa deve informar em quantas tentativas o numero foi
descoberto*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    
    int num = rand() % 1001;
 
    int tent, cont = 1;
    
    printf ("\nTente adivinhar o numero\n");
    printf ("Tentativa: ");
    scanf ("%d", &tent);
    
    while (tent != num)
    {
        if (tent > num) {printf ("%d e maior que o numero", tent);}
        if (tent < num) {printf ("%d e menor que o numero", tent);}
        
        cont = cont + 1;
        
        printf ("\n\nTentativa: ");
        scanf ("%d", &tent);
        
    }
    printf ("Voce Acertou!");
    printf ("\nTentativas = %d", cont);

return 0;
}