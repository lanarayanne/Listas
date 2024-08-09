/*Fac¸a programas para calcular as seguintes sequencias: ˆ
1 + 2 + 3 + 4 + 5 + ... + n
1 − 2 + 3 − 4 + 5 + ... + (2n − 1)
1 + 3 + 5 + 7 + ... + (2n − 1)

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont = 1, cont2, termo, soma = 0;
    
    printf ("Informe a quantidade de termos: ");
    scanf ("%d", &termo);
    
   // 1 + 2 + 3 + 4 + 5 + ... + n 
   
    while (cont <= termo)
    {
        printf ("%d", cont);
        soma = soma + cont;
        cont = cont + 1;
        if (cont <= termo) {printf ("+");}
    } 
    printf ("= %d\n", soma);
    
    //1 − 2 + 3 − 4 + 5 + ... + (2n − 1)
    
    cont = 1;
    soma = 0;
    
    while (cont <= termo)
    {
        printf ("%d", cont);
        if (cont%2 != 0) {soma = soma + cont;}
        if (cont%2 == 0) {soma = soma - cont;}
        cont = cont + 1;
        if (cont <= termo) 
        {
            if (cont%2 != 0) {printf ("+");}
            if (cont%2 == 0) {printf ("-");}
        }
    } 
    printf ("= %d\n", soma);
    
    //1 − 2 + 3 − 4 + 5 + ... + (2n − 1)
    
    cont = 1;
    soma = 0;
    cont2 = 1;
    
    while (cont2 <= termo)
    {
        if (cont%2 != 0) 
        {
            printf ("%d", cont);
            soma = soma + cont;
            cont2 = cont2 + 1;
        } 
        cont = cont + 1;
        if (cont2 <= termo && cont%2 != 0) {printf ("+");}
    } 
    printf ("= %d\n", soma);

return 0;
}