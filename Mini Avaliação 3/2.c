/* A média para que o aluno seja aprovado no IFPE sem precisar fazer prova final é 7,0. Ou seja, 
se um determinado estudante obtiver nota 7,0 ou superior estará aprovado, inferior a 7,0 não está aprovado. 
FAça um programa que receba UMA nota de zero (0) a dez (10) (considere a nota correta) e imprima uma mensagem 
informando a situação do estudante quanto a sua aprovação. (Pesquise a utilização da cláusula if)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota;
    printf("Inserir nota do aluno: ");
    scanf("%f", &nota);
    if (nota>=0 && nota <=10)
    { 
        if (nota >=7)
        {
            printf ("O aluno esta aprovado");
        }
        if (nota<7)
        {
            printf ("O aluno nao esta aprovado");
        }
    }
    if (nota<0 || nota>10)
    {
        printf ("A nota inserida esta incorreta\n");
        printf ("Por favor, reinicie o programa");
    }
    return 0;
}
