/* 3) Dado o valor do produto e a forma de pagamento. 1= à vista; 2= à prazo. 
Se o produto for pago à vista aplique um desconto de 10% antes de mostrar o valor final, 
senão informe o mesmo valor do produto.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor;
    printf ("Digite o valor do produto: ");
    scanf("%f", &valor);
    int opcao;
    printf ("Qual a forma de pagamento?\nDigite 1 - A vista\nDigite2 - Parcelado\n");
    scanf("%d", &opcao);
    float desconto = valor*0.1;
    float vfinal = valor-desconto;
    
    switch (opcao) 
    {
    case 1:
        printf ("Pagamento a vista \n");
        printf ("O valor a ser pago e igual a %.2f", vfinal);
        break;
    case 2:
        float obitos;
        printf ("Pagamento parcelado\n");
         printf ("O valor a ser pago e igual a %.2f", valor);
        break;
    default:
        printf ("Opção Invalida");
        break;
    }
    
return 0;
}
