/* Faca um programa que some os numeros impares contidos em um intervalo definido
pelo usuario. O usu ´ ario define o valor inicial do intervalo e o valor final deste intervalo
e o programa deve somar todos os numeros impares contidos neste intervalo. Caso o
usuario digite um intervalo inv ´ alido (comec¸ando por um valor maior que o valor final) deve
ser escrito uma mensagem de erro na tela, “Intervalo de valores invalido” e o programa
termina. Exemplo de tela de saida: Digite o valor inicial e valor final: 5 10
Soma dos impares neste intervalo: 21 */ // 5 + 7 + 9 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inicio, fim, cont1, soma=0;
    
    printf ("Digite o valor inicial: ");
    scanf ("%d", &inicio);
    
    printf ("Digite o valor fim: ");
    scanf ("%d", &fim);
    
    cont1 = inicio;
    
    if (fim < inicio) {printf ("ERRO: Intervalo de valores invalido");}
    else
    {
        while (cont1 >= inicio && cont1 <= fim)
        {
        if (cont1%2 != 0)
        {
            soma = soma + cont1;
            cont1 = cont1 + 1;
        }
        cont1 = cont1 + 1;
        }
        
        printf ("Soma dos impares no intervalo entre %d e %d: %d", inicio, fim, soma);
    }  
return 0;
}