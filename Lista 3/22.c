/*Escreva um programa completo que permita a qualquer aluno introduzir, pelo teclado,
uma sequencia arbitraria de notas (validas no intervalo de 10 a 20) e que mostre na tela,
como resultado, a correspondente media aritmetica. O numero de notas com que o aluno
pretenda efetuar o calculo nao sera fornecido ao programa, o qual terminara quando for
introduzido um valor que nao seja valido como nota de aprovacao. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int divi=0, soma=0;
    float nota, media, div2;
    
    printf("Obs: Notas validas: 10 - 20\nInforme uma nota nao valida para sair\n");
    printf("\nDigite uma nota: ");
    scanf ("%f", &nota);

    while (nota >= 10 && nota<= 20)
    {
        divi = divi + 1;
        soma = soma + nota;
        printf("\nDigite uma nota: ");
        scanf ("%f", &nota);
    }
    div2 = divi; // assim o divisor tambem e float
    media = soma / div2;
    printf ("\nMedia aritmetica = %.2f", media);
    
return 0;
}
