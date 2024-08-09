/* 2)Escreva um programa utilizando o comando switch que imprima um determinado mês de acordo com o número digitado pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int numero;
    printf ("Inserir numero do mês: ");
    scanf("%d", &numero);
    
    switch (numero) 
    {
    case 1:
        printf ("O mes %d eh Janeiro", numero);
        break;
    case 2:
        printf ("O mes %d eh Fevereiro", numero);
        break;
    case 3:
        printf ("O mes %d eh Março", numero);
        break;
    case 4:
        printf ("O mes %d eh Abril", numero);
        break;
    case 5:
        printf ("O mes %d eh Maio", numero);
        break;
    case 6:
        printf ("O mes %d eh Junho", numero);
        break;
    case 7:
        printf ("O mes %d eh Julho", numero);
        break;
    case 8:
        printf ("O mes %d eh Agosto", numero);
        break;
    case 9:
        printf ("O mes %d eh Setembro", numero);
        break;
    case 10:
        printf ("O mes %d eh Outubro", numero);
        break;
    case 11:
        printf ("O mes %d eh Novembro", numero);
        break;
    case 12:
        printf ("O mes %d eh Dezembro", numero);
        break;
    default:
        printf ("Valor Invalido");
        break;
    }
    
return 0;
}
