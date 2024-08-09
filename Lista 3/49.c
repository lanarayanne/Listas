/* O funcionario chamado Carlos tem um colega chamado Joao que recebe um salario que // salario de Joao = 1/3 salario Carlos
equivale a um terco do seu salario. Carlos gosta de fazer aplicacoes na caderneta de
poupanca e vai aplicar seu salario integralmente nela, pois esta rendendo 2% ao mes // Carlos - 2%
Joao aplicara seu salario integralmente no fundo de renda fixa, que esta rendendo 5% // Joao - 5%
ao mes. Construa um programa que devera calcular e mostrar a quantidade de meses
necessarios para que o valor pertencente a Joao iguale ou ultrapasse o valor pertencente
a Carlos. Teste com outros valores para as taxas. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float saljoao, salcarlos, poup=0, fixa=0, joao, carlos;
    int mes=1;
    
    printf ("Informe o Salario de Carlos: ");
    scanf ("%f", &salcarlos);
    
    saljoao = (1.0/3.0)*salcarlos;
    
    printf ("\nSalario de Carlos: R$ %.2f", salcarlos);
    printf ("\nSalario de Joao: R$ %.2f", saljoao);
    
    joao = saljoao + fixa;
    carlos = salcarlos + poup;
    
    while (joao < carlos)
    {
        joao = saljoao + fixa; //salario + o que tinha na poupanca
        fixa = (0.5 * joao)+joao; //valor a mais 
        carlos = salcarlos + poup;
        poup = (0.2 * carlos)+carlos;
        printf ("\n\nMes = %d", mes);
        printf ("\nTotal Joao = R$ %.2f", joao);
        printf ("\nTotal Carlos = R$ %.2f", carlos);
        mes = mes + 1;
    }
    
    printf ("\n\nApos %d meses, Joao tera acumulado mais dinheiro que Carlos", mes-1);

    return 0;
}