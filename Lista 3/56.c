/*Fac¸a um programa que calcule a soma de todos os numeros primos abaixo de dois ´
milhoes.*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num = 2000000;
    int cont1 = 1; // numero que vai testar se e primo (++1)
    int cont2 = 1; // numero para dividir por cont1 enquanto for menor ou igual a ele.
    int cont3 = 0; // quantidade de numeros que o cont1 e divisivel
    int soma = 0;
    
    
    while (cont1 < num)
    {
        while (cont2 <= cont1)
        {
            if (cont1%cont2 == 0) {cont3 = cont3 + 1;} //1
            cont2 = cont2 + 1; //2 - encerra
        }
        if (cont3 <= 2) {soma = soma + cont1;} //imprime 1 e cont4=1
        cont1 = cont1 + 1; //2
        cont2 = 1;
        cont3 = 0;
    }
    
    printf ("\nSoma dos numeros primos ate %d = %d", num, soma);
    return 0;
}