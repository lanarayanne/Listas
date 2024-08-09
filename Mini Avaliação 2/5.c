/* Receba do usuário a taxa de correção do salário mínimo e retorne o valor total já com aumento */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*declarar variavel*/
    float salario;
    float taxa;
    /*entrada de dados*/
    printf ("Inserir valor do salario: ");
    scanf("%f", &salario); 
    printf("Inserir taxa de correcao do salario\n(Ex: 10%%, digite 10): ");
    scanf("%f", &taxa); 
    float aumento= (taxa/100)*salario;
    float total = aumento + salario;
    /*saida de dados*/
    printf("O salario total com taxa de correcao de %.2f eh igual a %.2f", taxa, total);
    return 0;
}
