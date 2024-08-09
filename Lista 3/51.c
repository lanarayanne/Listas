/*Um funcionario recebe aumento anual. Em 1995 foi contratado por 2000 reais. Em 1996
recebeu aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem ao
dobro do ano anterior. Faca programa que determine o salario atual do funcionario*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    double sal = 2000, aumento=0;
    int ano = 1995;
    
    printf("Ano %d, Aumento = %.1f, Salario = %.2f", ano, aumento, sal);
    
    ano = 1996;
    aumento = 1.5;
    sal = ((aumento/100)*sal)+sal;
    
    printf("\nAno %d, Aumento = %.1f, Salario = %.2f", ano, aumento, sal);
    
    while (ano < 2024)
    {
        sal = ((aumento/100)*sal)+sal;
        aumento = 2*aumento;
        ano = ano + 1;
        printf("\nAno %d, Aumento = %.f, Salario = %.2f", ano, aumento, sal);
    }
    printf("\nAno %d, Aumento = %.f, Salario = %.2f", ano, aumento, sal);

    return 0;
}