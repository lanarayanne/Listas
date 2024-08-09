/* Receba do usuário uma letra (char) e retorne a mesma letra como "CASE" complementar.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*declarar variavel*/
    char mai;
    /*entrada de dados*/
    printf ("Digite uma letra maiuscula: ");
    scanf("%c", &mai);
    char min = mai+32;
    /*saida de dados*/
    printf("A letra %c minuscula eh %c \n" , mai, min);
    return 0;
}
