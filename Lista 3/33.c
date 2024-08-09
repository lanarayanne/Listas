/*  Dados n e dois numeros inteiros positivos,i e j, diferentes de 0, imprimir em ordem
crescente os n primeiros naturais que sao multiplos de i ou de j e ou de ambos. Exemplo:
Para n = 6, i = 2 e j = 3 a sa´ıda devera ser: 0,2,3,4,6,8.*/ 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, cont = 0, cont2 =1;
    
    printf ("Informe N: ");
    scanf ("%d", &n);
    
    printf ("Informe i: ");
    scanf ("%d", &i);
    
    printf ("Informe j: ");
    scanf ("%d", &j);
        
    while (cont2 <= n && i!=0 && j!=0)
    {
       if (cont%i == 0 || cont%j == 0) 
       {
           printf ("%d", cont);
           if (cont2 < n) {printf (",");}
           cont2 = cont2 + 1;
       }
       cont = cont + 1;
    } 
        
return 0;
}