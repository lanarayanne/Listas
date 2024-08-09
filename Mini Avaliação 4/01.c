/* Uma loja fornece 10% de desconto para funcionários e 5% de desconto para clientes vips. Faça um programa que calcule o valor total de uma compra a ser paga por uma determinada pessoa. O programa deverá ler o valor total da compra efetuada e um código que identifique se o comprador é um cliente comum (1), funcionário (2) ou vip (3).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    float valor;
    int cliente;
    printf ("Inserir valor da compra: ");
    scanf("%f", &valor);
    printf ("Para clientes comuns, digite 1\nPara funcionarios digite 2\nPara clientes vip digite 3\nInserir codigo: ");
    scanf("%d", &cliente);
    float descontof = (0.1)*valor; //desconto funcionário
    float valorfinalf = valor - descontof; 
    float descontov = (0.05)*valor; // desconto Vip
    float valorfinalv = valor - descontov;
    
    switch (cliente) 
    {
        case 1:
            printf ("Cliente comum\n");
            printf ("O valor da compra e %.2f", valor);
            break;
        case 2:
            printf ("Funcionario\n");
            printf ("O valor da compra e %.2f", valorfinalf);
            break;
        case 3:
            printf ("Cliente Vip\n");
            printf ("O valor da compra e %.2f", valorfinalv);
            break;
        default:
            printf("Opção invalida.\n");
    }

return 0;
}
