/* . Fac¸a um programa que apresente um menu de opcoes para o calculo das seguintes
operac¸oes entre dois numeros:
• adicao (opcao 1)
• subtracao (opcao 2)
• multiplicac¸ao (opcao 3)
• divisao (opcao 4)
• saida (opc¸ao 5)
O programa deve possibilitar ao usuario a escolha da operacao desejada, a exibicao do
resultado e a volta ao menu de opcoes. O programa so termina quando for escolhida a
opcao de saida (opcao 5). */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float num1, num2, result;
    int opcao;
    
    printf ("Escolha uma operacao:\n");
    printf ("(1) Adicao\n");
    printf ("(2) Subtracao\n");
    printf ("(3) Multiplicacao\n");
    printf ("(4) Divisao\n");
    printf ("(5) Saida\n");
    scanf ("%d", &opcao);
    
    while (opcao != 5)
    {
        printf ("\nNumero: ");
        scanf ("%f", &num1);
        printf ("Numero: ");
        scanf ("%f", &num2);
        
        switch (opcao)
        {
            case 1: 
            result=num1+num2;
            printf ("\n%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
            
            case 2: 
            result=num1-num2;
            printf ("\n%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
            
            case 3: 
            result=num1*num2;
            printf ("\n%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
            
            case 4: 
            result=num1/num2;
            printf ("\n%.2f / %.2f = %.2f\n", num1, num2, result);
            break;
            
            default: 
            printf ("Opcao Invalida");
            break;
        }
        printf ("\nEscolha uma operacao:\n");
        printf ("(1) Adicao\n");
        printf ("(2) Subtracao\n");
        printf ("(3) Multiplicacao\n");
        printf ("(4) Divisao\n");
        printf ("(5) Saida\n");
        scanf ("%d", &opcao);
    }
    
    printf ("Programa Encerrado");

return 0;
}